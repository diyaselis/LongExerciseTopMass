void mupt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 10:09:19 2020) by ROOT version 6.14/09
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
   p1->Range(-57.83133,-4766.788,424.0964,34957.28);
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
   frame__1->SetMaximum(34560.04);
   frame__1->SetEntries(365945);
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
   mc_stack_1->SetMaximum(27913.88);
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
   mupt_t#bar{t}_stack_1->SetBinContent(3,17922.43);
   mupt_t#bar{t}_stack_1->SetBinContent(4,25429.94);
   mupt_t#bar{t}_stack_1->SetBinContent(5,22131.09);
   mupt_t#bar{t}_stack_1->SetBinContent(6,17818.17);
   mupt_t#bar{t}_stack_1->SetBinContent(7,13579.88);
   mupt_t#bar{t}_stack_1->SetBinContent(8,10357.36);
   mupt_t#bar{t}_stack_1->SetBinContent(9,7793.731);
   mupt_t#bar{t}_stack_1->SetBinContent(10,5731.683);
   mupt_t#bar{t}_stack_1->SetBinContent(11,4194.133);
   mupt_t#bar{t}_stack_1->SetBinContent(12,3216.054);
   mupt_t#bar{t}_stack_1->SetBinContent(13,2363.848);
   mupt_t#bar{t}_stack_1->SetBinContent(14,1704.018);
   mupt_t#bar{t}_stack_1->SetBinContent(15,1319.345);
   mupt_t#bar{t}_stack_1->SetBinContent(16,1010.88);
   mupt_t#bar{t}_stack_1->SetBinContent(17,754.4371);
   mupt_t#bar{t}_stack_1->SetBinContent(18,577.7324);
   mupt_t#bar{t}_stack_1->SetBinContent(19,463.7187);
   mupt_t#bar{t}_stack_1->SetBinContent(20,341.8126);
   mupt_t#bar{t}_stack_1->SetBinContent(21,287.3496);
   mupt_t#bar{t}_stack_1->SetBinContent(22,218.547);
   mupt_t#bar{t}_stack_1->SetBinContent(23,166.1413);
   mupt_t#bar{t}_stack_1->SetBinContent(24,136.5838);
   mupt_t#bar{t}_stack_1->SetBinContent(25,95.04861);
   mupt_t#bar{t}_stack_1->SetBinContent(26,94.83994);
   mupt_t#bar{t}_stack_1->SetBinContent(27,63.83319);
   mupt_t#bar{t}_stack_1->SetBinContent(28,61.03257);
   mupt_t#bar{t}_stack_1->SetBinContent(29,42.26044);
   mupt_t#bar{t}_stack_1->SetBinContent(30,35.05727);
   mupt_t#bar{t}_stack_1->SetBinContent(31,33.05048);
   mupt_t#bar{t}_stack_1->SetBinContent(32,28.58537);
   mupt_t#bar{t}_stack_1->SetBinContent(33,24.16748);
   mupt_t#bar{t}_stack_1->SetBinContent(34,18.35783);
   mupt_t#bar{t}_stack_1->SetBinContent(35,16.34764);
   mupt_t#bar{t}_stack_1->SetBinContent(36,10.90472);
   mupt_t#bar{t}_stack_1->SetBinContent(37,9.831753);
   mupt_t#bar{t}_stack_1->SetBinContent(38,7.428725);
   mupt_t#bar{t}_stack_1->SetBinContent(39,7.902155);
   mupt_t#bar{t}_stack_1->SetBinContent(40,5.256518);
   mupt_t#bar{t}_stack_1->SetBinContent(41,28.5059);
   mupt_t#bar{t}_stack_1->SetBinError(3,85.57042);
   mupt_t#bar{t}_stack_1->SetBinError(4,102.0565);
   mupt_t#bar{t}_stack_1->SetBinError(5,95.30918);
   mupt_t#bar{t}_stack_1->SetBinError(6,85.37927);
   mupt_t#bar{t}_stack_1->SetBinError(7,74.73608);
   mupt_t#bar{t}_stack_1->SetBinError(8,65.31083);
   mupt_t#bar{t}_stack_1->SetBinError(9,56.73007);
   mupt_t#bar{t}_stack_1->SetBinError(10,48.64311);
   mupt_t#bar{t}_stack_1->SetBinError(11,41.64414);
   mupt_t#bar{t}_stack_1->SetBinError(12,36.50983);
   mupt_t#bar{t}_stack_1->SetBinError(13,31.27155);
   mupt_t#bar{t}_stack_1->SetBinError(14,26.57428);
   mupt_t#bar{t}_stack_1->SetBinError(15,23.395);
   mupt_t#bar{t}_stack_1->SetBinError(16,20.44942);
   mupt_t#bar{t}_stack_1->SetBinError(17,17.7471);
   mupt_t#bar{t}_stack_1->SetBinError(18,15.50783);
   mupt_t#bar{t}_stack_1->SetBinError(19,13.92543);
   mupt_t#bar{t}_stack_1->SetBinError(20,11.95166);
   mupt_t#bar{t}_stack_1->SetBinError(21,10.90898);
   mupt_t#bar{t}_stack_1->SetBinError(22,9.547765);
   mupt_t#bar{t}_stack_1->SetBinError(23,8.356394);
   mupt_t#bar{t}_stack_1->SetBinError(24,7.543791);
   mupt_t#bar{t}_stack_1->SetBinError(25,6.285547);
   mupt_t#bar{t}_stack_1->SetBinError(26,6.227652);
   mupt_t#bar{t}_stack_1->SetBinError(27,5.175992);
   mupt_t#bar{t}_stack_1->SetBinError(28,5.056639);
   mupt_t#bar{t}_stack_1->SetBinError(29,4.205989);
   mupt_t#bar{t}_stack_1->SetBinError(30,3.847655);
   mupt_t#bar{t}_stack_1->SetBinError(31,3.734475);
   mupt_t#bar{t}_stack_1->SetBinError(32,3.465047);
   mupt_t#bar{t}_stack_1->SetBinError(33,3.208254);
   mupt_t#bar{t}_stack_1->SetBinError(34,2.790312);
   mupt_t#bar{t}_stack_1->SetBinError(35,2.592372);
   mupt_t#bar{t}_stack_1->SetBinError(36,2.118997);
   mupt_t#bar{t}_stack_1->SetBinError(37,2.075779);
   mupt_t#bar{t}_stack_1->SetBinError(38,1.769108);
   mupt_t#bar{t}_stack_1->SetBinError(39,1.805719);
   mupt_t#bar{t}_stack_1->SetBinError(40,1.474707);
   mupt_t#bar{t}_stack_1->SetBinError(41,3.453939);
   mupt_t#bar{t}_stack_1->SetEntries(360257);
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
   ratioframe__2->SetEntries(365945);

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
   0.7476705,
   0.7492355,
   0.8046883,
   0.8406298,
   0.7889646,
   0.8774322,
   0.757067,
   0.7394232,
   0.7313793,
   0.7098071,
   0.8483692,
   0.6967362,
   0.6096192,
   0.3497465,
   0.5714343,
   0.5291361,
   0.7268354,
   0.906845,
   0.6213602,
   0.8242154,
   0.4521964};
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
   0.05237294,
   0.05697529,
   0.06826836,
   0.079581,
   0.0841001,
   0.1079784,
   0.09942058,
   0.1182639,
   0.117541,
   0.1367336,
   0.172801,
   0.1575568,
   0.1544149,
   0.1214646,
   0.1737229,
   0.1845936,
   0.260747,
   0.3222282,
   0.277304,
   0.3327065,
   0.2950985};
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
   0.05237294,
   0.05697529,
   0.06826836,
   0.079581,
   0.0841001,
   0.1079784,
   0.09942058,
   0.1182639,
   0.117541,
   0.1367336,
   0.172801,
   0.1575568,
   0.1544149,
   0.1214646,
   0.1737229,
   0.1845936,
   0.260747,
   0.3222282,
   0.277304,
   0.3327065,
   0.2950985};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3002,Graph_from_ratio_fy3002,Graph_from_ratio_felx3002,Graph_from_ratio_fehx3002,Graph_from_ratio_fely3002,Graph_from_ratio_fehy3002);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3002 = new TH1F("Graph_Graph_from_ratio3002","Data",100,0,440);
   Graph_Graph_from_ratio3002->SetMinimum(0);
   Graph_Graph_from_ratio3002->SetMaximum(1.35198);
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
