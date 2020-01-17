void mupt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 17:31:37 2020) by ROOT version 6.14/09
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
   p1->Range(-57.83133,-4819.842,424.0964,35346.34);
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
   
   TH1F *frame__1 = new TH1F("frame__1","t#bar{t}",40,0,400);
   frame__1->SetMinimum(0.1);
   frame__1->SetMaximum(34944.68);
   frame__1->SetEntries(45339);
   frame__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__1->SetMarkerColor(ci);
   frame__1->GetXaxis()->SetTitle("muon pt [GeV]");
   frame__1->GetXaxis()->SetLabelFont(42);
   frame__1->GetXaxis()->SetLabelSize(0.035);
   frame__1->GetXaxis()->SetTitleSize(0.035);
   frame__1->GetXaxis()->SetTitleFont(42);
   frame__1->GetYaxis()->SetTitle(" muons");
   frame__1->GetYaxis()->SetNoExponent();
   frame__1->GetYaxis()->SetLabelFont(42);
   frame__1->GetYaxis()->SetTitleSize(0.045);
   frame__1->GetYaxis()->SetTitleOffset(1.3);
   frame__1->GetYaxis()->SetTitleFont(42);
   frame__1->GetZaxis()->SetLabelFont(42);
   frame__1->GetZaxis()->SetLabelSize(0.035);
   frame__1->GetZaxis()->SetTitleSize(0.035);
   frame__1->GetZaxis()->SetTitleFont(42);
   frame__1->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_1 = new TH1F("mc_stack_1","mc",40,0,400);
   mc_stack_1->SetMinimum(-2.396071e-07);
   mc_stack_1->SetMaximum(28224.55);
   mc_stack_1->SetDirectory(0);
   mc_stack_1->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_1->SetLineColor(ci);
   mc_stack_1->GetXaxis()->SetLabelFont(42);
   mc_stack_1->GetXaxis()->SetLabelSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleSize(0.035);
   mc_stack_1->GetXaxis()->SetTitleFont(42);
   mc_stack_1->GetYaxis()->SetLabelFont(42);
   mc_stack_1->GetYaxis()->SetLabelSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleSize(0.035);
   mc_stack_1->GetYaxis()->SetTitleOffset(0);
   mc_stack_1->GetYaxis()->SetTitleFont(42);
   mc_stack_1->GetZaxis()->SetLabelFont(42);
   mc_stack_1->GetZaxis()->SetLabelSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleSize(0.035);
   mc_stack_1->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_1);
   
   
   TH1F *mupt_t#bar{t}_stack_1 = new TH1F("mupt_t#bar{t}_stack_1","t#bar{t}",40,0,400);
   mupt_t#bar{t}_stack_1->SetBinContent(3,18333.72);
   mupt_t#bar{t}_stack_1->SetBinContent(4,25725.82);
   mupt_t#bar{t}_stack_1->SetBinContent(5,22756.34);
   mupt_t#bar{t}_stack_1->SetBinContent(6,18496);
   mupt_t#bar{t}_stack_1->SetBinContent(7,14157.25);
   mupt_t#bar{t}_stack_1->SetBinContent(8,11246.71);
   mupt_t#bar{t}_stack_1->SetBinContent(9,8166.831);
   mupt_t#bar{t}_stack_1->SetBinContent(10,6017.805);
   mupt_t#bar{t}_stack_1->SetBinContent(11,4502.833);
   mupt_t#bar{t}_stack_1->SetBinContent(12,3336.361);
   mupt_t#bar{t}_stack_1->SetBinContent(13,2391.51);
   mupt_t#bar{t}_stack_1->SetBinContent(14,1860.054);
   mupt_t#bar{t}_stack_1->SetBinContent(15,1480.181);
   mupt_t#bar{t}_stack_1->SetBinContent(16,1044.342);
   mupt_t#bar{t}_stack_1->SetBinContent(17,739.5966);
   mupt_t#bar{t}_stack_1->SetBinContent(18,568.7852);
   mupt_t#bar{t}_stack_1->SetBinContent(19,491.6327);
   mupt_t#bar{t}_stack_1->SetBinContent(20,421.5036);
   mupt_t#bar{t}_stack_1->SetBinContent(21,344.3488);
   mupt_t#bar{t}_stack_1->SetBinContent(22,211.4161);
   mupt_t#bar{t}_stack_1->SetBinContent(23,187.6758);
   mupt_t#bar{t}_stack_1->SetBinContent(24,162.3378);
   mupt_t#bar{t}_stack_1->SetBinContent(25,153.1879);
   mupt_t#bar{t}_stack_1->SetBinContent(26,111.7674);
   mupt_t#bar{t}_stack_1->SetBinContent(27,65.17636);
   mupt_t#bar{t}_stack_1->SetBinContent(28,49.19951);
   mupt_t#bar{t}_stack_1->SetBinContent(29,27.25654);
   mupt_t#bar{t}_stack_1->SetBinContent(30,32.97914);
   mupt_t#bar{t}_stack_1->SetBinContent(31,29.39395);
   mupt_t#bar{t}_stack_1->SetBinContent(32,43.58099);
   mupt_t#bar{t}_stack_1->SetBinContent(33,20.02374);
   mupt_t#bar{t}_stack_1->SetBinContent(34,23.72563);
   mupt_t#bar{t}_stack_1->SetBinContent(35,12.8764);
   mupt_t#bar{t}_stack_1->SetBinContent(36,2.87473);
   mupt_t#bar{t}_stack_1->SetBinContent(37,19.89972);
   mupt_t#bar{t}_stack_1->SetBinContent(38,7.758973);
   mupt_t#bar{t}_stack_1->SetBinContent(39,4.490493);
   mupt_t#bar{t}_stack_1->SetBinContent(40,1.699519);
   mupt_t#bar{t}_stack_1->SetBinContent(41,24.41811);
   mupt_t#bar{t}_stack_1->SetBinError(3,265.7406);
   mupt_t#bar{t}_stack_1->SetBinError(4,314.8811);
   mupt_t#bar{t}_stack_1->SetBinError(5,296.5304);
   mupt_t#bar{t}_stack_1->SetBinError(6,266.8753);
   mupt_t#bar{t}_stack_1->SetBinError(7,234.5344);
   mupt_t#bar{t}_stack_1->SetBinError(8,208.7354);
   mupt_t#bar{t}_stack_1->SetBinError(9,177.8029);
   mupt_t#bar{t}_stack_1->SetBinError(10,153.3359);
   mupt_t#bar{t}_stack_1->SetBinError(11,132.6778);
   mupt_t#bar{t}_stack_1->SetBinError(12,113.515);
   mupt_t#bar{t}_stack_1->SetBinError(13,96.08942);
   mupt_t#bar{t}_stack_1->SetBinError(14,84.62722);
   mupt_t#bar{t}_stack_1->SetBinError(15,76.27031);
   mupt_t#bar{t}_stack_1->SetBinError(16,63.59368);
   mupt_t#bar{t}_stack_1->SetBinError(17,53.4271);
   mupt_t#bar{t}_stack_1->SetBinError(18,46.89028);
   mupt_t#bar{t}_stack_1->SetBinError(19,43.90286);
   mupt_t#bar{t}_stack_1->SetBinError(20,40.78329);
   mupt_t#bar{t}_stack_1->SetBinError(21,36.70681);
   mupt_t#bar{t}_stack_1->SetBinError(22,28.76047);
   mupt_t#bar{t}_stack_1->SetBinError(23,27.29997);
   mupt_t#bar{t}_stack_1->SetBinError(24,25.25384);
   mupt_t#bar{t}_stack_1->SetBinError(25,24.4212);
   mupt_t#bar{t}_stack_1->SetBinError(26,21.0251);
   mupt_t#bar{t}_stack_1->SetBinError(27,16.10977);
   mupt_t#bar{t}_stack_1->SetBinError(28,14.02272);
   mupt_t#bar{t}_stack_1->SetBinError(29,10.10694);
   mupt_t#bar{t}_stack_1->SetBinError(30,11.68295);
   mupt_t#bar{t}_stack_1->SetBinError(31,11.12459);
   mupt_t#bar{t}_stack_1->SetBinError(32,12.88769);
   mupt_t#bar{t}_stack_1->SetBinError(33,8.883191);
   mupt_t#bar{t}_stack_1->SetBinError(34,9.202517);
   mupt_t#bar{t}_stack_1->SetBinError(35,7.420401);
   mupt_t#bar{t}_stack_1->SetBinError(36,2.127733);
   mupt_t#bar{t}_stack_1->SetBinError(37,8.899973);
   mupt_t#bar{t}_stack_1->SetBinError(38,5.48647);
   mupt_t#bar{t}_stack_1->SetBinError(39,4.490493);
   mupt_t#bar{t}_stack_1->SetBinError(40,1.699519);
   mupt_t#bar{t}_stack_1->SetBinError(41,9.599935);
   mupt_t#bar{t}_stack_1->SetEntries(39651);
   mupt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   mupt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   mupt_t#bar{t}_stack_1->SetMarkerColor(ci);
   mupt_t#bar{t}_stack_1->GetXaxis()->SetTitle("muon pt [GeV]");
   mupt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   mupt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   mupt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   mupt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   mupt_t#bar{t}_stack_1->GetYaxis()->SetTitle(" muons");
   mupt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   mupt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   mupt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   mupt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   mupt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   mupt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   mupt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   mupt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   mupt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(mupt_t#bar{t}_stack_1,"hist");
   
   TH1F *mupt_Diboson_stack_2 = new TH1F("mupt_Diboson_stack_2","Diboson",40,0,400);
   mupt_Diboson_stack_2->SetBinContent(3,16.29067);
   mupt_Diboson_stack_2->SetBinContent(4,27.10351);
   mupt_Diboson_stack_2->SetBinContent(5,26.55677);
   mupt_Diboson_stack_2->SetBinContent(6,16.17835);
   mupt_Diboson_stack_2->SetBinContent(7,15.22906);
   mupt_Diboson_stack_2->SetBinContent(8,12.7452);
   mupt_Diboson_stack_2->SetBinContent(9,12.66704);
   mupt_Diboson_stack_2->SetBinContent(10,5.94598);
   mupt_Diboson_stack_2->SetBinContent(11,8.916947);
   mupt_Diboson_stack_2->SetBinContent(12,5.757986);
   mupt_Diboson_stack_2->SetBinContent(13,5.349697);
   mupt_Diboson_stack_2->SetBinContent(14,3.8648);
   mupt_Diboson_stack_2->SetBinContent(15,1.191499);
   mupt_Diboson_stack_2->SetBinContent(16,2.994509);
   mupt_Diboson_stack_2->SetBinContent(17,2.335699);
   mupt_Diboson_stack_2->SetBinContent(18,2.315715);
   mupt_Diboson_stack_2->SetBinContent(19,2.057485);
   mupt_Diboson_stack_2->SetBinContent(20,0.4240725);
   mupt_Diboson_stack_2->SetBinContent(21,1.598718);
   mupt_Diboson_stack_2->SetBinContent(22,0.8247068);
   mupt_Diboson_stack_2->SetBinContent(23,1.699925);
   mupt_Diboson_stack_2->SetBinContent(24,1.729219);
   mupt_Diboson_stack_2->SetBinContent(25,0.4561342);
   mupt_Diboson_stack_2->SetBinContent(26,0.9901194);
   mupt_Diboson_stack_2->SetBinContent(27,0.7081223);
   mupt_Diboson_stack_2->SetBinContent(28,0.4106354);
   mupt_Diboson_stack_2->SetBinContent(29,1.253084);
   mupt_Diboson_stack_2->SetBinContent(30,0.4410529);
   mupt_Diboson_stack_2->SetBinContent(31,0.3841466);
   mupt_Diboson_stack_2->SetBinContent(34,0.4242215);
   mupt_Diboson_stack_2->SetBinContent(37,0.3791966);
   mupt_Diboson_stack_2->SetBinContent(38,1.170119);
   mupt_Diboson_stack_2->SetBinContent(41,1.756775);
   mupt_Diboson_stack_2->SetBinError(3,2.500202);
   mupt_Diboson_stack_2->SetBinError(4,3.258488);
   mupt_Diboson_stack_2->SetBinError(5,3.192728);
   mupt_Diboson_stack_2->SetBinError(6,2.468953);
   mupt_Diboson_stack_2->SetBinError(7,2.462626);
   mupt_Diboson_stack_2->SetBinError(8,2.231033);
   mupt_Diboson_stack_2->SetBinError(9,2.186041);
   mupt_Diboson_stack_2->SetBinError(10,1.512689);
   mupt_Diboson_stack_2->SetBinError(11,1.905635);
   mupt_Diboson_stack_2->SetBinError(12,1.501571);
   mupt_Diboson_stack_2->SetBinError(13,1.453606);
   mupt_Diboson_stack_2->SetBinError(14,1.232989);
   mupt_Diboson_stack_2->SetBinError(15,0.6883835);
   mupt_Diboson_stack_2->SetBinError(16,1.081369);
   mupt_Diboson_stack_2->SetBinError(17,0.9648498);
   mupt_Diboson_stack_2->SetBinError(18,0.962299);
   mupt_Diboson_stack_2->SetBinError(19,0.8909597);
   mupt_Diboson_stack_2->SetBinError(20,0.4240725);
   mupt_Diboson_stack_2->SetBinError(21,0.8021557);
   mupt_Diboson_stack_2->SetBinError(22,0.585273);
   mupt_Diboson_stack_2->SetBinError(23,0.8525787);
   mupt_Diboson_stack_2->SetBinError(24,0.8665359);
   mupt_Diboson_stack_2->SetBinError(25,0.4519094);
   mupt_Diboson_stack_2->SetBinError(26,0.58959);
   mupt_Diboson_stack_2->SetBinError(27,0.5017368);
   mupt_Diboson_stack_2->SetBinError(28,0.4106354);
   mupt_Diboson_stack_2->SetBinError(29,0.7251522);
   mupt_Diboson_stack_2->SetBinError(30,0.4410529);
   mupt_Diboson_stack_2->SetBinError(31,0.3841466);
   mupt_Diboson_stack_2->SetBinError(34,0.4242215);
   mupt_Diboson_stack_2->SetBinError(37,0.3791966);
   mupt_Diboson_stack_2->SetBinError(38,0.6764359);
   mupt_Diboson_stack_2->SetBinError(41,0.8232767);
   mupt_Diboson_stack_2->SetEntries(511);
   mupt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   mupt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   mupt_Diboson_stack_2->SetMarkerColor(ci);
   mupt_Diboson_stack_2->GetXaxis()->SetTitle("muon pt [GeV]");
   mupt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   mupt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   mupt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   mupt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   mupt_Diboson_stack_2->GetYaxis()->SetTitle(" muons");
   mupt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   mupt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   mupt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   mupt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   mupt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   mupt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   mupt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   mupt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   mupt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(mupt_Diboson_stack_2,"hist");
   
   TH1F *mupt_DY_stack_3 = new TH1F("mupt_DY_stack_3","DY",40,0,400);
   mupt_DY_stack_3->SetBinContent(3,128.4896);
   mupt_DY_stack_3->SetBinContent(4,106.4932);
   mupt_DY_stack_3->SetBinContent(5,33.97976);
   mupt_DY_stack_3->SetBinContent(6,31.8677);
   mupt_DY_stack_3->SetBinContent(7,20.7678);
   mupt_DY_stack_3->SetBinContent(10,17.70928);
   mupt_DY_stack_3->SetBinError(3,46.1157);
   mupt_DY_stack_3->SetBinError(4,43.61229);
   mupt_DY_stack_3->SetBinError(5,24.02732);
   mupt_DY_stack_3->SetBinError(6,22.27987);
   mupt_DY_stack_3->SetBinError(7,20.7678);
   mupt_DY_stack_3->SetBinError(10,17.70928);
   mupt_DY_stack_3->SetEntries(21);
   mupt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   mupt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   mupt_DY_stack_3->SetMarkerColor(ci);
   mupt_DY_stack_3->GetXaxis()->SetTitle("muon pt [GeV]");
   mupt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   mupt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   mupt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   mupt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   mupt_DY_stack_3->GetYaxis()->SetTitle(" muons");
   mupt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   mupt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   mupt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   mupt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   mupt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   mupt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   mupt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   mupt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   mupt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(mupt_DY_stack_3,"hist");
   
   TH1F *mupt_W_stack_4 = new TH1F("mupt_W_stack_4","W",40,0,400);
   mupt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   mupt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   mupt_W_stack_4->SetMarkerColor(ci);
   mupt_W_stack_4->GetXaxis()->SetTitle("muon pt [GeV]");
   mupt_W_stack_4->GetXaxis()->SetLabelFont(42);
   mupt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   mupt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   mupt_W_stack_4->GetXaxis()->SetTitleFont(42);
   mupt_W_stack_4->GetYaxis()->SetTitle(" muons");
   mupt_W_stack_4->GetYaxis()->SetLabelFont(42);
   mupt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   mupt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   mupt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   mupt_W_stack_4->GetYaxis()->SetTitleFont(42);
   mupt_W_stack_4->GetZaxis()->SetLabelFont(42);
   mupt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   mupt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   mupt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(mupt_W_stack_4,"hist");
   
   TH1F *mupt_SinglesPtop_stack_5 = new TH1F("mupt_SinglesPtop_stack_5","Single top",40,0,400);
   mupt_SinglesPtop_stack_5->SetBinContent(3,738.7236);
   mupt_SinglesPtop_stack_5->SetBinContent(4,1021.104);
   mupt_SinglesPtop_stack_5->SetBinContent(5,949.1421);
   mupt_SinglesPtop_stack_5->SetBinContent(6,740.552);
   mupt_SinglesPtop_stack_5->SetBinContent(7,616.357);
   mupt_SinglesPtop_stack_5->SetBinContent(8,452.3081);
   mupt_SinglesPtop_stack_5->SetBinContent(9,352.1868);
   mupt_SinglesPtop_stack_5->SetBinContent(10,305.446);
   mupt_SinglesPtop_stack_5->SetBinContent(11,230.3094);
   mupt_SinglesPtop_stack_5->SetBinContent(12,157.4303);
   mupt_SinglesPtop_stack_5->SetBinContent(13,152.8996);
   mupt_SinglesPtop_stack_5->SetBinContent(14,121.0076);
   mupt_SinglesPtop_stack_5->SetBinContent(15,96.81998);
   mupt_SinglesPtop_stack_5->SetBinContent(16,73.84495);
   mupt_SinglesPtop_stack_5->SetBinContent(17,66.75147);
   mupt_SinglesPtop_stack_5->SetBinContent(18,66.21837);
   mupt_SinglesPtop_stack_5->SetBinContent(19,42.44503);
   mupt_SinglesPtop_stack_5->SetBinContent(20,32.25982);
   mupt_SinglesPtop_stack_5->SetBinContent(21,27.37409);
   mupt_SinglesPtop_stack_5->SetBinContent(22,22.95811);
   mupt_SinglesPtop_stack_5->SetBinContent(23,24.87149);
   mupt_SinglesPtop_stack_5->SetBinContent(24,20.12245);
   mupt_SinglesPtop_stack_5->SetBinContent(25,16.1848);
   mupt_SinglesPtop_stack_5->SetBinContent(26,9.840904);
   mupt_SinglesPtop_stack_5->SetBinContent(27,9.840979);
   mupt_SinglesPtop_stack_5->SetBinContent(28,13.75717);
   mupt_SinglesPtop_stack_5->SetBinContent(29,11.43098);
   mupt_SinglesPtop_stack_5->SetBinContent(30,6.936037);
   mupt_SinglesPtop_stack_5->SetBinContent(31,5.317481);
   mupt_SinglesPtop_stack_5->SetBinContent(32,5.862363);
   mupt_SinglesPtop_stack_5->SetBinContent(33,4.424655);
   mupt_SinglesPtop_stack_5->SetBinContent(34,7.467686);
   mupt_SinglesPtop_stack_5->SetBinContent(35,4.440961);
   mupt_SinglesPtop_stack_5->SetBinContent(36,5.605212);
   mupt_SinglesPtop_stack_5->SetBinContent(37,4.124467);
   mupt_SinglesPtop_stack_5->SetBinContent(38,2.666764);
   mupt_SinglesPtop_stack_5->SetBinContent(39,4.230596);
   mupt_SinglesPtop_stack_5->SetBinContent(40,1.377767);
   mupt_SinglesPtop_stack_5->SetBinContent(41,13.72602);
   mupt_SinglesPtop_stack_5->SetBinError(3,31.35505);
   mupt_SinglesPtop_stack_5->SetBinError(4,36.85716);
   mupt_SinglesPtop_stack_5->SetBinError(5,35.65827);
   mupt_SinglesPtop_stack_5->SetBinError(6,31.42879);
   mupt_SinglesPtop_stack_5->SetBinError(7,28.79269);
   mupt_SinglesPtop_stack_5->SetBinError(8,24.51889);
   mupt_SinglesPtop_stack_5->SetBinError(9,21.66496);
   mupt_SinglesPtop_stack_5->SetBinError(10,20.35389);
   mupt_SinglesPtop_stack_5->SetBinError(11,17.6168);
   mupt_SinglesPtop_stack_5->SetBinError(12,14.54653);
   mupt_SinglesPtop_stack_5->SetBinError(13,14.45522);
   mupt_SinglesPtop_stack_5->SetBinError(14,12.86398);
   mupt_SinglesPtop_stack_5->SetBinError(15,11.27557);
   mupt_SinglesPtop_stack_5->SetBinError(16,9.878919);
   mupt_SinglesPtop_stack_5->SetBinError(17,9.460728);
   mupt_SinglesPtop_stack_5->SetBinError(18,9.323842);
   mupt_SinglesPtop_stack_5->SetBinError(19,7.51595);
   mupt_SinglesPtop_stack_5->SetBinError(20,6.652277);
   mupt_SinglesPtop_stack_5->SetBinError(21,6.064754);
   mupt_SinglesPtop_stack_5->SetBinError(22,5.478717);
   mupt_SinglesPtop_stack_5->SetBinError(23,5.747295);
   mupt_SinglesPtop_stack_5->SetBinError(24,5.171834);
   mupt_SinglesPtop_stack_5->SetBinError(25,4.681181);
   mupt_SinglesPtop_stack_5->SetBinError(26,3.723209);
   mupt_SinglesPtop_stack_5->SetBinError(27,3.727621);
   mupt_SinglesPtop_stack_5->SetBinError(28,4.183605);
   mupt_SinglesPtop_stack_5->SetBinError(29,4.049943);
   mupt_SinglesPtop_stack_5->SetBinError(30,3.112674);
   mupt_SinglesPtop_stack_5->SetBinError(31,2.660987);
   mupt_SinglesPtop_stack_5->SetBinError(32,2.760649);
   mupt_SinglesPtop_stack_5->SetBinError(33,2.560875);
   mupt_SinglesPtop_stack_5->SetBinError(34,3.127581);
   mupt_SinglesPtop_stack_5->SetBinError(35,2.566582);
   mupt_SinglesPtop_stack_5->SetBinError(36,2.806209);
   mupt_SinglesPtop_stack_5->SetBinError(37,2.384535);
   mupt_SinglesPtop_stack_5->SetBinError(38,1.886709);
   mupt_SinglesPtop_stack_5->SetBinError(39,2.450535);
   mupt_SinglesPtop_stack_5->SetBinError(40,1.377767);
   mupt_SinglesPtop_stack_5->SetBinError(41,4.252914);
   mupt_SinglesPtop_stack_5->SetEntries(5156);
   mupt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   mupt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   mupt_SinglesPtop_stack_5->SetMarkerColor(ci);
   mupt_SinglesPtop_stack_5->GetXaxis()->SetTitle("muon pt [GeV]");
   mupt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   mupt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   mupt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   mupt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   mupt_SinglesPtop_stack_5->GetYaxis()->SetTitle(" muons");
   mupt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   mupt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   mupt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   mupt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   mupt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   mupt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   mupt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   mupt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   mupt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(mupt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_mupt_fx3001[41] = {
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
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395,
   0};
   Double_t Graph_from_mupt_fy3001[41] = {
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
   237,
   195,
   162,
   125,
   98,
   80,
   55,
   55,
   39,
   36,
   27,
   21,
   10,
   15,
   11,
   12,
   13,
   7,
   10,
   3,
   0};
   Double_t Graph_from_mupt_felx3001[41] = {
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
   Double_t Graph_from_mupt_fely3001[41] = {
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
   15.3948,
   13.95255,
   12.71504,
   11.1656,
   9.882779,
   8.925719,
   7.393726,
   7.393726,
   6.218222,
   5.972111,
   5.163869,
   4.545892,
   3.108748,
   3.829449,
   3.265636,
   3.415326,
   3.558726,
   2.581513,
   3.108748,
   1.632727,
   0};
   Double_t Graph_from_mupt_fehx3001[41] = {
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
   Double_t Graph_from_mupt_fehy3001[41] = {
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
   15.3948,
   14.98845,
   13.75443,
   12.21044,
   10.93342,
   9.981777,
   8.461342,
   8.461342,
   7.298524,
   7.055691,
   6.260373,
   5.655298,
   4.267035,
   4.958839,
   4.416609,
   4.559911,
   4.697668,
   3.770356,
   4.267035,
   2.918242,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_mupt_fx3001,Graph_from_mupt_fy3001,Graph_from_mupt_felx3001,Graph_from_mupt_fehx3001,Graph_from_mupt_fely3001,Graph_from_mupt_fehy3001);
   grae->SetName("Graph_from_mupt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_mupt3001 = new TH1F("Graph_Graph_from_mupt3001","Data",100,0,440);
   Graph_Graph_from_mupt3001->SetMinimum(0);
   Graph_Graph_from_mupt3001->SetMaximum(27029.48);
   Graph_Graph_from_mupt3001->SetDirectory(0);
   Graph_Graph_from_mupt3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mupt3001->SetLineColor(ci);
   Graph_Graph_from_mupt3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mupt3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mupt3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mupt3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mupt3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mupt3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mupt3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mupt3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mupt3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mupt3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mupt3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mupt3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mupt3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_mupt3001);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_mupt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("mupt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("mupt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("mupt_DY","DY","f");

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
   entry=leg->AddEntry("mupt_W","W","f");

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
   entry=leg->AddEntry("mupt_Single top","Single top","f");

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
   p2->Range(-57.83133,0.4485106,424.0964,1.597447);
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
   
   TH1F *ratioframe__2 = new TH1F("ratioframe__2","t#bar{t}",40,0,400);
   ratioframe__2->SetMinimum(0.46);
   ratioframe__2->SetMaximum(1.54);
   ratioframe__2->SetEntries(45339);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__2->SetMarkerColor(ci);
   ratioframe__2->GetXaxis()->SetTitle("muon pt [GeV]");
   ratioframe__2->GetXaxis()->SetLabelFont(42);
   ratioframe__2->GetXaxis()->SetLabelSize(0);
   ratioframe__2->GetXaxis()->SetTitleSize(0);
   ratioframe__2->GetXaxis()->SetTitleOffset(0);
   ratioframe__2->GetXaxis()->SetTitleFont(42);
   ratioframe__2->GetYaxis()->SetTitle("Data/MC");
   ratioframe__2->GetYaxis()->SetNoExponent();
   ratioframe__2->GetYaxis()->SetNdivisions(5);
   ratioframe__2->GetYaxis()->SetLabelFont(42);
   ratioframe__2->GetYaxis()->SetLabelSize(0.18);
   ratioframe__2->GetYaxis()->SetTitleSize(0.2);
   ratioframe__2->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__2->GetYaxis()->SetTitleFont(42);
   ratioframe__2->GetZaxis()->SetLabelFont(42);
   ratioframe__2->GetZaxis()->SetLabelSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleSize(0.035);
   ratioframe__2->GetZaxis()->SetTitleFont(42);
   ratioframe__2->Draw("");
   
   Double_t Graph_from_ratio_fx3002[40] = {
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
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_ratio_fy3002[40] = {
   0,
   0,
   0.9026795,
   0.9083156,
   0.9005296,
   0.8821031,
   0.8890177,
   0.8138823,
   0.8275036,
   0.8493903,
   0.8331824,
   0.8269635,
   0.8334119,
   0.7808855,
   0.7286816,
   0.8312657,
   0.8977552,
   0.8755422,
   0.7311589,
   0.6164854,
   0.6348413,
   0.8290856,
   0.7561359,
   0.6786489,
   0.5770515,
   0.6525367,
   0.7263079,
   0.8679553,
   0.97645,
   0.8920557,
   0.7693278,
   0.4247285,
   0.4090248,
   0.4744202,
   0.6352007,
   1.415104,
   0.5327131,
   0.6036639,
   1.146646,
   0.9748852};
   Double_t Graph_from_ratio_felx3002[40] = {
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
   Double_t Graph_from_ratio_fely3002[40] = {
   0,
   0,
   0.01447963,
   0.01227752,
   0.01291541,
   0.01406684,
   0.01621151,
   0.01681761,
   0.0199714,
   0.02383271,
   0.02699672,
   0.03110928,
   0.03654931,
   0.03908554,
   0.04158187,
   0.05494353,
   0.06884391,
   0.07542679,
   0.07109894,
   0.06710855,
   0.07553204,
   0.1190821,
   0.1150342,
   0.1127643,
   0.1026585,
   0.1350864,
   0.1864601,
   0.2321728,
   0.3092224,
   0.3059816,
   0.2913121,
   0.1463175,
   0.2016252,
   0.1905647,
   0.3458683,
   0.7157141,
   0.2497057,
   0.3801622,
   0.7641151,
   0.8928583};
   Double_t Graph_from_ratio_fehx3002[40] = {
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
   Double_t Graph_from_ratio_fehy3002[40] = {
   0,
   0,
   0.01447963,
   0.01227752,
   0.01291541,
   0.01406684,
   0.01621151,
   0.01681761,
   0.0199714,
   0.02383271,
   0.02699672,
   0.03110928,
   0.03654931,
   0.03908554,
   0.04158187,
   0.05494353,
   0.06884391,
   0.07542679,
   0.07109894,
   0.06710855,
   0.07553204,
   0.1190821,
   0.1150342,
   0.1127643,
   0.1026585,
   0.1350864,
   0.1864601,
   0.2321728,
   0.3092224,
   0.3059816,
   0.2913121,
   0.1463175,
   0.2016252,
   0.1905647,
   0.3458683,
   0.7157141,
   0.2497057,
   0.3801622,
   0.7641151,
   0.8928583};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3002,Graph_from_ratio_fy3002,Graph_from_ratio_felx3002,Graph_from_ratio_fehx3002,Graph_from_ratio_fely3002,Graph_from_ratio_fehy3002);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3002 = new TH1F("Graph_Graph_from_ratio3002","Data",100,0,440);
   Graph_Graph_from_ratio3002->SetMinimum(0);
   Graph_Graph_from_ratio3002->SetMaximum(2.3439);
   Graph_Graph_from_ratio3002->SetDirectory(0);
   Graph_Graph_from_ratio3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3002->SetLineColor(ci);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3002);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
