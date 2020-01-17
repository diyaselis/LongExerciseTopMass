#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys, pprint
from ROOT import *
import tdrstyle

def myFitFunc(x=None,par=None):
    return par[0]*TMath.Gaus(x[0],par[1],par[2],kFALSE)

def gPeak(h=None,inDir=None,isData=None,lumi=None):

    # Set the stats off 
    gStyle.SetOptStat(0)
    gStyle.SetOptTitle(0)
    gStyle.SetTickLength(0.03)

    # Get the log(E) histogram 
    hFit = h.Clone()
    hFit.SetMarkerStyle(8)
    hFit.GetYaxis().SetTitleSize(0.062)
    hFit.GetYaxis().SetLabelSize(0.062)
    hFit.GetYaxis().SetTitleOffset(0.62)
    hFit.GetYaxis().SetTitle("1/E dN_{b jets}/dlog(E)")
    hFit.GetXaxis().SetLabelOffset(1)
    hFit.GetXaxis().SetTitle("log(E)")
    hFit.SetLineColor(kBlack)
    hFit.SetMarkerColor(kBlack)

    # Define the fit function and parameters
    ## Set limits
    minToFit = 3.6
    maxToFit = 4.8
    ## Set the function
    fitfunc = TF1("Gaussian fit", myFitFunc, minToFit, maxToFit, 3)
    ## Set normalization
    fitfunc.SetParameter(0, h.Integral());
    fitfunc.SetParLimits(0, 0.1*h.Integral(), 2.5*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc.SetParameter(1, 4.2);
    fitfunc.SetParLimits(1, 3.8, 4.4);
    ## Set gaussian width starting value and limits
    fitfunc.SetParameter(2, 0.65);
    fitfunc.SetParLimits(2, 0.35, 1.0);
    ## Some cosmetics
    fitfunc.SetLineColor(kBlue)
    fitfunc.SetLineWidth(3)
    fitfunc.SetLineStyle(1)

    # Do the fit
    hFit.Fit("Gaussian fit","EM", "", minToFit, maxToFit) 
    # "E" stands for Minos, "M" for improving fit results
    # cf. ftp://root.cern.ch/root/doc/5FittingHistograms.pdf    

    # Get Fit Parameters
    mean = fitfunc.GetParameter(1)
    meanErr = fitfunc.GetParError(1)
    sigma = fitfunc.GetParameter(2)
    sigmaErr = fitfunc.GetParError(2)
    chi2 = fitfunc.GetChisquare()
    NDF = fitfunc.GetNDF()
    chi2ndf = chi2/NDF
    # Calculate the uncalibrated Energy peak position and its uncertainty
    Ereco = math.exp(mean)
    Err = abs(Ereco*meanErr)

    # Make a pull distribution    
    hPull = h.Clone("Pull")
    for ibin in range(1, hFit.GetNbinsX()+1):
        if hFit.GetBinCenter(ibin) > minToFit and hFit.GetBinCenter(ibin) <= maxToFit:
            binCont = hFit.GetBinContent(ibin)
            binErr = hFit.GetBinError(ibin)
            valIntegral = fitfunc.Eval(hFit.GetBinCenter(ibin))
            if binErr !=0:
              pull = (binCont-valIntegral)/binErr
              hPull.SetBinContent(ibin, pull)
              hPull.SetBinError(ibin, 1)
        else:      
            hPull.SetBinContent(ibin, 0.)
            hPull.SetBinError(ibin, 0.)
    hPull.SetMarkerStyle(8)
    hPull.GetYaxis().SetNdivisions(504)
    hPull.GetYaxis().SetTitleSize(0.140)
    hPull.GetYaxis().SetLabelSize(0.140)
    hPull.GetYaxis().SetTitleOffset(0.27)
    hPull.GetYaxis().SetTitle("#frac{Data-Fit}{Uncertainty}")
    hPull.GetXaxis().SetTitleSize(0.160)
    hPull.GetXaxis().SetLabelSize(0.150)
    hPull.GetXaxis().SetTitleOffset(0.8)
    hPull.GetXaxis().SetTitle("log(E)")
    hPull.SetLineColor(kBlack)
    hPull.SetMarkerColor(kBlack)

    # Plot the result
    ## Create a canvas with two pads for plotting your histograms
    c = TCanvas('c','c')
    p1 = ROOT.TPad('p1','p1',0.,0.3,1.0,1.0)
    p1.SetBorderMode(0)
    p1.SetBorderSize(2)
    p1.SetTickx(1)
    p1.SetTicky(1)
    p1.SetTopMargin(0.13)
    p1.SetBottomMargin(0.02)
    p1.Draw()    
    p2 = ROOT.TPad('p2','p2',0.,0.,1.0,0.3)
    p2.SetGridy()
    p2.SetBorderMode(0)
    p2.SetBorderSize(2)
    p2.SetTickx(1)
    p2.SetTicky(1)
    p2.SetTopMargin(0.05)
    p2.SetBottomMargin(0.3)
    p2.Draw()
    ## Draw in the pad of the fit
    p1.cd()
    hFit.GetXaxis().SetRangeUser(minToFit,maxToFit)     
    hFit.Draw()
    ##Create some labels about the statistics
    caption1 = TLatex()
    caption1.SetTextSize(0.045)
    caption1.SetTextFont(42)
    caption1.SetNDC()
    caption1.DrawLatex(0.75,0.8,'Fit Results')
    caption1.DrawLatex(0.73,0.76,'#mu = %4.2f #pm %4.2f'%(mean,meanErr))
    caption1.DrawLatex(0.73,0.72,'#sigma = %4.2f #pm %4.2f'%(sigma,sigmaErr))
    caption1.DrawLatex(0.74,0.67,'#chi^{2}/ndf = %4.2f'%(chi2ndf))
    caption2 = TLatex()
    caption2.SetTextSize(0.05)
    caption2.SetTextFont(42)
    caption2.SetNDC()  
    caption2.DrawLatex(0.35,0.44,'Uncalibrated Measurement')
    caption2.DrawLatex(0.35,0.39,'<E_{b}> = (%4.2f #pm %4.2f) GeV'%(Ereco,Err))
    ## CMS labels
    label1 = TLatex()
    label1.SetNDC()
    label1.SetTextFont(60)
    label1.SetTextSize(0.09)
    label1.SetTextAlign(31)
    label1.DrawLatex(0.19, 0.9, "CMS")
    label2 = TLatex()
    label2.SetNDC()
    label2.SetTextFont(42)
    label2.SetTextSize(0.0765)
    label2.SetTextAlign(11)
    if isData is True:
        label2.DrawLatex(0.2, 0.9, "#it{Preliminary}")
    else:
        label2.DrawLatex(0.2, 0.9, "#it{Simulation preliminary}")
    label3 = TLatex()
    label3.SetNDC()
    label3.SetTextFont(42)
    label3.SetTextSize(0.0765)
    label3.SetTextAlign(31)
    label3.DrawLatex(0.90, 0.9, "%d pb^{-1} (13 TeV)" % lumi)
    ## Edit the pad for the pull
    p2.cd()
    hPull.GetXaxis().SetRangeUser(minToFit,maxToFit)
    hPull.Draw("e")

    #save and delete
    sName = inDir+"/fit_";
    if isData is True:
        sName = sName+"Data";
    else: 
        sName = sName+"MC";
    c.SaveAs(sName+".pdf");
    c.SaveAs(sName+".png");
    del c
    fitfunc.IsA().Destructor(fitfunc)
    del caption1,caption2

    #all done here ;)

    topMass = Ereco+math.sqrt(80.385**2-4.18**2+Ereco**2)
    print topMass
    return Ereco,Err


def plotter(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    fitfunc_gaus = TF1("Gaussian", myFitFunc, 64.0, 67.0, 3)
    ## Set normalization
    fitfunc_gaus.SetParameter(0, h.Integral());
    fitfunc_gaus.SetParLimits(0, 0.1*h.Integral(), 2.5*h.Integral());
    ## Set gaussian mean starting value and limits
    fitfunc_gaus.SetParameter(1, 64.5);
    fitfunc_gaus.SetParLimits(1, 63.0, 67.0);
    ## Set gaussian width starting value and limits
    fitfunc_gaus.SetParameter(2, 0.05);
    fitfunc_gaus.SetParLimits(2, 0.1, 2.0);

    h.Fit("Gaussian","EM","",62.0,67.0)
    h.Draw()

    label1 = TLatex()
    label1.SetNDC()
    label1.SetTextFont(60)
    label1.SetTextSize(0.07)
    label1.SetTextAlign(31)
    label1.DrawLatex(0.32, 0.92, "CMS DAS")
    label2 = TLatex()
    label2.SetNDC()
    label2.SetTextFont(42)
    label2.SetTextSize(0.06)
    label2.SetTextAlign(11)
    label2.DrawLatex(0.33, 0.92, "#it{Simulation}")

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1


def plotter_err(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    h.Fit("gaus")
    h.Draw()

    label1 = TLatex()
    label1.SetNDC()
    label1.SetTextFont(60)
    label1.SetTextSize(0.07)
    label1.SetTextAlign(31)
    label1.DrawLatex(0.32, 0.92, "CMS DAS")
    label2 = TLatex()
    label2.SetNDC()
    label2.SetTextFont(42)
    label2.SetTextSize(0.06)
    label2.SetTextAlign(11)
    label2.DrawLatex(0.33, 0.92, "#it{Simulation}")

    c1.Update()
    stats = c1.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c1.RedrawAxis()
    c1.Update()

    c1.SaveAs(name)
    c1.Close()
    del c1

def main():

    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    parser.add_option('-d', '--isData',  action = 'store_true',   dest='isData')
    parser.add_option('-i', '--inDir',   dest='inDir',   help='input directory',          default='nominal',    type='string')
    parser.add_option('-j', '--json',    dest='json',    help='json with list of files',  default="../analyzeNplot/data/samples_Run2015_25ns.json", type='string')
    parser.add_option('-l', '--lumi',    dest='lumi' ,   help='lumi to print out',        default=2444.,        type=float)
    (opt, args) = parser.parse_args()
           
    # Read list of MC samples
    if opt.isData is not True:
        samplesList=[]
        jsonFile = open(opt.json,'r')
        jsonList=json.load(jsonFile,encoding='utf-8').items()
        jsonFile.close()
        for tag,sample in jsonList: 
            if not sample[3] in samplesList and not "Data" in sample[3]:
                samplesList.append(sample[3])

    # Open the root file
    fiName = "../analyzeNplot/"+opt.inDir+"/plots/plotter.root"
    print "... processing", fiName
    if not os.path.isfile(fiName):
        print "Help, file doesn't exist"
        exit(-1)
    res = ROOT.TFile(fiName, "read")

    #Get the histogram 
    hName = "bjetenls/"   
    if opt.isData is True:
        hName = hName + "bjetenls"
    else:
        hName = hName + "bjetenls_" + samplesList[0]
    histo = res.Get(str(hName))
    histo.SetDirectory(0)
    if opt.isData is not True:
        for sampleInfo in samplesList:
            if sampleInfo is not samplesList[0]: 
                histo.Add(res.Get(str("bjetenls/bjetenls_"+sampleInfo)).Clone());

    # Create the output directory
    if not os.path.isdir(opt.inDir):
        os.mkdir(opt.inDir)

    # Calculate the energy peak position in the big MC sample
    Eb,DEb = gPeak(h=histo,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
    print "<E_{b}> = (%3.2f #pm %3.2f) GeV" % (Eb,DEb)


    #Generate pseudo-exp
    r3 = TRandom3()
    r3.SetSeed(0)
    Npe = 20

    E_peak = TH1F("E_peak", "", 100,60,70) # 169v5
    E_peak_err = TH1F("E_peak_err", "", 400,0.01,0.15) # 169v5
    hpull = TH1F("hpull", "",100,-100,100)

    pred = 65.740 #169v5
    print(Eb,DEb)
    for i in range(0,Npe):
        hpe = histo.Clone()
        for ibin in range(0,histo.GetNbinsX()):
            y = histo.GetBinContent(ibin)
            x = histo.GetXaxis().GetBinCenter(ibin)
            fluct = r3.PoissonD(y*math.exp(x))/math.exp(x)
            hpe.SetBinContent(ibin,fluct)
            err = math.sqrt(fluct)/math.exp(x)
            hpe.SetBinError(ibin,err)
        print(hpe.GetMean())
 # Calculate the energy peak position in the big MC sample
        Eb,DEb = gPeak(h=hpe,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
        print(Eb,DEb)
        E_peak.Fill(Eb)
        E_peak_err.Fill(DEb)
        pull=(Eb-pred)/DEb
        hpull.Fill(pull)

    plotter(E_peak,"MC_169/Eb.png")
    plotter_err(E_peak_err,"MC_169/ErrEb.png")
    plotter_err(hpull,"MC_169/Pull.png")

    res.Close()
               
if __name__ == "__main__":
    sys.exit(main())
