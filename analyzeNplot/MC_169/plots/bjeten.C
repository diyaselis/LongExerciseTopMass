void bjeten()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 19:43:14 2020) by ROOT version 6.14/09
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
   p1->Range(-43.37349,-2874.749,318.0723,21082.33);
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
   frame__5->SetMaximum(20842.76);
   frame__5->SetEntries(44137);
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
   mc_stack_3->SetMaximum(16834.54);
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
   bjeten_t#bar{t}_stack_1->SetBinContent(4,6947.138);
   bjeten_t#bar{t}_stack_1->SetBinContent(5,12814.08);
   bjeten_t#bar{t}_stack_1->SetBinContent(6,14842.2);
   bjeten_t#bar{t}_stack_1->SetBinContent(7,15368.56);
   bjeten_t#bar{t}_stack_1->SetBinContent(8,14573.52);
   bjeten_t#bar{t}_stack_1->SetBinContent(9,13401.68);
   bjeten_t#bar{t}_stack_1->SetBinContent(10,12696.11);
   bjeten_t#bar{t}_stack_1->SetBinContent(11,11408.27);
   bjeten_t#bar{t}_stack_1->SetBinContent(12,9999.908);
   bjeten_t#bar{t}_stack_1->SetBinContent(13,8131.139);
   bjeten_t#bar{t}_stack_1->SetBinContent(14,7788.155);
   bjeten_t#bar{t}_stack_1->SetBinContent(15,6797.141);
   bjeten_t#bar{t}_stack_1->SetBinContent(16,5759.056);
   bjeten_t#bar{t}_stack_1->SetBinContent(17,5252.343);
   bjeten_t#bar{t}_stack_1->SetBinContent(18,4613.206);
   bjeten_t#bar{t}_stack_1->SetBinContent(19,3782.48);
   bjeten_t#bar{t}_stack_1->SetBinContent(20,3277.976);
   bjeten_t#bar{t}_stack_1->SetBinContent(21,2968.744);
   bjeten_t#bar{t}_stack_1->SetBinContent(22,2528.207);
   bjeten_t#bar{t}_stack_1->SetBinContent(23,2230.761);
   bjeten_t#bar{t}_stack_1->SetBinContent(24,2004.497);
   bjeten_t#bar{t}_stack_1->SetBinContent(25,1783.734);
   bjeten_t#bar{t}_stack_1->SetBinContent(26,1614.18);
   bjeten_t#bar{t}_stack_1->SetBinContent(27,1353.471);
   bjeten_t#bar{t}_stack_1->SetBinContent(28,1287.919);
   bjeten_t#bar{t}_stack_1->SetBinContent(29,1216.073);
   bjeten_t#bar{t}_stack_1->SetBinContent(30,1029.612);
   bjeten_t#bar{t}_stack_1->SetBinContent(31,10581.15);
   bjeten_t#bar{t}_stack_1->SetBinError(4,192.3685);
   bjeten_t#bar{t}_stack_1->SetBinError(5,261.5669);
   bjeten_t#bar{t}_stack_1->SetBinError(6,281.3759);
   bjeten_t#bar{t}_stack_1->SetBinError(7,286.4739);
   bjeten_t#bar{t}_stack_1->SetBinError(8,278.8172);
   bjeten_t#bar{t}_stack_1->SetBinError(9,267.2934);
   bjeten_t#bar{t}_stack_1->SetBinError(10,260.3155);
   bjeten_t#bar{t}_stack_1->SetBinError(11,247.3239);
   bjeten_t#bar{t}_stack_1->SetBinError(12,230.8315);
   bjeten_t#bar{t}_stack_1->SetBinError(13,208.8026);
   bjeten_t#bar{t}_stack_1->SetBinError(14,204.0829);
   bjeten_t#bar{t}_stack_1->SetBinError(15,189.8691);
   bjeten_t#bar{t}_stack_1->SetBinError(16,175.0607);
   bjeten_t#bar{t}_stack_1->SetBinError(17,167.7745);
   bjeten_t#bar{t}_stack_1->SetBinError(18,157.2629);
   bjeten_t#bar{t}_stack_1->SetBinError(19,142.1354);
   bjeten_t#bar{t}_stack_1->SetBinError(20,131.9169);
   bjeten_t#bar{t}_stack_1->SetBinError(21,126.0757);
   bjeten_t#bar{t}_stack_1->SetBinError(22,116.3616);
   bjeten_t#bar{t}_stack_1->SetBinError(23,108.7704);
   bjeten_t#bar{t}_stack_1->SetBinError(24,103.608);
   bjeten_t#bar{t}_stack_1->SetBinError(25,97.03303);
   bjeten_t#bar{t}_stack_1->SetBinError(26,92.57789);
   bjeten_t#bar{t}_stack_1->SetBinError(27,85.02973);
   bjeten_t#bar{t}_stack_1->SetBinError(28,82.91717);
   bjeten_t#bar{t}_stack_1->SetBinError(29,80.56091);
   bjeten_t#bar{t}_stack_1->SetBinError(30,74.14985);
   bjeten_t#bar{t}_stack_1->SetBinError(31,237.933);
   bjeten_t#bar{t}_stack_1->SetEntries(37220);
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
   ratioframe__6->SetEntries(44137);

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
   0.8570741,
   0.8653361,
   0.8850459,
   0.8912304,
   0.9220038,
   0.9455457,
   0.9054744,
   0.9104958,
   0.9216298,
   1.000392,
   0.9107568,
   0.9004541,
   0.951534,
   0.9128466,
   0.8907033,
   0.9398113,
   0.9200402,
   0.9436076,
   1.030698,
   0.9895811,
   0.933175,
   0.9853007,
   0.9775258,
   0.9602258,
   0.9421005,
   0.9331109,
   0.9657551};
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
   0.02536182,
   0.01882289,
   0.01791678,
   0.01770913,
   0.01874245,
   0.0199778,
   0.01974068,
   0.02106146,
   0.02264822,
   0.027075,
   0.02534544,
   0.02674629,
   0.03060726,
   0.03097188,
   0.03220522,
   0.03736696,
   0.03910877,
   0.04225672,
   0.04971123,
   0.05075685,
   0.05009456,
   0.05678332,
   0.05936463,
   0.06362281,
   0.06459348,
   0.06576284,
   0.0729424};
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
   0.02536182,
   0.01882289,
   0.01791678,
   0.01770913,
   0.01874245,
   0.0199778,
   0.01974068,
   0.02106146,
   0.02264822,
   0.027075,
   0.02534544,
   0.02674629,
   0.03060726,
   0.03097188,
   0.03220522,
   0.03736696,
   0.03910877,
   0.04225672,
   0.04971123,
   0.05075685,
   0.05009456,
   0.05678332,
   0.05936463,
   0.06362281,
   0.06459348,
   0.06576284,
   0.0729424};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,0,330);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.188451);
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
