void lep1pt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 17:31:15 2020) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-28.91566,-4766.788,212.0482,34957.28);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__9 = new TH1F("frame__9","t#bar{t}",20,0,200);
   frame__9->SetMinimum(0.1);
   frame__9->SetMaximum(34560.04);
   frame__9->SetEntries(365945);
   frame__9->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__9->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__9->SetMarkerColor(ci);
   frame__9->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   frame__9->GetXaxis()->SetLabelFont(42);
   frame__9->GetXaxis()->SetLabelSize(0.035);
   frame__9->GetXaxis()->SetTitleSize(0.035);
   frame__9->GetXaxis()->SetTitleFont(42);
   frame__9->GetYaxis()->SetTitle(" Events");
   frame__9->GetYaxis()->SetNoExponent();
   frame__9->GetYaxis()->SetLabelFont(42);
   frame__9->GetYaxis()->SetTitleSize(0.045);
   frame__9->GetYaxis()->SetTitleOffset(1.3);
   frame__9->GetYaxis()->SetTitleFont(42);
   frame__9->GetZaxis()->SetLabelFont(42);
   frame__9->GetZaxis()->SetLabelSize(0.035);
   frame__9->GetZaxis()->SetTitleSize(0.035);
   frame__9->GetZaxis()->SetTitleFont(42);
   frame__9->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_5 = new TH1F("mc_stack_5","mc",20,0,200);
   mc_stack_5->SetMinimum(-2.396071e-07);
   mc_stack_5->SetMaximum(27913.88);
   mc_stack_5->SetDirectory(0);
   mc_stack_5->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_5->SetLineColor(ci);
   mc_stack_5->GetXaxis()->SetLabelFont(42);
   mc_stack_5->GetXaxis()->SetLabelSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleFont(42);
   mc_stack_5->GetYaxis()->SetLabelFont(42);
   mc_stack_5->GetYaxis()->SetLabelSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleOffset(0);
   mc_stack_5->GetYaxis()->SetTitleFont(42);
   mc_stack_5->GetZaxis()->SetLabelFont(42);
   mc_stack_5->GetZaxis()->SetLabelSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_5);
   
   
   TH1F *lep1pt_t#bar{t}_stack_1 = new TH1F("lep1pt_t#bar{t}_stack_1","t#bar{t}",20,0,200);
   lep1pt_t#bar{t}_stack_1->SetBinContent(3,17922.43);
   lep1pt_t#bar{t}_stack_1->SetBinContent(4,25429.94);
   lep1pt_t#bar{t}_stack_1->SetBinContent(5,22131.09);
   lep1pt_t#bar{t}_stack_1->SetBinContent(6,17818.17);
   lep1pt_t#bar{t}_stack_1->SetBinContent(7,13579.88);
   lep1pt_t#bar{t}_stack_1->SetBinContent(8,10357.36);
   lep1pt_t#bar{t}_stack_1->SetBinContent(9,7793.731);
   lep1pt_t#bar{t}_stack_1->SetBinContent(10,5731.683);
   lep1pt_t#bar{t}_stack_1->SetBinContent(11,4194.133);
   lep1pt_t#bar{t}_stack_1->SetBinContent(12,3216.054);
   lep1pt_t#bar{t}_stack_1->SetBinContent(13,2363.848);
   lep1pt_t#bar{t}_stack_1->SetBinContent(14,1704.018);
   lep1pt_t#bar{t}_stack_1->SetBinContent(15,1319.345);
   lep1pt_t#bar{t}_stack_1->SetBinContent(16,1010.88);
   lep1pt_t#bar{t}_stack_1->SetBinContent(17,754.4371);
   lep1pt_t#bar{t}_stack_1->SetBinContent(18,577.7324);
   lep1pt_t#bar{t}_stack_1->SetBinContent(19,463.7187);
   lep1pt_t#bar{t}_stack_1->SetBinContent(20,341.8126);
   lep1pt_t#bar{t}_stack_1->SetBinContent(21,1391.031);
   lep1pt_t#bar{t}_stack_1->SetBinError(3,85.57042);
   lep1pt_t#bar{t}_stack_1->SetBinError(4,102.0565);
   lep1pt_t#bar{t}_stack_1->SetBinError(5,95.30918);
   lep1pt_t#bar{t}_stack_1->SetBinError(6,85.37927);
   lep1pt_t#bar{t}_stack_1->SetBinError(7,74.73608);
   lep1pt_t#bar{t}_stack_1->SetBinError(8,65.31083);
   lep1pt_t#bar{t}_stack_1->SetBinError(9,56.73007);
   lep1pt_t#bar{t}_stack_1->SetBinError(10,48.64311);
   lep1pt_t#bar{t}_stack_1->SetBinError(11,41.64414);
   lep1pt_t#bar{t}_stack_1->SetBinError(12,36.50983);
   lep1pt_t#bar{t}_stack_1->SetBinError(13,31.27155);
   lep1pt_t#bar{t}_stack_1->SetBinError(14,26.57428);
   lep1pt_t#bar{t}_stack_1->SetBinError(15,23.395);
   lep1pt_t#bar{t}_stack_1->SetBinError(16,20.44942);
   lep1pt_t#bar{t}_stack_1->SetBinError(17,17.7471);
   lep1pt_t#bar{t}_stack_1->SetBinError(18,15.50783);
   lep1pt_t#bar{t}_stack_1->SetBinError(19,13.92543);
   lep1pt_t#bar{t}_stack_1->SetBinError(20,11.95166);
   lep1pt_t#bar{t}_stack_1->SetBinError(21,24.08519);
   lep1pt_t#bar{t}_stack_1->SetEntries(360257);
   lep1pt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   lep1pt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   lep1pt_t#bar{t}_stack_1->SetMarkerColor(ci);
   lep1pt_t#bar{t}_stack_1->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   lep1pt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   lep1pt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   lep1pt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   lep1pt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   lep1pt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   lep1pt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(lep1pt_t#bar{t}_stack_1,"hist");
   
   TH1F *lep1pt_Diboson_stack_2 = new TH1F("lep1pt_Diboson_stack_2","Diboson",20,0,200);
   lep1pt_Diboson_stack_2->SetBinContent(3,16.29067);
   lep1pt_Diboson_stack_2->SetBinContent(4,27.10351);
   lep1pt_Diboson_stack_2->SetBinContent(5,26.55677);
   lep1pt_Diboson_stack_2->SetBinContent(6,16.17835);
   lep1pt_Diboson_stack_2->SetBinContent(7,15.22906);
   lep1pt_Diboson_stack_2->SetBinContent(8,12.7452);
   lep1pt_Diboson_stack_2->SetBinContent(9,12.66704);
   lep1pt_Diboson_stack_2->SetBinContent(10,5.94598);
   lep1pt_Diboson_stack_2->SetBinContent(11,8.916947);
   lep1pt_Diboson_stack_2->SetBinContent(12,5.757986);
   lep1pt_Diboson_stack_2->SetBinContent(13,5.349697);
   lep1pt_Diboson_stack_2->SetBinContent(14,3.8648);
   lep1pt_Diboson_stack_2->SetBinContent(15,1.191499);
   lep1pt_Diboson_stack_2->SetBinContent(16,2.994509);
   lep1pt_Diboson_stack_2->SetBinContent(17,2.335699);
   lep1pt_Diboson_stack_2->SetBinContent(18,2.315715);
   lep1pt_Diboson_stack_2->SetBinContent(19,2.057485);
   lep1pt_Diboson_stack_2->SetBinContent(20,0.4240725);
   lep1pt_Diboson_stack_2->SetBinContent(21,14.22618);
   lep1pt_Diboson_stack_2->SetBinError(3,2.500202);
   lep1pt_Diboson_stack_2->SetBinError(4,3.258488);
   lep1pt_Diboson_stack_2->SetBinError(5,3.192728);
   lep1pt_Diboson_stack_2->SetBinError(6,2.468953);
   lep1pt_Diboson_stack_2->SetBinError(7,2.462626);
   lep1pt_Diboson_stack_2->SetBinError(8,2.231033);
   lep1pt_Diboson_stack_2->SetBinError(9,2.186041);
   lep1pt_Diboson_stack_2->SetBinError(10,1.512689);
   lep1pt_Diboson_stack_2->SetBinError(11,1.905635);
   lep1pt_Diboson_stack_2->SetBinError(12,1.501571);
   lep1pt_Diboson_stack_2->SetBinError(13,1.453606);
   lep1pt_Diboson_stack_2->SetBinError(14,1.232989);
   lep1pt_Diboson_stack_2->SetBinError(15,0.6883835);
   lep1pt_Diboson_stack_2->SetBinError(16,1.081369);
   lep1pt_Diboson_stack_2->SetBinError(17,0.9648498);
   lep1pt_Diboson_stack_2->SetBinError(18,0.962299);
   lep1pt_Diboson_stack_2->SetBinError(19,0.8909597);
   lep1pt_Diboson_stack_2->SetBinError(20,0.4240725);
   lep1pt_Diboson_stack_2->SetBinError(21,2.400629);
   lep1pt_Diboson_stack_2->SetEntries(511);
   lep1pt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   lep1pt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   lep1pt_Diboson_stack_2->SetMarkerColor(ci);
   lep1pt_Diboson_stack_2->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   lep1pt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   lep1pt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   lep1pt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   lep1pt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   lep1pt_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   lep1pt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   lep1pt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   lep1pt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   lep1pt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   lep1pt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   lep1pt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   lep1pt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   lep1pt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   lep1pt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(lep1pt_Diboson_stack_2,"hist");
   
   TH1F *lep1pt_DY_stack_3 = new TH1F("lep1pt_DY_stack_3","DY",20,0,200);
   lep1pt_DY_stack_3->SetBinContent(3,128.4896);
   lep1pt_DY_stack_3->SetBinContent(4,106.4932);
   lep1pt_DY_stack_3->SetBinContent(5,33.97976);
   lep1pt_DY_stack_3->SetBinContent(6,31.8677);
   lep1pt_DY_stack_3->SetBinContent(7,20.7678);
   lep1pt_DY_stack_3->SetBinContent(10,17.70928);
   lep1pt_DY_stack_3->SetBinError(3,46.1157);
   lep1pt_DY_stack_3->SetBinError(4,43.61229);
   lep1pt_DY_stack_3->SetBinError(5,24.02732);
   lep1pt_DY_stack_3->SetBinError(6,22.27987);
   lep1pt_DY_stack_3->SetBinError(7,20.7678);
   lep1pt_DY_stack_3->SetBinError(10,17.70928);
   lep1pt_DY_stack_3->SetEntries(21);
   lep1pt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   lep1pt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   lep1pt_DY_stack_3->SetMarkerColor(ci);
   lep1pt_DY_stack_3->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   lep1pt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   lep1pt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   lep1pt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   lep1pt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   lep1pt_DY_stack_3->GetYaxis()->SetTitle(" Events");
   lep1pt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   lep1pt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   lep1pt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   lep1pt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   lep1pt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   lep1pt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   lep1pt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   lep1pt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   lep1pt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(lep1pt_DY_stack_3,"hist");
   
   TH1F *lep1pt_W_stack_4 = new TH1F("lep1pt_W_stack_4","W",20,0,200);
   lep1pt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   lep1pt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   lep1pt_W_stack_4->SetMarkerColor(ci);
   lep1pt_W_stack_4->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   lep1pt_W_stack_4->GetXaxis()->SetLabelFont(42);
   lep1pt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   lep1pt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   lep1pt_W_stack_4->GetXaxis()->SetTitleFont(42);
   lep1pt_W_stack_4->GetYaxis()->SetTitle(" Events");
   lep1pt_W_stack_4->GetYaxis()->SetLabelFont(42);
   lep1pt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   lep1pt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   lep1pt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   lep1pt_W_stack_4->GetYaxis()->SetTitleFont(42);
   lep1pt_W_stack_4->GetZaxis()->SetLabelFont(42);
   lep1pt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   lep1pt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   lep1pt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(lep1pt_W_stack_4,"hist");
   
   TH1F *lep1pt_SinglesPtop_stack_5 = new TH1F("lep1pt_SinglesPtop_stack_5","Single top",20,0,200);
   lep1pt_SinglesPtop_stack_5->SetBinContent(3,738.7236);
   lep1pt_SinglesPtop_stack_5->SetBinContent(4,1021.104);
   lep1pt_SinglesPtop_stack_5->SetBinContent(5,949.1421);
   lep1pt_SinglesPtop_stack_5->SetBinContent(6,740.552);
   lep1pt_SinglesPtop_stack_5->SetBinContent(7,616.357);
   lep1pt_SinglesPtop_stack_5->SetBinContent(8,452.3081);
   lep1pt_SinglesPtop_stack_5->SetBinContent(9,352.1868);
   lep1pt_SinglesPtop_stack_5->SetBinContent(10,305.446);
   lep1pt_SinglesPtop_stack_5->SetBinContent(11,230.3094);
   lep1pt_SinglesPtop_stack_5->SetBinContent(12,157.4303);
   lep1pt_SinglesPtop_stack_5->SetBinContent(13,152.8996);
   lep1pt_SinglesPtop_stack_5->SetBinContent(14,121.0076);
   lep1pt_SinglesPtop_stack_5->SetBinContent(15,96.81998);
   lep1pt_SinglesPtop_stack_5->SetBinContent(16,73.84495);
   lep1pt_SinglesPtop_stack_5->SetBinContent(17,66.75147);
   lep1pt_SinglesPtop_stack_5->SetBinContent(18,66.21837);
   lep1pt_SinglesPtop_stack_5->SetBinContent(19,42.44503);
   lep1pt_SinglesPtop_stack_5->SetBinContent(20,32.25982);
   lep1pt_SinglesPtop_stack_5->SetBinContent(21,222.561);
   lep1pt_SinglesPtop_stack_5->SetBinError(3,31.35505);
   lep1pt_SinglesPtop_stack_5->SetBinError(4,36.85716);
   lep1pt_SinglesPtop_stack_5->SetBinError(5,35.65827);
   lep1pt_SinglesPtop_stack_5->SetBinError(6,31.42879);
   lep1pt_SinglesPtop_stack_5->SetBinError(7,28.79269);
   lep1pt_SinglesPtop_stack_5->SetBinError(8,24.51889);
   lep1pt_SinglesPtop_stack_5->SetBinError(9,21.66496);
   lep1pt_SinglesPtop_stack_5->SetBinError(10,20.35389);
   lep1pt_SinglesPtop_stack_5->SetBinError(11,17.6168);
   lep1pt_SinglesPtop_stack_5->SetBinError(12,14.54653);
   lep1pt_SinglesPtop_stack_5->SetBinError(13,14.45522);
   lep1pt_SinglesPtop_stack_5->SetBinError(14,12.86398);
   lep1pt_SinglesPtop_stack_5->SetBinError(15,11.27557);
   lep1pt_SinglesPtop_stack_5->SetBinError(16,9.878919);
   lep1pt_SinglesPtop_stack_5->SetBinError(17,9.460728);
   lep1pt_SinglesPtop_stack_5->SetBinError(18,9.323842);
   lep1pt_SinglesPtop_stack_5->SetBinError(19,7.51595);
   lep1pt_SinglesPtop_stack_5->SetBinError(20,6.652277);
   lep1pt_SinglesPtop_stack_5->SetBinError(21,17.33728);
   lep1pt_SinglesPtop_stack_5->SetEntries(5156);
   lep1pt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   lep1pt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   lep1pt_SinglesPtop_stack_5->SetMarkerColor(ci);
   lep1pt_SinglesPtop_stack_5->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   lep1pt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   lep1pt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   lep1pt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   lep1pt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   lep1pt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   lep1pt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(lep1pt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_lep1pt_fx3009[21] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   0};
   Double_t Graph_from_lep1pt_fy3009[21] = {
   0,
   0,
   17347,
   24416,
   21402,
   17011,
   13166,
   9532,
   7060,
   5391,
   3951,
   2894,
   2125,
   1550,
   1150,
   932,
   726,
   558,
   392,
   280,
   0};
   Double_t Graph_from_lep1pt_felx3009[21] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_lep1pt_fely3009[21] = {
   0,
   0,
   131.708,
   156.2562,
   146.2942,
   130.4262,
   114.7432,
   97.63196,
   84.02381,
   73.42343,
   62.85698,
   53.79591,
   46.09772,
   39.37004,
   33.91165,
   30.52868,
   26.94439,
   23.62202,
   19.79899,
   16.7332,
   0};
   Double_t Graph_from_lep1pt_fehx3009[21] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   0};
   Double_t Graph_from_lep1pt_fehy3009[21] = {
   1.841055,
   1.841055,
   131.708,
   156.2562,
   146.2942,
   130.4262,
   114.7432,
   97.63196,
   84.02381,
   73.42343,
   62.85698,
   53.79591,
   46.09772,
   39.37004,
   33.91165,
   30.52868,
   26.94439,
   23.62202,
   19.79899,
   16.7332,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_lep1pt_fx3009,Graph_from_lep1pt_fy3009,Graph_from_lep1pt_felx3009,Graph_from_lep1pt_fehx3009,Graph_from_lep1pt_fely3009,Graph_from_lep1pt_fehy3009);
   grae->SetName("Graph_from_lep1pt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_lep1pt3009 = new TH1F("Graph_Graph_from_lep1pt3009","Data",100,0,220);
   Graph_Graph_from_lep1pt3009->SetMinimum(0);
   Graph_Graph_from_lep1pt3009->SetMaximum(27029.48);
   Graph_Graph_from_lep1pt3009->SetDirectory(0);
   Graph_Graph_from_lep1pt3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_lep1pt3009->SetLineColor(ci);
   Graph_Graph_from_lep1pt3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_lep1pt3009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep1pt3009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep1pt3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_lep1pt3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_lep1pt3009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep1pt3009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep1pt3009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_lep1pt3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_lep1pt3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_lep1pt3009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_lep1pt3009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_lep1pt3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_lep1pt3009);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_lep1pt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep1pt_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep1pt_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep1pt_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep1pt_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("lep1pt_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-28.91566,0.4485106,212.0482,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__10 = new TH1F("ratioframe__10","t#bar{t}",20,0,200);
   ratioframe__10->SetMinimum(0.46);
   ratioframe__10->SetMaximum(1.54);
   ratioframe__10->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__10->SetMarkerColor(ci);
   ratioframe__10->GetXaxis()->SetTitle("Subleading Lepton Transverse Momentum");
   ratioframe__10->GetXaxis()->SetLabelFont(42);
   ratioframe__10->GetXaxis()->SetLabelSize(0);
   ratioframe__10->GetXaxis()->SetTitleSize(0);
   ratioframe__10->GetXaxis()->SetTitleOffset(0);
   ratioframe__10->GetXaxis()->SetTitleFont(42);
   ratioframe__10->GetYaxis()->SetTitle("Data/MC");
   ratioframe__10->GetYaxis()->SetNoExponent();
   ratioframe__10->GetYaxis()->SetNdivisions(5);
   ratioframe__10->GetYaxis()->SetLabelFont(42);
   ratioframe__10->GetYaxis()->SetLabelSize(0.18);
   ratioframe__10->GetYaxis()->SetTitleSize(0.2);
   ratioframe__10->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__10->GetYaxis()->SetTitleFont(42);
   ratioframe__10->GetZaxis()->SetLabelFont(42);
   ratioframe__10->GetZaxis()->SetLabelSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleSize(0.035);
   ratioframe__10->GetZaxis()->SetTitleFont(42);
   ratioframe__10->Draw("");
   
   Double_t Graph_from_ratio_fx3010[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t Graph_from_ratio_fy3010[20] = {
   0,
   0,
   0.9224215,
   0.9184249,
   0.9248614,
   0.9142371,
   0.9250833,
   0.8807648,
   0.8653461,
   0.8894889,
   0.8911977,
   0.8564051,
   0.8425528,
   0.8475085,
   0.8113695,
   0.8568386,
   0.881577,
   0.8634209,
   0.7713177,
   0.7476705};
   Double_t Graph_from_ratio_felx3010[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fely3010[20] = {
   0,
   0,
   0.00861177,
   0.007133183,
   0.00757933,
   0.008386366,
   0.009692655,
   0.01066066,
   0.0121493,
   0.01461003,
   0.01684601,
   0.01878243,
   0.02160463,
   0.02551294,
   0.02817146,
   0.0332944,
   0.03917982,
   0.04384178,
   0.04578522,
   0.05237294};
   Double_t Graph_from_ratio_fehx3010[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_ratio_fehy3010[20] = {
   0,
   0,
   0.00861177,
   0.007133183,
   0.00757933,
   0.008386366,
   0.009692655,
   0.01066066,
   0.0121493,
   0.01461003,
   0.01684601,
   0.01878243,
   0.02160463,
   0.02551294,
   0.02817146,
   0.0332944,
   0.03917982,
   0.04384178,
   0.04578522,
   0.05237294};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3010,Graph_from_ratio_fy3010,Graph_from_ratio_felx3010,Graph_from_ratio_fehx3010,Graph_from_ratio_fely3010,Graph_from_ratio_fehy3010);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3010 = new TH1F("Graph_Graph_from_ratio3010","Data",100,0,220);
   Graph_Graph_from_ratio3010->SetMinimum(0);
   Graph_Graph_from_ratio3010->SetMaximum(1.028254);
   Graph_Graph_from_ratio3010->SetDirectory(0);
   Graph_Graph_from_ratio3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3010->SetLineColor(ci);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3010);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
