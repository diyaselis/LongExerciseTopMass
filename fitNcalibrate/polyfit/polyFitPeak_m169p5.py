#!/usr/bin/env python
import math, ROOT, json, optparse, os, sys, pprint
from ROOT import *
import tdrstyle

def myFitFunc(x=None,par=None):
    return par[4]*(par[0]+par[1]*(x[0]-par[2])*(x[0]-par[3])**2)

def Calc(a, b, c, xmax,d,e,f):
    first = -(math.sqrt(b**2-3*a*c)+b)/(3*c)
    second = (math.sqrt(b**2-3*a*c)-b)/(3*c)

    if abs(first-xmax)>abs(second-xmax):
        return
    else:
        return -(math.sqrt(e**2-3*d*f)-e)/(3*f)

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
    fitfunc = TF1("Gaussian fit", myFitFunc, minToFit, maxToFit, 5)
    ## Set normalization
    
     
    fitfunc.SetParameter(0, 0.07);
    fitfunc.SetParLimits(0, -0.1, 0.1);
    ## Set linear
    fitfunc.SetParameter(1, 0.01);
    fitfunc.SetParLimits(1, -0.5, 0.5);
    ## Set quadratic
    fitfunc.SetParameter(2, 10.45);
    fitfunc.SetParLimits(2, -10, 20);
    ## Set Cubic
    fitfunc.SetParameter(3, 4.17);
    fitfunc.SetParameter(4, h.Integral())
    fitfunc.SetParLimits(4, 0.1*h.Integral(), 2.5*h.Integral()) 
   
   
   
   
   
   
   
   
   
   
   
    ## Some cosmetics
    fitfunc.SetLineColor(kBlue)
    fitfunc.SetLineWidth(3)
    fitfunc.SetLineStyle(1)

    # Do the fit
    hFit.Fit("Gaussian fit","EM", "", minToFit, maxToFit)
    # "E" stands for Minos, "M" for improving fit results
    # cf. ftp://root.cern.ch/root/doc/5FittingHistograms.pdf    

    # Get Fit Parameters
    constant = fitfunc.GetParameter(0)
    constantErr = fitfunc.GetParError(0)
    linear = fitfunc.GetParameter(1)
    linearErr = fitfunc.GetParError(1)
    quadratic = fitfunc.GetParameter(2)
    quadraticErr = fitfunc.GetParError(2)
    cubic = fitfunc.GetParameter(3)
    cubicErr = fitfunc.GetParError(3)
    chi2 = fitfunc.GetChisquare()
    NDF = fitfunc.GetNDF()
    chi2ndf = chi2/NDF
    mean = fitfunc.GetParameter(3)
    meanErr = fitfunc.GetParError(3)
    # Calculate the uncalibrated Energy peak position and its uncertainty
    Ereco = math.exp(mean)
    Err = abs(Ereco*meanErr)  
   
    #all done here ;)
    return Ereco,Err

def plotter(h=None,name=None):
    c1 = TCanvas("c1","")
    c1.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    h.Fit("gaus")#","","",64.0,67.0)
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

def plotterErr(h=None,name=None):
    c2 = TCanvas("c2","")
    c2.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    h.Fit("gaus")#,"","",0,0.1)
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

    c2.Update()
    stats = c2.GetPrimitive("stats")
    stats.__class__ = ROOT.TPaveStats
    stats.SetY1NDC(0.6)
    stats.SetY2NDC(0.9)
    stats.SetX1NDC(0.6)
    stats.SetX2NDC(0.9)
    c2.RedrawAxis()
    c2.Update()

    c2.SaveAs(name)
    c2.Close()

def plotterPull(h=None,name=None):
    c3 = TCanvas("c3","")
    c3.cd()
    tdrstyle.setTDRStyle()
    gROOT.ForceStyle()
    gROOT.Reset()
    h.UseCurrentStyle()
    #h.Fit("gaus","","",64.0,67.0)
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

    c3.Update()
    
    c3.SaveAs(name)
    c3.Close()

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

    #Generate pseudo-exp
    r3 = TRandom3()
    r3.SetSeed(0)
    Npe = 2000
    
   
    histoEb = TH1F("histoEb", "", 200,61,68) # 169v5
    histoDEb = TH1F("histoDEb", "", 200,0,0.1) # 169v5
    histoPull = TH1F("histoPull", "",100,-100,100)

    pred = 65.74 #169v5  
    
    

    
 
    for i in range(0,Npe):
        histoPeak = histo.Clone()
        for ibin in range(0,histo.GetNbinsX()):
            y = histo.GetBinContent(ibin)
            x = histo.GetXaxis().GetBinCenter(ibin)
            fluct = r3.PoissonD(y*math.exp(x))/math.exp(x)
            histoPeak.SetBinContent(ibin,fluct)
            err = math.sqrt(fluct)/math.exp(x)
            histoPeak.SetBinError(ibin,err)
        # Calculate the energy peak position in the big MC sample
        Eb,DEb = gPeak(h=histoPeak,inDir=opt.inDir,isData=opt.isData,lumi=opt.lumi)
        #print(Eb,DEb)
        histoEb.Fill(Eb)
        histoDEb.Fill(DEb)
        pull=(Eb-pred)/DEb
        histoPull.Fill(pull)


    plotter(histoEb,"PolyFit/Eb_m165p5.png")
    plotterErr(histoDEb,"PolyFit/DEb_m165p5.png")
    plotterPull(histoPull,"PolyFit/Pull_m165p5.png")

    res.Close()

if __name__ == "__main__":
    sys.exit(main())


