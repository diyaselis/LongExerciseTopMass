void bjeten()
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
   p1->Range(-43.37349,-2913.396,318.0723,21365.74);
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
   
   TH1F *frame__5 = new TH1F("frame__5","t#bar{t}",30,0,300);
   frame__5->SetMinimum(0.1);
   frame__5->SetMaximum(21122.95);
   frame__5->SetEntries(61714);
   frame__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__5->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__5->SetMarkerColor(ci);
   frame__5->GetXaxis()->SetTitle("Energy [GeV]");
   frame__5->GetXaxis()->SetLabelFont(42);
   frame__5->GetXaxis()->SetLabelSize(0.035);
   frame__5->GetXaxis()->SetTitleSize(0.035);
   frame__5->GetXaxis()->SetTitleFont(42);
   frame__5->GetYaxis()->SetTitle(" Jets");
   frame__5->GetYaxis()->SetNoExponent();
   frame__5->GetYaxis()->SetLabelFont(42);
   frame__5->GetYaxis()->SetTitleSize(0.045);
   frame__5->GetYaxis()->SetTitleOffset(1.3);
   frame__5->GetYaxis()->SetTitleFont(42);
   frame__5->GetZaxis()->SetLabelFont(42);
   frame__5->GetZaxis()->SetLabelSize(0.035);
   frame__5->GetZaxis()->SetTitleSize(0.035);
   frame__5->GetZaxis()->SetTitleFont(42);
   frame__5->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_3 = new TH1F("mc_stack_3","mc",30,0,300);
   mc_stack_3->SetMinimum(-9.345868e-07);
   mc_stack_3->SetMaximum(17060.84);
   mc_stack_3->SetDirectory(0);
   mc_stack_3->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_3->SetLineColor(ci);
   mc_stack_3->GetXaxis()->SetLabelFont(42);
   mc_stack_3->GetXaxis()->SetLabelSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleFont(42);
   mc_stack_3->GetYaxis()->SetLabelFont(42);
   mc_stack_3->GetYaxis()->SetLabelSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleOffset(0);
   mc_stack_3->GetYaxis()->SetTitleFont(42);
   mc_stack_3->GetZaxis()->SetLabelFont(42);
   mc_stack_3->GetZaxis()->SetLabelSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_3);
   
   
   TH1F *bjeten_t#bar{t}_stack_1 = new TH1F("bjeten_t#bar{t}_stack_1","t#bar{t}",30,0,300);
   bjeten_t#bar{t}_stack_1->SetBinContent(4,6703.905);
   bjeten_t#bar{t}_stack_1->SetBinContent(5,12545.45);
   bjeten_t#bar{t}_stack_1->SetBinContent(6,14844.55);
   bjeten_t#bar{t}_stack_1->SetBinContent(7,15584.09);
   bjeten_t#bar{t}_stack_1->SetBinContent(8,15419.12);
   bjeten_t#bar{t}_stack_1->SetBinContent(9,14570.39);
   bjeten_t#bar{t}_stack_1->SetBinContent(10,12891.01);
   bjeten_t#bar{t}_stack_1->SetBinContent(11,11980.49);
   bjeten_t#bar{t}_stack_1->SetBinContent(12,10394.8);
   bjeten_t#bar{t}_stack_1->SetBinContent(13,9318.284);
   bjeten_t#bar{t}_stack_1->SetBinContent(14,8320.422);
   bjeten_t#bar{t}_stack_1->SetBinContent(15,7211.051);
   bjeten_t#bar{t}_stack_1->SetBinContent(16,6207.309);
   bjeten_t#bar{t}_stack_1->SetBinContent(17,5859.041);
   bjeten_t#bar{t}_stack_1->SetBinContent(18,4854.591);
   bjeten_t#bar{t}_stack_1->SetBinContent(19,4304.871);
   bjeten_t#bar{t}_stack_1->SetBinContent(20,3806.065);
   bjeten_t#bar{t}_stack_1->SetBinContent(21,3587.377);
   bjeten_t#bar{t}_stack_1->SetBinContent(22,2951.251);
   bjeten_t#bar{t}_stack_1->SetBinContent(23,2649.989);
   bjeten_t#bar{t}_stack_1->SetBinContent(24,2223.645);
   bjeten_t#bar{t}_stack_1->SetBinContent(25,2271.335);
   bjeten_t#bar{t}_stack_1->SetBinContent(26,1852.577);
   bjeten_t#bar{t}_stack_1->SetBinContent(27,1659.731);
   bjeten_t#bar{t}_stack_1->SetBinContent(28,1506.397);
   bjeten_t#bar{t}_stack_1->SetBinContent(29,1412.28);
   bjeten_t#bar{t}_stack_1->SetBinContent(30,1281.183);
   bjeten_t#bar{t}_stack_1->SetBinContent(31,12056.45);
   bjeten_t#bar{t}_stack_1->SetBinError(4,161.073);
   bjeten_t#bar{t}_stack_1->SetBinError(5,220.1919);
   bjeten_t#bar{t}_stack_1->SetBinError(6,239.9302);
   bjeten_t#bar{t}_stack_1->SetBinError(7,245.3797);
   bjeten_t#bar{t}_stack_1->SetBinError(8,243.9734);
   bjeten_t#bar{t}_stack_1->SetBinError(9,237.2014);
   bjeten_t#bar{t}_stack_1->SetBinError(10,223.3191);
   bjeten_t#bar{t}_stack_1->SetBinError(11,215.3076);
   bjeten_t#bar{t}_stack_1->SetBinError(12,200.5129);
   bjeten_t#bar{t}_stack_1->SetBinError(13,189.8026);
   bjeten_t#bar{t}_stack_1->SetBinError(14,179.4525);
   bjeten_t#bar{t}_stack_1->SetBinError(15,167.0501);
   bjeten_t#bar{t}_stack_1->SetBinError(16,154.8206);
   bjeten_t#bar{t}_stack_1->SetBinError(17,150.5767);
   bjeten_t#bar{t}_stack_1->SetBinError(18,136.9641);
   bjeten_t#bar{t}_stack_1->SetBinError(19,129.0368);
   bjeten_t#bar{t}_stack_1->SetBinError(20,121.1745);
   bjeten_t#bar{t}_stack_1->SetBinError(21,117.4854);
   bjeten_t#bar{t}_stack_1->SetBinError(22,106.8103);
   bjeten_t#bar{t}_stack_1->SetBinError(23,101.0635);
   bjeten_t#bar{t}_stack_1->SetBinError(24,92.63473);
   bjeten_t#bar{t}_stack_1->SetBinError(25,94.09176);
   bjeten_t#bar{t}_stack_1->SetBinError(26,85.25199);
   bjeten_t#bar{t}_stack_1->SetBinError(27,80.20406);
   bjeten_t#bar{t}_stack_1->SetBinError(28,76.09881);
   bjeten_t#bar{t}_stack_1->SetBinError(29,74.03779);
   bjeten_t#bar{t}_stack_1->SetBinError(30,70.50862);
   bjeten_t#bar{t}_stack_1->SetBinError(31,216.0421);
   bjeten_t#bar{t}_stack_1->SetEntries(54797);
   bjeten_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjeten_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjeten_t#bar{t}_stack_1->SetMarkerColor(ci);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Jets");
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bjeten_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bjeten_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_t#bar{t}_stack_1,"hist");
   
   TH1F *bjeten_Diboson_stack_2 = new TH1F("bjeten_Diboson_stack_2","Diboson",30,0,300);
   bjeten_Diboson_stack_2->SetBinContent(4,10.64963);
   bjeten_Diboson_stack_2->SetBinContent(5,11.53961);
   bjeten_Diboson_stack_2->SetBinContent(6,14.32385);
   bjeten_Diboson_stack_2->SetBinContent(7,8.773731);
   bjeten_Diboson_stack_2->SetBinContent(8,13.04677);
   bjeten_Diboson_stack_2->SetBinContent(9,13.89734);
   bjeten_Diboson_stack_2->SetBinContent(10,6.911806);
   bjeten_Diboson_stack_2->SetBinContent(11,7.697405);
   bjeten_Diboson_stack_2->SetBinContent(12,6.790689);
   bjeten_Diboson_stack_2->SetBinContent(13,4.253528);
   bjeten_Diboson_stack_2->SetBinContent(14,6.451064);
   bjeten_Diboson_stack_2->SetBinContent(15,6.40998);
   bjeten_Diboson_stack_2->SetBinContent(16,6.932809);
   bjeten_Diboson_stack_2->SetBinContent(17,5.147826);
   bjeten_Diboson_stack_2->SetBinContent(18,4.621919);
   bjeten_Diboson_stack_2->SetBinContent(19,4.060132);
   bjeten_Diboson_stack_2->SetBinContent(20,4.46454);
   bjeten_Diboson_stack_2->SetBinContent(21,3.819372);
   bjeten_Diboson_stack_2->SetBinContent(22,3.322219);
   bjeten_Diboson_stack_2->SetBinContent(23,4.343868);
   bjeten_Diboson_stack_2->SetBinContent(24,3.447251);
   bjeten_Diboson_stack_2->SetBinContent(25,2.475044);
   bjeten_Diboson_stack_2->SetBinContent(26,0.8957487);
   bjeten_Diboson_stack_2->SetBinContent(27,1.026894);
   bjeten_Diboson_stack_2->SetBinContent(28,2.173232);
   bjeten_Diboson_stack_2->SetBinContent(31,35.18478);
   bjeten_Diboson_stack_2->SetBinError(4,1.995347);
   bjeten_Diboson_stack_2->SetBinError(5,2.141013);
   bjeten_Diboson_stack_2->SetBinError(6,2.335985);
   bjeten_Diboson_stack_2->SetBinError(7,1.885339);
   bjeten_Diboson_stack_2->SetBinError(8,2.212845);
   bjeten_Diboson_stack_2->SetBinError(9,2.344208);
   bjeten_Diboson_stack_2->SetBinError(10,1.652102);
   bjeten_Diboson_stack_2->SetBinError(11,1.696004);
   bjeten_Diboson_stack_2->SetBinError(12,1.641194);
   bjeten_Diboson_stack_2->SetBinError(13,1.222726);
   bjeten_Diboson_stack_2->SetBinError(14,1.581728);
   bjeten_Diboson_stack_2->SetBinError(15,1.553553);
   bjeten_Diboson_stack_2->SetBinError(16,1.636433);
   bjeten_Diboson_stack_2->SetBinError(17,1.402283);
   bjeten_Diboson_stack_2->SetBinError(18,1.32382);
   bjeten_Diboson_stack_2->SetBinError(19,1.267992);
   bjeten_Diboson_stack_2->SetBinError(20,1.313393);
   bjeten_Diboson_stack_2->SetBinError(21,1.246143);
   bjeten_Diboson_stack_2->SetBinError(22,1.177612);
   bjeten_Diboson_stack_2->SetBinError(23,1.339323);
   bjeten_Diboson_stack_2->SetBinError(24,1.140679);
   bjeten_Diboson_stack_2->SetBinError(25,0.9278885);
   bjeten_Diboson_stack_2->SetBinError(26,0.6000132);
   bjeten_Diboson_stack_2->SetBinError(27,0.6577612);
   bjeten_Diboson_stack_2->SetBinError(28,0.9190996);
   bjeten_Diboson_stack_2->SetBinError(31,3.748331);
   bjeten_Diboson_stack_2->SetEntries(540);
   bjeten_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjeten_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjeten_Diboson_stack_2->SetMarkerColor(ci);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitle(" Jets");
   bjeten_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bjeten_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bjeten_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bjeten_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bjeten_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bjeten_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_Diboson_stack_2,"hist");
   
   TH1F *bjeten_DY_stack_3 = new TH1F("bjeten_DY_stack_3","DY",30,0,300);
   bjeten_DY_stack_3->SetBinContent(4,20.71554);
   bjeten_DY_stack_3->SetBinContent(5,15.28601);
   bjeten_DY_stack_3->SetBinContent(6,52.67225);
   bjeten_DY_stack_3->SetBinContent(7,34.56168);
   bjeten_DY_stack_3->SetBinContent(8,48.84486);
   bjeten_DY_stack_3->SetBinContent(9,36.20163);
   bjeten_DY_stack_3->SetBinContent(10,16.82922);
   bjeten_DY_stack_3->SetBinContent(13,16.20458);
   bjeten_DY_stack_3->SetBinContent(17,9.033381);
   bjeten_DY_stack_3->SetBinContent(18,16.81726);
   bjeten_DY_stack_3->SetBinContent(19,16.53879);
   bjeten_DY_stack_3->SetBinContent(20,16.81714);
   bjeten_DY_stack_3->SetBinContent(27,16.82922);
   bjeten_DY_stack_3->SetBinContent(28,20.7678);
   bjeten_DY_stack_3->SetBinContent(31,56.75805);
   bjeten_DY_stack_3->SetBinError(4,20.71554);
   bjeten_DY_stack_3->SetBinError(5,15.28601);
   bjeten_DY_stack_3->SetBinError(6,30.41879);
   bjeten_DY_stack_3->SetBinError(7,24.4584);
   bjeten_DY_stack_3->SetBinError(8,28.21589);
   bjeten_DY_stack_3->SetBinError(9,25.60675);
   bjeten_DY_stack_3->SetBinError(10,16.82922);
   bjeten_DY_stack_3->SetBinError(13,16.20458);
   bjeten_DY_stack_3->SetBinError(17,9.03338);
   bjeten_DY_stack_3->SetBinError(18,16.81726);
   bjeten_DY_stack_3->SetBinError(19,16.53879);
   bjeten_DY_stack_3->SetBinError(20,16.81714);
   bjeten_DY_stack_3->SetBinError(27,16.82922);
   bjeten_DY_stack_3->SetBinError(28,20.7678);
   bjeten_DY_stack_3->SetBinError(31,32.64369);
   bjeten_DY_stack_3->SetEntries(24);
   bjeten_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjeten_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjeten_DY_stack_3->SetMarkerColor(ci);
   bjeten_DY_stack_3->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bjeten_DY_stack_3->GetYaxis()->SetTitle(" Jets");
   bjeten_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bjeten_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bjeten_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bjeten_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bjeten_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bjeten_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_DY_stack_3,"hist");
   
   TH1F *bjeten_W_stack_4 = new TH1F("bjeten_W_stack_4","W",30,0,300);
   bjeten_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjeten_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjeten_W_stack_4->SetMarkerColor(ci);
   bjeten_W_stack_4->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_W_stack_4->GetXaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetXaxis()->SetTitleFont(42);
   bjeten_W_stack_4->GetYaxis()->SetTitle(" Jets");
   bjeten_W_stack_4->GetYaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bjeten_W_stack_4->GetYaxis()->SetTitleFont(42);
   bjeten_W_stack_4->GetZaxis()->SetLabelFont(42);
   bjeten_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bjeten_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bjeten_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_W_stack_4,"hist");
   
   TH1F *bjeten_SinglesPtop_stack_5 = new TH1F("bjeten_SinglesPtop_stack_5","Single top",30,0,300);
   bjeten_SinglesPtop_stack_5->SetBinContent(4,293.9142);
   bjeten_SinglesPtop_stack_5->SetBinContent(5,551.5771);
   bjeten_SinglesPtop_stack_5->SetBinContent(6,586.0452);
   bjeten_SinglesPtop_stack_5->SetBinContent(7,620.9927);
   bjeten_SinglesPtop_stack_5->SetBinContent(8,594.4564);
   bjeten_SinglesPtop_stack_5->SetBinContent(9,563.4095);
   bjeten_SinglesPtop_stack_5->SetBinContent(10,525.1364);
   bjeten_SinglesPtop_stack_5->SetBinContent(11,397.3724);
   bjeten_SinglesPtop_stack_5->SetBinContent(12,371.654);
   bjeten_SinglesPtop_stack_5->SetBinContent(13,339.0769);
   bjeten_SinglesPtop_stack_5->SetBinContent(14,319.5254);
   bjeten_SinglesPtop_stack_5->SetBinContent(15,282.8734);
   bjeten_SinglesPtop_stack_5->SetBinContent(16,235.8994);
   bjeten_SinglesPtop_stack_5->SetBinContent(17,208.6566);
   bjeten_SinglesPtop_stack_5->SetBinContent(18,215.4553);
   bjeten_SinglesPtop_stack_5->SetBinContent(19,167.9308);
   bjeten_SinglesPtop_stack_5->SetBinContent(20,163.6348);
   bjeten_SinglesPtop_stack_5->SetBinContent(21,135.7202);
   bjeten_SinglesPtop_stack_5->SetBinContent(22,112.3094);
   bjeten_SinglesPtop_stack_5->SetBinContent(23,98.20546);
   bjeten_SinglesPtop_stack_5->SetBinContent(24,133.1333);
   bjeten_SinglesPtop_stack_5->SetBinContent(25,65.00244);
   bjeten_SinglesPtop_stack_5->SetBinContent(26,61.60627);
   bjeten_SinglesPtop_stack_5->SetBinContent(27,68.95908);
   bjeten_SinglesPtop_stack_5->SetBinContent(28,60.54333);
   bjeten_SinglesPtop_stack_5->SetBinContent(29,45.29868);
   bjeten_SinglesPtop_stack_5->SetBinContent(30,53.47882);
   bjeten_SinglesPtop_stack_5->SetBinContent(31,659.8052);
   bjeten_SinglesPtop_stack_5->SetBinError(4,19.66756);
   bjeten_SinglesPtop_stack_5->SetBinError(5,27.06051);
   bjeten_SinglesPtop_stack_5->SetBinError(6,28.04825);
   bjeten_SinglesPtop_stack_5->SetBinError(7,28.89225);
   bjeten_SinglesPtop_stack_5->SetBinError(8,28.08962);
   bjeten_SinglesPtop_stack_5->SetBinError(9,27.49978);
   bjeten_SinglesPtop_stack_5->SetBinError(10,26.54648);
   bjeten_SinglesPtop_stack_5->SetBinError(11,22.9539);
   bjeten_SinglesPtop_stack_5->SetBinError(12,22.3147);
   bjeten_SinglesPtop_stack_5->SetBinError(13,21.34852);
   bjeten_SinglesPtop_stack_5->SetBinError(14,20.68182);
   bjeten_SinglesPtop_stack_5->SetBinError(15,19.57136);
   bjeten_SinglesPtop_stack_5->SetBinError(16,17.74595);
   bjeten_SinglesPtop_stack_5->SetBinError(17,16.72028);
   bjeten_SinglesPtop_stack_5->SetBinError(18,17.07593);
   bjeten_SinglesPtop_stack_5->SetBinError(19,15.01919);
   bjeten_SinglesPtop_stack_5->SetBinError(20,14.73825);
   bjeten_SinglesPtop_stack_5->SetBinError(21,13.59009);
   bjeten_SinglesPtop_stack_5->SetBinError(22,12.38228);
   bjeten_SinglesPtop_stack_5->SetBinError(23,11.49956);
   bjeten_SinglesPtop_stack_5->SetBinError(24,13.42411);
   bjeten_SinglesPtop_stack_5->SetBinError(25,9.31856);
   bjeten_SinglesPtop_stack_5->SetBinError(26,9.048445);
   bjeten_SinglesPtop_stack_5->SetBinError(27,9.662908);
   bjeten_SinglesPtop_stack_5->SetBinError(28,8.840582);
   bjeten_SinglesPtop_stack_5->SetBinError(29,7.807003);
   bjeten_SinglesPtop_stack_5->SetBinError(30,8.502672);
   bjeten_SinglesPtop_stack_5->SetBinError(31,29.63466);
   bjeten_SinglesPtop_stack_5->SetEntries(6353);
   bjeten_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjeten_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjeten_SinglesPtop_stack_5->SetMarkerColor(ci);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitle("Energy [GeV]");
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Jets");
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bjeten_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bjeten_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bjeten_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjeten_fx3005[31] = {
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
   0};
   Double_t Graph_from_bjeten_fy3005[31] = {
   0,
   0,
   0,
   6233,
   11589,
   13714,
   14289,
   14042,
   13252,
   11993,
   10756,
   9565,
   8494,
   7390,
   6381,
   5711,
   4998,
   4320,
   3732,
   3186,
   2933,
   2725,
   2309,
   1998,
   1824,
   1639,
   1383,
   1292,
   1177,
   1046,
   0};
   Double_t Graph_from_bjeten_felx3005[31] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_bjeten_fely3005[31] = {
   0,
   0,
   0,
   78.94935,
   107.6522,
   117.1068,
   119.5366,
   118.4989,
   115.1173,
   109.5126,
   103.7111,
   97.80082,
   92.1629,
   85.96511,
   79.88116,
   75.57116,
   70.69653,
   65.72671,
   61.0901,
   56.44466,
   54.15718,
   52.20153,
   48.05206,
   44.69899,
   42.70831,
   40.48456,
   37.18871,
   35.9444,
   34.30743,
   32.34192,
   0};
   Double_t Graph_from_bjeten_fehx3005[31] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_bjeten_fehy3005[31] = {
   1.841055,
   1.841055,
   1.841055,
   78.94935,
   107.6522,
   117.1068,
   119.5366,
   118.4989,
   115.1173,
   109.5126,
   103.7111,
   97.80082,
   92.1629,
   85.96511,
   79.88116,
   75.57116,
   70.69653,
   65.72671,
   61.0901,
   56.44466,
   54.15718,
   52.20153,
   48.05206,
   44.69899,
   42.70831,
   40.48456,
   37.18871,
   35.9444,
   34.30743,
   32.34192,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_bjeten_fx3005,Graph_from_bjeten_fy3005,Graph_from_bjeten_felx3005,Graph_from_bjeten_fehx3005,Graph_from_bjeten_fely3005,Graph_from_bjeten_fehy3005);
   grae->SetName("Graph_from_bjeten");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjeten3005 = new TH1F("Graph_Graph_from_bjeten3005","Data",100,0,330);
   Graph_Graph_from_bjeten3005->SetMinimum(0);
   Graph_Graph_from_bjeten3005->SetMaximum(15849.39);
   Graph_Graph_from_bjeten3005->SetDirectory(0);
   Graph_Graph_from_bjeten3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjeten3005->SetLineColor(ci);
   Graph_Graph_from_bjeten3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bjeten3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjeten3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjeten3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjeten3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjeten3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjeten3005);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjeten","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjeten_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjeten_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjeten_DY","DY","f");

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
   entry=leg->AddEntry("bjeten_W","W","f");

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
   entry=leg->AddEntry("bjeten_Single top","Single top","f");

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
   p2->Range(-43.37349,0.4485106,318.0723,1.597447);
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
   
   TH1F *ratioframe__6 = new TH1F("ratioframe__6","t#bar{t}",30,0,300);
   ratioframe__6->SetMinimum(0.46);
   ratioframe__6->SetMaximum(1.54);
   ratioframe__6->SetEntries(61714);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__6->SetMarkerColor(ci);
   ratioframe__6->GetXaxis()->SetTitle("Energy [GeV]");
   ratioframe__6->GetXaxis()->SetLabelFont(42);
   ratioframe__6->GetXaxis()->SetLabelSize(0);
   ratioframe__6->GetXaxis()->SetTitleSize(0);
   ratioframe__6->GetXaxis()->SetTitleOffset(0);
   ratioframe__6->GetXaxis()->SetTitleFont(42);
   ratioframe__6->GetYaxis()->SetTitle("Data/MC");
   ratioframe__6->GetYaxis()->SetNoExponent();
   ratioframe__6->GetYaxis()->SetNdivisions(5);
   ratioframe__6->GetYaxis()->SetLabelFont(42);
   ratioframe__6->GetYaxis()->SetLabelSize(0.18);
   ratioframe__6->GetYaxis()->SetTitleSize(0.2);
   ratioframe__6->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__6->GetYaxis()->SetTitleFont(42);
   ratioframe__6->GetZaxis()->SetLabelFont(42);
   ratioframe__6->GetZaxis()->SetLabelSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleSize(0.035);
   ratioframe__6->GetZaxis()->SetTitleFont(42);
   ratioframe__6->Draw("");
   
   Double_t Graph_from_ratio_fx3006[30] = {
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
   295};
   Double_t Graph_from_ratio_fy3006[30] = {
   0,
   0,
   0,
   0.8867316,
   0.8830484,
   0.8849118,
   0.8794085,
   0.8735049,
   0.8727665,
   0.8923436,
   0.868431,
   0.8878478,
   0.8776771,
   0.8546911,
   0.850762,
   0.885407,
   0.8217856,
   0.8484753,
   0.8305514,
   0.7982998,
   0.7869775,
   0.8885244,
   0.8388622,
   0.8465294,
   0.7798828,
   0.8558393,
   0.7918485,
   0.8126392,
   0.8075037,
   0.7837191};
   Double_t Graph_from_ratio_felx3006[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_ratio_fely3006[30] = {
   0,
   0,
   0,
   0.02349627,
   0.0170642,
   0.01582371,
   0.01532009,
   0.01532252,
   0.0157498,
   0.01704733,
   0.01733864,
   0.01894411,
   0.01982174,
   0.02043813,
   0.02185026,
   0.02439072,
   0.02357348,
   0.02652554,
   0.02776349,
   0.02841803,
   0.0288949,
   0.03550031,
   0.03557882,
   0.03854739,
   0.03643627,
   0.04375876,
   0.0430481,
   0.04644774,
   0.04748811,
   0.04823212};
   Double_t Graph_from_ratio_fehx3006[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_ratio_fehy3006[30] = {
   0,
   0,
   0,
   0.02349627,
   0.0170642,
   0.01582371,
   0.01532009,
   0.01532252,
   0.0157498,
   0.01704733,
   0.01733864,
   0.01894411,
   0.01982174,
   0.02043813,
   0.02185026,
   0.02439072,
   0.02357348,
   0.02652554,
   0.02776349,
   0.02841803,
   0.0288949,
   0.03550031,
   0.03557882,
   0.03854739,
   0.03643627,
   0.04375876,
   0.0430481,
   0.04644774,
   0.04748811,
   0.04823212};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,0,330);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.016427);
   Graph_Graph_from_ratio3006->SetDirectory(0);
   Graph_Graph_from_ratio3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3006->SetLineColor(ci);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3006);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
