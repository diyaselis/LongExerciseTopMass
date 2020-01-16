void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 16 10:09:26 2020) by ROOT version 6.14/09
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
   p1->Range(-4.337349,-1663.757,31.80723,12201.72);
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
   
   TH1F *frame__27 = new TH1F("frame__27","t#bar{t}",30,0,30);
   frame__27->SetMinimum(0.1);
   frame__27->SetMaximum(12063.06);
   frame__27->SetEntries(32767);
   frame__27->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__27->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__27->SetMarkerColor(ci);
   frame__27->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__27->GetXaxis()->SetLabelFont(42);
   frame__27->GetXaxis()->SetLabelSize(0.035);
   frame__27->GetXaxis()->SetTitleSize(0.035);
   frame__27->GetXaxis()->SetTitleFont(42);
   frame__27->GetYaxis()->SetTitle(" Events");
   frame__27->GetYaxis()->SetNoExponent();
   frame__27->GetYaxis()->SetLabelFont(42);
   frame__27->GetYaxis()->SetTitleSize(0.045);
   frame__27->GetYaxis()->SetTitleOffset(1.3);
   frame__27->GetYaxis()->SetTitleFont(42);
   frame__27->GetZaxis()->SetLabelFont(42);
   frame__27->GetZaxis()->SetLabelSize(0.035);
   frame__27->GetZaxis()->SetTitleSize(0.035);
   frame__27->GetZaxis()->SetTitleFont(42);
   frame__27->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_14 = new TH1F("mc_stack_14","mc",30,0,30);
   mc_stack_14->SetMinimum(-9.345868e-07);
   mc_stack_14->SetMaximum(9743.243);
   mc_stack_14->SetDirectory(0);
   mc_stack_14->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_14->SetLineColor(ci);
   mc_stack_14->GetXaxis()->SetLabelFont(42);
   mc_stack_14->GetXaxis()->SetLabelSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleFont(42);
   mc_stack_14->GetYaxis()->SetLabelFont(42);
   mc_stack_14->GetYaxis()->SetLabelSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleOffset(0);
   mc_stack_14->GetYaxis()->SetTitleFont(42);
   mc_stack_14->GetZaxis()->SetLabelFont(42);
   mc_stack_14->GetZaxis()->SetLabelSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_14);
   
   
   TH1F *nvtx_t#bar{t}_stack_1 = new TH1F("nvtx_t#bar{t}_stack_1","t#bar{t}",30,0,30);
   nvtx_t#bar{t}_stack_1->SetBinContent(3,9.730954);
   nvtx_t#bar{t}_stack_1->SetBinContent(4,27.126);
   nvtx_t#bar{t}_stack_1->SetBinContent(5,48.76866);
   nvtx_t#bar{t}_stack_1->SetBinContent(6,166.7811);
   nvtx_t#bar{t}_stack_1->SetBinContent(7,403.0818);
   nvtx_t#bar{t}_stack_1->SetBinContent(8,682.481);
   nvtx_t#bar{t}_stack_1->SetBinContent(9,1121.302);
   nvtx_t#bar{t}_stack_1->SetBinContent(10,1869.047);
   nvtx_t#bar{t}_stack_1->SetBinContent(11,3028.512);
   nvtx_t#bar{t}_stack_1->SetBinContent(12,3728.635);
   nvtx_t#bar{t}_stack_1->SetBinContent(13,4743.558);
   nvtx_t#bar{t}_stack_1->SetBinContent(14,5723.837);
   nvtx_t#bar{t}_stack_1->SetBinContent(15,6632.208);
   nvtx_t#bar{t}_stack_1->SetBinContent(16,7708.618);
   nvtx_t#bar{t}_stack_1->SetBinContent(17,8155.155);
   nvtx_t#bar{t}_stack_1->SetBinContent(18,8633.962);
   nvtx_t#bar{t}_stack_1->SetBinContent(19,8547.792);
   nvtx_t#bar{t}_stack_1->SetBinContent(20,8844.458);
   nvtx_t#bar{t}_stack_1->SetBinContent(21,8242.692);
   nvtx_t#bar{t}_stack_1->SetBinContent(22,7765.623);
   nvtx_t#bar{t}_stack_1->SetBinContent(23,7267.392);
   nvtx_t#bar{t}_stack_1->SetBinContent(24,6780.073);
   nvtx_t#bar{t}_stack_1->SetBinContent(25,6336.423);
   nvtx_t#bar{t}_stack_1->SetBinContent(26,5288.988);
   nvtx_t#bar{t}_stack_1->SetBinContent(27,4394.909);
   nvtx_t#bar{t}_stack_1->SetBinContent(28,3645.124);
   nvtx_t#bar{t}_stack_1->SetBinContent(29,3158.087);
   nvtx_t#bar{t}_stack_1->SetBinContent(30,2731.791);
   nvtx_t#bar{t}_stack_1->SetBinContent(31,9635.409);
   nvtx_t#bar{t}_stack_1->SetBinError(3,5.278551);
   nvtx_t#bar{t}_stack_1->SetBinError(4,9.703346);
   nvtx_t#bar{t}_stack_1->SetBinError(5,13.69275);
   nvtx_t#bar{t}_stack_1->SetBinError(6,24.86273);
   nvtx_t#bar{t}_stack_1->SetBinError(7,41.55086);
   nvtx_t#bar{t}_stack_1->SetBinError(8,54.94376);
   nvtx_t#bar{t}_stack_1->SetBinError(9,71.2388);
   nvtx_t#bar{t}_stack_1->SetBinError(10,93.87376);
   nvtx_t#bar{t}_stack_1->SetBinError(11,121.0198);
   nvtx_t#bar{t}_stack_1->SetBinError(12,135.3934);
   nvtx_t#bar{t}_stack_1->SetBinError(13,154.528);
   nvtx_t#bar{t}_stack_1->SetBinError(14,171.097);
   nvtx_t#bar{t}_stack_1->SetBinError(15,185.5237);
   nvtx_t#bar{t}_stack_1->SetBinError(16,201.22);
   nvtx_t#bar{t}_stack_1->SetBinError(17,208.2164);
   nvtx_t#bar{t}_stack_1->SetBinError(18,215.2169);
   nvtx_t#bar{t}_stack_1->SetBinError(19,215.1505);
   nvtx_t#bar{t}_stack_1->SetBinError(20,219.9726);
   nvtx_t#bar{t}_stack_1->SetBinError(21,213.6109);
   nvtx_t#bar{t}_stack_1->SetBinError(22,208.1552);
   nvtx_t#bar{t}_stack_1->SetBinError(23,202.0827);
   nvtx_t#bar{t}_stack_1->SetBinError(24,195.0646);
   nvtx_t#bar{t}_stack_1->SetBinError(25,189.2675);
   nvtx_t#bar{t}_stack_1->SetBinError(26,171.9979);
   nvtx_t#bar{t}_stack_1->SetBinError(27,157.326);
   nvtx_t#bar{t}_stack_1->SetBinError(28,142.3733);
   nvtx_t#bar{t}_stack_1->SetBinError(29,131.8263);
   nvtx_t#bar{t}_stack_1->SetBinError(30,121.8613);
   nvtx_t#bar{t}_stack_1->SetBinError(31,217.0377);
   nvtx_t#bar{t}_stack_1->SetEntries(27079);
   nvtx_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}_stack_1->SetMarkerColor(ci);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   nvtx_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t}_stack_1,"hist");
   
   TH1F *nvtx_Diboson_stack_2 = new TH1F("nvtx_Diboson_stack_2","Diboson",30,0,30);
   nvtx_Diboson_stack_2->SetBinContent(5,0.3669195);
   nvtx_Diboson_stack_2->SetBinContent(7,0.09181011);
   nvtx_Diboson_stack_2->SetBinContent(8,1.146145);
   nvtx_Diboson_stack_2->SetBinContent(9,1.543194);
   nvtx_Diboson_stack_2->SetBinContent(10,2.768166);
   nvtx_Diboson_stack_2->SetBinContent(11,5.098091);
   nvtx_Diboson_stack_2->SetBinContent(12,4.497828);
   nvtx_Diboson_stack_2->SetBinContent(13,4.938346);
   nvtx_Diboson_stack_2->SetBinContent(14,5.920607);
   nvtx_Diboson_stack_2->SetBinContent(15,8.456815);
   nvtx_Diboson_stack_2->SetBinContent(16,9.319703);
   nvtx_Diboson_stack_2->SetBinContent(17,10.07892);
   nvtx_Diboson_stack_2->SetBinContent(18,9.204708);
   nvtx_Diboson_stack_2->SetBinContent(19,10.14536);
   nvtx_Diboson_stack_2->SetBinContent(20,9.527121);
   nvtx_Diboson_stack_2->SetBinContent(21,13.44261);
   nvtx_Diboson_stack_2->SetBinContent(22,9.876287);
   nvtx_Diboson_stack_2->SetBinContent(23,11.63869);
   nvtx_Diboson_stack_2->SetBinContent(24,6.451887);
   nvtx_Diboson_stack_2->SetBinContent(25,10.72303);
   nvtx_Diboson_stack_2->SetBinContent(26,6.973422);
   nvtx_Diboson_stack_2->SetBinContent(27,7.719114);
   nvtx_Diboson_stack_2->SetBinContent(28,7.10872);
   nvtx_Diboson_stack_2->SetBinContent(29,4.093088);
   nvtx_Diboson_stack_2->SetBinContent(30,4.55119);
   nvtx_Diboson_stack_2->SetBinContent(31,16.46942);
   nvtx_Diboson_stack_2->SetBinError(5,0.3669195);
   nvtx_Diboson_stack_2->SetBinError(7,0.09181012);
   nvtx_Diboson_stack_2->SetBinError(8,0.5971013);
   nvtx_Diboson_stack_2->SetBinError(9,0.6923629);
   nvtx_Diboson_stack_2->SetBinError(10,0.9869253);
   nvtx_Diboson_stack_2->SetBinError(11,1.334074);
   nvtx_Diboson_stack_2->SetBinError(12,1.263528);
   nvtx_Diboson_stack_2->SetBinError(13,1.373103);
   nvtx_Diboson_stack_2->SetBinError(14,1.490765);
   nvtx_Diboson_stack_2->SetBinError(15,1.776876);
   nvtx_Diboson_stack_2->SetBinError(16,1.90657);
   nvtx_Diboson_stack_2->SetBinError(17,1.980869);
   nvtx_Diboson_stack_2->SetBinError(18,1.923862);
   nvtx_Diboson_stack_2->SetBinError(19,1.996713);
   nvtx_Diboson_stack_2->SetBinError(20,1.949833);
   nvtx_Diboson_stack_2->SetBinError(21,2.350604);
   nvtx_Diboson_stack_2->SetBinError(22,2.022037);
   nvtx_Diboson_stack_2->SetBinError(23,2.17853);
   nvtx_Diboson_stack_2->SetBinError(24,1.591758);
   nvtx_Diboson_stack_2->SetBinError(25,2.106668);
   nvtx_Diboson_stack_2->SetBinError(26,1.708095);
   nvtx_Diboson_stack_2->SetBinError(27,1.772229);
   nvtx_Diboson_stack_2->SetBinError(28,1.74729);
   nvtx_Diboson_stack_2->SetBinError(29,1.248554);
   nvtx_Diboson_stack_2->SetBinError(30,1.311594);
   nvtx_Diboson_stack_2->SetBinError(31,2.378629);
   nvtx_Diboson_stack_2->SetEntries(511);
   nvtx_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson_stack_2->SetMarkerColor(ci);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   nvtx_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson_stack_2,"hist");
   
   TH1F *nvtx_DY_stack_3 = new TH1F("nvtx_DY_stack_3","DY",30,0,30);
   nvtx_DY_stack_3->SetBinContent(13,33.40588);
   nvtx_DY_stack_3->SetBinContent(14,16.99263);
   nvtx_DY_stack_3->SetBinContent(15,50.66055);
   nvtx_DY_stack_3->SetBinContent(16,31.8248);
   nvtx_DY_stack_3->SetBinContent(18,17.70657);
   nvtx_DY_stack_3->SetBinContent(21,34.73302);
   nvtx_DY_stack_3->SetBinContent(22,20.71554);
   nvtx_DY_stack_3->SetBinContent(23,34.53849);
   nvtx_DY_stack_3->SetBinContent(26,16.98714);
   nvtx_DY_stack_3->SetBinContent(27,15.6875);
   nvtx_DY_stack_3->SetBinContent(30,20.7678);
   nvtx_DY_stack_3->SetBinContent(31,45.28741);
   nvtx_DY_stack_3->SetBinError(13,23.62208);
   nvtx_DY_stack_3->SetBinError(14,16.99263);
   nvtx_DY_stack_3->SetBinError(15,29.26659);
   nvtx_DY_stack_3->SetBinError(16,22.52096);
   nvtx_DY_stack_3->SetBinError(18,17.70657);
   nvtx_DY_stack_3->SetBinError(21,24.61815);
   nvtx_DY_stack_3->SetBinError(22,20.71554);
   nvtx_DY_stack_3->SetBinError(23,24.43033);
   nvtx_DY_stack_3->SetBinError(26,16.98714);
   nvtx_DY_stack_3->SetBinError(27,15.6875);
   nvtx_DY_stack_3->SetBinError(30,20.7678);
   nvtx_DY_stack_3->SetBinError(31,26.93183);
   nvtx_DY_stack_3->SetEntries(21);
   nvtx_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY_stack_3->SetMarkerColor(ci);
   nvtx_DY_stack_3->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY_stack_3->GetXaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetXaxis()->SetTitleFont(42);
   nvtx_DY_stack_3->GetYaxis()->SetTitle(" Events");
   nvtx_DY_stack_3->GetYaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   nvtx_DY_stack_3->GetYaxis()->SetTitleFont(42);
   nvtx_DY_stack_3->GetZaxis()->SetLabelFont(42);
   nvtx_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY_stack_3,"hist");
   
   TH1F *nvtx_W_stack_4 = new TH1F("nvtx_W_stack_4","W",30,0,30);
   nvtx_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W_stack_4->SetMarkerColor(ci);
   nvtx_W_stack_4->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W_stack_4->GetXaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetXaxis()->SetTitleFont(42);
   nvtx_W_stack_4->GetYaxis()->SetTitle(" Events");
   nvtx_W_stack_4->GetYaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetYaxis()->SetTitleOffset(0);
   nvtx_W_stack_4->GetYaxis()->SetTitleFont(42);
   nvtx_W_stack_4->GetZaxis()->SetLabelFont(42);
   nvtx_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   nvtx_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   nvtx_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W_stack_4,"hist");
   
   TH1F *nvtx_SinglesPtop_stack_5 = new TH1F("nvtx_SinglesPtop_stack_5","Single top",30,0,30);
   nvtx_SinglesPtop_stack_5->SetBinContent(2,0.599883);
   nvtx_SinglesPtop_stack_5->SetBinContent(3,0.6295625);
   nvtx_SinglesPtop_stack_5->SetBinContent(5,3.39625);
   nvtx_SinglesPtop_stack_5->SetBinContent(6,9.10181);
   nvtx_SinglesPtop_stack_5->SetBinContent(7,14.4647);
   nvtx_SinglesPtop_stack_5->SetBinContent(8,47.10493);
   nvtx_SinglesPtop_stack_5->SetBinContent(9,55.53765);
   nvtx_SinglesPtop_stack_5->SetBinContent(10,81.44025);
   nvtx_SinglesPtop_stack_5->SetBinContent(11,108.1657);
   nvtx_SinglesPtop_stack_5->SetBinContent(12,161.6067);
   nvtx_SinglesPtop_stack_5->SetBinContent(13,247.0246);
   nvtx_SinglesPtop_stack_5->SetBinContent(14,268.3194);
   nvtx_SinglesPtop_stack_5->SetBinContent(15,298.417);
   nvtx_SinglesPtop_stack_5->SetBinContent(16,376.8653);
   nvtx_SinglesPtop_stack_5->SetBinContent(17,365.1441);
   nvtx_SinglesPtop_stack_5->SetBinContent(18,436.1141);
   nvtx_SinglesPtop_stack_5->SetBinContent(19,404.8253);
   nvtx_SinglesPtop_stack_5->SetBinContent(20,425.2941);
   nvtx_SinglesPtop_stack_5->SetBinContent(21,394.7953);
   nvtx_SinglesPtop_stack_5->SetBinContent(22,361.4669);
   nvtx_SinglesPtop_stack_5->SetBinContent(23,331.4504);
   nvtx_SinglesPtop_stack_5->SetBinContent(24,296.874);
   nvtx_SinglesPtop_stack_5->SetBinContent(25,297.5699);
   nvtx_SinglesPtop_stack_5->SetBinContent(26,263.9673);
   nvtx_SinglesPtop_stack_5->SetBinContent(27,247.4348);
   nvtx_SinglesPtop_stack_5->SetBinContent(28,172.4242);
   nvtx_SinglesPtop_stack_5->SetBinContent(29,152.3854);
   nvtx_SinglesPtop_stack_5->SetBinContent(30,142.146);
   nvtx_SinglesPtop_stack_5->SetBinContent(31,473.8024);
   nvtx_SinglesPtop_stack_5->SetBinError(2,0.5998829);
   nvtx_SinglesPtop_stack_5->SetBinError(3,0.6295625);
   nvtx_SinglesPtop_stack_5->SetBinError(5,1.761843);
   nvtx_SinglesPtop_stack_5->SetBinError(6,3.168554);
   nvtx_SinglesPtop_stack_5->SetBinError(7,3.579887);
   nvtx_SinglesPtop_stack_5->SetBinError(8,7.167945);
   nvtx_SinglesPtop_stack_5->SetBinError(9,7.960236);
   nvtx_SinglesPtop_stack_5->SetBinError(10,9.581911);
   nvtx_SinglesPtop_stack_5->SetBinError(11,11.36632);
   nvtx_SinglesPtop_stack_5->SetBinError(12,14.12865);
   nvtx_SinglesPtop_stack_5->SetBinError(13,17.77617);
   nvtx_SinglesPtop_stack_5->SetBinError(14,18.58171);
   nvtx_SinglesPtop_stack_5->SetBinError(15,19.66219);
   nvtx_SinglesPtop_stack_5->SetBinError(16,22.31968);
   nvtx_SinglesPtop_stack_5->SetBinError(17,22.10865);
   nvtx_SinglesPtop_stack_5->SetBinError(18,24.29003);
   nvtx_SinglesPtop_stack_5->SetBinError(19,23.42982);
   nvtx_SinglesPtop_stack_5->SetBinError(20,24.12603);
   nvtx_SinglesPtop_stack_5->SetBinError(21,23.34488);
   nvtx_SinglesPtop_stack_5->SetBinError(22,22.5275);
   nvtx_SinglesPtop_stack_5->SetBinError(23,21.63856);
   nvtx_SinglesPtop_stack_5->SetBinError(24,20.43867);
   nvtx_SinglesPtop_stack_5->SetBinError(25,20.46513);
   nvtx_SinglesPtop_stack_5->SetBinError(26,19.30615);
   nvtx_SinglesPtop_stack_5->SetBinError(27,18.68835);
   nvtx_SinglesPtop_stack_5->SetBinError(28,15.6317);
   nvtx_SinglesPtop_stack_5->SetBinError(29,14.65401);
   nvtx_SinglesPtop_stack_5->SetBinError(30,13.87727);
   nvtx_SinglesPtop_stack_5->SetBinError(31,23.76431);
   nvtx_SinglesPtop_stack_5->SetEntries(5156);
   nvtx_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop_stack_5->SetMarkerColor(ci);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   nvtx_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3027[31] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   0};
   Double_t Graph_from_nvtx_fy3027[31] = {
   0,
   9,
   16,
   47,
   114,
   292,
   613,
   1089,
   1901,
   2810,
   3803,
   5064,
   6214,
   7335,
   8136,
   8625,
   8835,
   8912,
   8427,
   8134,
   7499,
   6736,
   6017,
   5270,
   4515,
   3885,
   3212,
   2710,
   2247,
   1739,
   0};
   Double_t Graph_from_nvtx_felx3027[31] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fely3027[31] = {
   0,
   2.943511,
   3.957873,
   6.831306,
   10.66162,
   17.08801,
   24.75884,
   33,
   43.60046,
   53.00943,
   61.66847,
   71.16179,
   78.82893,
   85.64461,
   90.19978,
   92.87088,
   93.99468,
   94.40339,
   91.79869,
   90.18869,
   86.59677,
   82.07314,
   77.56932,
   72.59477,
   67.19375,
   62.32977,
   56.67451,
   52.05766,
   47.40253,
   41.70132,
   0};
   Double_t Graph_from_nvtx_fehx3027[31] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fehy3027[31] = {
   1.841055,
   4.110286,
   5.083169,
   7.904454,
   11.70857,
   17.08801,
   24.75884,
   33,
   43.60046,
   53.00943,
   61.66847,
   71.16179,
   78.82893,
   85.64461,
   90.19978,
   92.87088,
   93.99468,
   94.40339,
   91.79869,
   90.18869,
   86.59677,
   82.07314,
   77.56932,
   72.59477,
   67.19375,
   62.32977,
   56.67451,
   52.05766,
   47.40253,
   41.70132,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(31,Graph_from_nvtx_fx3027,Graph_from_nvtx_fy3027,Graph_from_nvtx_felx3027,Graph_from_nvtx_fehx3027,Graph_from_nvtx_fely3027,Graph_from_nvtx_fehy3027);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3027 = new TH1F("Graph_Graph_from_nvtx3027","Data",100,0,33);
   Graph_Graph_from_nvtx3027->SetMinimum(0);
   Graph_Graph_from_nvtx3027->SetMaximum(9907.044);
   Graph_Graph_from_nvtx3027->SetDirectory(0);
   Graph_Graph_from_nvtx3027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3027->SetLineColor(ci);
   Graph_Graph_from_nvtx3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_nvtx3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3027);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nvtx","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nvtx_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nvtx_DY","DY","f");

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
   entry=leg->AddEntry("nvtx_W","W","f");

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
   entry=leg->AddEntry("nvtx_Single top","Single top","f");

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
   p2->Range(-4.337349,0.4485106,31.80723,1.597447);
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
   
   TH1F *ratioframe__28 = new TH1F("ratioframe__28","t#bar{t}",30,0,30);
   ratioframe__28->SetMinimum(0.46);
   ratioframe__28->SetMaximum(1.54);
   ratioframe__28->SetEntries(32767);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetMarkerColor(ci);
   ratioframe__28->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__28->GetXaxis()->SetLabelFont(42);
   ratioframe__28->GetXaxis()->SetLabelSize(0);
   ratioframe__28->GetXaxis()->SetTitleSize(0);
   ratioframe__28->GetXaxis()->SetTitleOffset(0);
   ratioframe__28->GetXaxis()->SetTitleFont(42);
   ratioframe__28->GetYaxis()->SetTitle("Data/MC");
   ratioframe__28->GetYaxis()->SetNoExponent();
   ratioframe__28->GetYaxis()->SetNdivisions(5);
   ratioframe__28->GetYaxis()->SetLabelFont(42);
   ratioframe__28->GetYaxis()->SetLabelSize(0.18);
   ratioframe__28->GetYaxis()->SetTitleSize(0.2);
   ratioframe__28->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__28->GetYaxis()->SetTitleFont(42);
   ratioframe__28->GetZaxis()->SetLabelFont(42);
   ratioframe__28->GetZaxis()->SetLabelSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleFont(42);
   ratioframe__28->Draw("");
   
   Double_t Graph_from_ratio_fx3028[30] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5};
   Double_t Graph_from_ratio_fy3028[30] = {
   0,
   15.00293,
   1.544325,
   1.732655,
   2.170113,
   1.660195,
   1.467777,
   1.490286,
   1.613227,
   1.438624,
   1.210462,
   1.300215,
   1.235651,
   1.219437,
   1.163991,
   1.061326,
   1.03571,
   0.9796649,
   0.9402235,
   0.8765767,
   0.8633768,
   0.8257248,
   0.7870484,
   0.7439932,
   0.6794872,
   0.6966215,
   0.6884209,
   0.7085604,
   0.6779168,
   0.5998091};
   Double_t Graph_from_ratio_felx3028[30] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3028[30] = {
   0,
   15.81447,
   0.8814423,
   0.6693427,
   0.6056413,
   0.2557548,
   0.1581057,
   0.1217,
   0.1048819,
   0.07461408,
   0.05078137,
   0.0489823,
   0.04171599,
   0.03784226,
   0.03399397,
   0.02895507,
   0.02770882,
   0.02560046,
   0.02490769,
   0.02305429,
   0.0237,
   0.02355389,
   0.02339026,
   0.02300956,
   0.02193811,
   0.02443073,
   0.02644664,
   0.02982381,
   0.03066795,
   0.02948324};
   Double_t Graph_from_ratio_fehx3028[30] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3028[30] = {
   0,
   15.81447,
   0.8814423,
   0.6693427,
   0.6056413,
   0.2557548,
   0.1581057,
   0.1217,
   0.1048819,
   0.07461408,
   0.05078137,
   0.0489823,
   0.04171599,
   0.03784226,
   0.03399397,
   0.02895507,
   0.02770882,
   0.02560046,
   0.02490769,
   0.02305429,
   0.0237,
   0.02355389,
   0.02339026,
   0.02300956,
   0.02193811,
   0.02443073,
   0.02644664,
   0.02982381,
   0.03066795,
   0.02948324};
   grae = new TGraphAsymmErrors(30,Graph_from_ratio_fx3028,Graph_from_ratio_fy3028,Graph_from_ratio_felx3028,Graph_from_ratio_fehx3028,Graph_from_ratio_fely3028,Graph_from_ratio_fehy3028);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3028 = new TH1F("Graph_Graph_from_ratio3028","Data",100,0,33);
   Graph_Graph_from_ratio3028->SetMinimum(-3.97444);
   Graph_Graph_from_ratio3028->SetMaximum(33.98029);
   Graph_Graph_from_ratio3028->SetDirectory(0);
   Graph_Graph_from_ratio3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3028->SetLineColor(ci);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3028);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
