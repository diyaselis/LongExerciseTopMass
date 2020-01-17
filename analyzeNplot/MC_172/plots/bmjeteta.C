void bmjeteta()
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
   p1->Range(-3.093976,-2393.967,2.689157,17556.59);
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
   
   TH1F *frame__13 = new TH1F("frame__13","t#bar{t}",24,-2.4,2.4);
   frame__13->SetMinimum(0.1);
   frame__13->SetMaximum(17357.08);
   frame__13->SetEntries(497128);
   frame__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__13->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__13->SetMarkerColor(ci);
   frame__13->GetXaxis()->SetTitle("#eta(b matched jet)");
   frame__13->GetXaxis()->SetLabelFont(42);
   frame__13->GetXaxis()->SetLabelSize(0.035);
   frame__13->GetXaxis()->SetTitleSize(0.035);
   frame__13->GetXaxis()->SetTitleFont(42);
   frame__13->GetYaxis()->SetTitle(" Events");
   frame__13->GetYaxis()->SetNoExponent();
   frame__13->GetYaxis()->SetLabelFont(42);
   frame__13->GetYaxis()->SetTitleSize(0.045);
   frame__13->GetYaxis()->SetTitleOffset(1.3);
   frame__13->GetYaxis()->SetTitleFont(42);
   frame__13->GetZaxis()->SetLabelFont(42);
   frame__13->GetZaxis()->SetLabelSize(0.035);
   frame__13->GetZaxis()->SetTitleSize(0.035);
   frame__13->GetZaxis()->SetTitleFont(42);
   frame__13->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_7 = new TH1F("mc_stack_7","mc",24,-2.4,2.4);
   mc_stack_7->SetMinimum(-5.049903e-07);
   mc_stack_7->SetMaximum(14019.18);
   mc_stack_7->SetDirectory(0);
   mc_stack_7->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_7->SetLineColor(ci);
   mc_stack_7->GetXaxis()->SetLabelFont(42);
   mc_stack_7->GetXaxis()->SetLabelSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleSize(0.035);
   mc_stack_7->GetXaxis()->SetTitleFont(42);
   mc_stack_7->GetYaxis()->SetLabelFont(42);
   mc_stack_7->GetYaxis()->SetLabelSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleSize(0.035);
   mc_stack_7->GetYaxis()->SetTitleOffset(0);
   mc_stack_7->GetYaxis()->SetTitleFont(42);
   mc_stack_7->GetZaxis()->SetLabelFont(42);
   mc_stack_7->GetZaxis()->SetLabelSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleSize(0.035);
   mc_stack_7->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_7);
   
   
   TH1F *bmjeteta_t#bar{t}_stack_1 = new TH1F("bmjeteta_t#bar{t}_stack_1","t#bar{t}",24,-2.4,2.4);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(1,1680.645);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(2,2610.162);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(3,3466.229);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(4,4709.854);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(5,6013.305);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(6,7220.128);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(7,8518.47);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(8,10071.71);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(9,11457.76);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(10,12344.46);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(11,12822.13);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(12,12740.79);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(13,12630.86);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(14,12576.79);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(15,12445.14);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(16,11612.4);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(17,10400.22);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(18,8833.348);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(19,7344.671);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(20,6109.6);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(21,4779.055);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(22,3543.666);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(23,2599.391);
   bmjeteta_t#bar{t}_stack_1->SetBinContent(24,1755.196);
   bmjeteta_t#bar{t}_stack_1->SetBinError(1,26.18982);
   bmjeteta_t#bar{t}_stack_1->SetBinError(2,32.6982);
   bmjeteta_t#bar{t}_stack_1->SetBinError(3,37.62733);
   bmjeteta_t#bar{t}_stack_1->SetBinError(4,43.92017);
   bmjeteta_t#bar{t}_stack_1->SetBinError(5,49.60714);
   bmjeteta_t#bar{t}_stack_1->SetBinError(6,54.42589);
   bmjeteta_t#bar{t}_stack_1->SetBinError(7,59.1094);
   bmjeteta_t#bar{t}_stack_1->SetBinError(8,64.24313);
   bmjeteta_t#bar{t}_stack_1->SetBinError(9,68.57819);
   bmjeteta_t#bar{t}_stack_1->SetBinError(10,71.19292);
   bmjeteta_t#bar{t}_stack_1->SetBinError(11,72.6079);
   bmjeteta_t#bar{t}_stack_1->SetBinError(12,72.31923);
   bmjeteta_t#bar{t}_stack_1->SetBinError(13,72.00466);
   bmjeteta_t#bar{t}_stack_1->SetBinError(14,71.91194);
   bmjeteta_t#bar{t}_stack_1->SetBinError(15,71.56584);
   bmjeteta_t#bar{t}_stack_1->SetBinError(16,69.11553);
   bmjeteta_t#bar{t}_stack_1->SetBinError(17,65.43649);
   bmjeteta_t#bar{t}_stack_1->SetBinError(18,60.28587);
   bmjeteta_t#bar{t}_stack_1->SetBinError(19,54.93133);
   bmjeteta_t#bar{t}_stack_1->SetBinError(20,50.13185);
   bmjeteta_t#bar{t}_stack_1->SetBinError(21,44.33849);
   bmjeteta_t#bar{t}_stack_1->SetBinError(22,38.1726);
   bmjeteta_t#bar{t}_stack_1->SetBinError(23,32.66196);
   bmjeteta_t#bar{t}_stack_1->SetBinError(24,26.86146);
   bmjeteta_t#bar{t}_stack_1->SetEntries(490737);
   bmjeteta_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bmjeteta_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bmjeteta_t#bar{t}_stack_1->SetMarkerColor(ci);
   bmjeteta_t#bar{t}_stack_1->GetXaxis()->SetTitle("#eta(b matched jet)");
   bmjeteta_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   bmjeteta_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetTitle(" Events");
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   bmjeteta_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   bmjeteta_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   bmjeteta_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   bmjeteta_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(bmjeteta_t#bar{t}_stack_1,"hist");
   
   TH1F *bmjeteta_Diboson_stack_2 = new TH1F("bmjeteta_Diboson_stack_2","Diboson",24,-2.4,2.4);
   bmjeteta_Diboson_stack_2->SetBinContent(1,2.047741);
   bmjeteta_Diboson_stack_2->SetBinContent(2,1.566767);
   bmjeteta_Diboson_stack_2->SetBinContent(3,2.177466);
   bmjeteta_Diboson_stack_2->SetBinContent(4,2.327782);
   bmjeteta_Diboson_stack_2->SetBinContent(5,3.46028);
   bmjeteta_Diboson_stack_2->SetBinContent(6,1.34241);
   bmjeteta_Diboson_stack_2->SetBinContent(7,4.743971);
   bmjeteta_Diboson_stack_2->SetBinContent(8,4.508893);
   bmjeteta_Diboson_stack_2->SetBinContent(9,2.503697);
   bmjeteta_Diboson_stack_2->SetBinContent(10,4.405806);
   bmjeteta_Diboson_stack_2->SetBinContent(11,4.805783);
   bmjeteta_Diboson_stack_2->SetBinContent(12,2.65433);
   bmjeteta_Diboson_stack_2->SetBinContent(13,3.152753);
   bmjeteta_Diboson_stack_2->SetBinContent(14,2.480552);
   bmjeteta_Diboson_stack_2->SetBinContent(15,5.706153);
   bmjeteta_Diboson_stack_2->SetBinContent(16,2.670913);
   bmjeteta_Diboson_stack_2->SetBinContent(17,2.489182);
   bmjeteta_Diboson_stack_2->SetBinContent(18,3.535263);
   bmjeteta_Diboson_stack_2->SetBinContent(19,2.810917);
   bmjeteta_Diboson_stack_2->SetBinContent(20,2.754861);
   bmjeteta_Diboson_stack_2->SetBinContent(21,1.63042);
   bmjeteta_Diboson_stack_2->SetBinContent(22,1.645466);
   bmjeteta_Diboson_stack_2->SetBinContent(23,1.967624);
   bmjeteta_Diboson_stack_2->SetBinContent(24,1.087115);
   bmjeteta_Diboson_stack_2->SetBinError(1,0.9142027);
   bmjeteta_Diboson_stack_2->SetBinError(2,0.7861329);
   bmjeteta_Diboson_stack_2->SetBinError(3,0.8960045);
   bmjeteta_Diboson_stack_2->SetBinError(4,0.9592965);
   bmjeteta_Diboson_stack_2->SetBinError(5,1.157462);
   bmjeteta_Diboson_stack_2->SetBinError(6,0.6880377);
   bmjeteta_Diboson_stack_2->SetBinError(7,1.37196);
   bmjeteta_Diboson_stack_2->SetBinError(8,1.364229);
   bmjeteta_Diboson_stack_2->SetBinError(9,0.9884766);
   bmjeteta_Diboson_stack_2->SetBinError(10,1.293673);
   bmjeteta_Diboson_stack_2->SetBinError(11,1.355089);
   bmjeteta_Diboson_stack_2->SetBinError(12,1.011764);
   bmjeteta_Diboson_stack_2->SetBinError(13,1.088051);
   bmjeteta_Diboson_stack_2->SetBinError(14,1.014566);
   bmjeteta_Diboson_stack_2->SetBinError(15,1.480051);
   bmjeteta_Diboson_stack_2->SetBinError(16,0.9959279);
   bmjeteta_Diboson_stack_2->SetBinError(17,1.020712);
   bmjeteta_Diboson_stack_2->SetBinError(18,1.192927);
   bmjeteta_Diboson_stack_2->SetBinError(19,1.068671);
   bmjeteta_Diboson_stack_2->SetBinError(20,1.045864);
   bmjeteta_Diboson_stack_2->SetBinError(21,0.8172939);
   bmjeteta_Diboson_stack_2->SetBinError(22,0.8229042);
   bmjeteta_Diboson_stack_2->SetBinError(23,0.88149);
   bmjeteta_Diboson_stack_2->SetBinError(24,0.6462658);
   bmjeteta_Diboson_stack_2->SetEntries(184);
   bmjeteta_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bmjeteta_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bmjeteta_Diboson_stack_2->SetMarkerColor(ci);
   bmjeteta_Diboson_stack_2->GetXaxis()->SetTitle("#eta(b matched jet)");
   bmjeteta_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   bmjeteta_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   bmjeteta_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   bmjeteta_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   bmjeteta_Diboson_stack_2->GetYaxis()->SetTitle(" Events");
   bmjeteta_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   bmjeteta_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   bmjeteta_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   bmjeteta_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   bmjeteta_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   bmjeteta_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   bmjeteta_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   bmjeteta_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   bmjeteta_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(bmjeteta_Diboson_stack_2,"hist");
   
   TH1F *bmjeteta_DY_stack_3 = new TH1F("bmjeteta_DY_stack_3","DY",24,-2.4,2.4);
   bmjeteta_DY_stack_3->SetBinContent(6,34.6937);
   bmjeteta_DY_stack_3->SetBinContent(7,51.13591);
   bmjeteta_DY_stack_3->SetBinContent(8,17.97306);
   bmjeteta_DY_stack_3->SetBinContent(12,37.30659);
   bmjeteta_DY_stack_3->SetBinContent(14,49.5363);
   bmjeteta_DY_stack_3->SetBinContent(16,33.64648);
   bmjeteta_DY_stack_3->SetBinContent(17,16.20458);
   bmjeteta_DY_stack_3->SetBinContent(18,16.58862);
   bmjeteta_DY_stack_3->SetBinContent(21,17.90387);
   bmjeteta_DY_stack_3->SetBinContent(22,16.82922);
   bmjeteta_DY_stack_3->SetBinContent(23,20.7678);
   bmjeteta_DY_stack_3->SetBinError(6,24.53743);
   bmjeteta_DY_stack_3->SetBinError(7,29.55091);
   bmjeteta_DY_stack_3->SetBinError(8,17.97306);
   bmjeteta_DY_stack_3->SetBinError(12,26.54869);
   bmjeteta_DY_stack_3->SetBinError(14,28.71127);
   bmjeteta_DY_stack_3->SetBinError(16,23.79165);
   bmjeteta_DY_stack_3->SetBinError(17,16.20458);
   bmjeteta_DY_stack_3->SetBinError(18,16.58863);
   bmjeteta_DY_stack_3->SetBinError(21,17.90386);
   bmjeteta_DY_stack_3->SetBinError(22,16.82922);
   bmjeteta_DY_stack_3->SetBinError(23,20.7678);
   bmjeteta_DY_stack_3->SetEntries(18);
   bmjeteta_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bmjeteta_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bmjeteta_DY_stack_3->SetMarkerColor(ci);
   bmjeteta_DY_stack_3->GetXaxis()->SetTitle("#eta(b matched jet)");
   bmjeteta_DY_stack_3->GetXaxis()->SetLabelFont(42);
   bmjeteta_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   bmjeteta_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   bmjeteta_DY_stack_3->GetXaxis()->SetTitleFont(42);
   bmjeteta_DY_stack_3->GetYaxis()->SetTitle(" Events");
   bmjeteta_DY_stack_3->GetYaxis()->SetLabelFont(42);
   bmjeteta_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   bmjeteta_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   bmjeteta_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   bmjeteta_DY_stack_3->GetYaxis()->SetTitleFont(42);
   bmjeteta_DY_stack_3->GetZaxis()->SetLabelFont(42);
   bmjeteta_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   bmjeteta_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   bmjeteta_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(bmjeteta_DY_stack_3,"hist");
   
   TH1F *bmjeteta_W_stack_4 = new TH1F("bmjeteta_W_stack_4","W",24,-2.4,2.4);
   bmjeteta_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bmjeteta_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bmjeteta_W_stack_4->SetMarkerColor(ci);
   bmjeteta_W_stack_4->GetXaxis()->SetTitle("#eta(b matched jet)");
   bmjeteta_W_stack_4->GetXaxis()->SetLabelFont(42);
   bmjeteta_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   bmjeteta_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   bmjeteta_W_stack_4->GetXaxis()->SetTitleFont(42);
   bmjeteta_W_stack_4->GetYaxis()->SetTitle(" Events");
   bmjeteta_W_stack_4->GetYaxis()->SetLabelFont(42);
   bmjeteta_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   bmjeteta_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   bmjeteta_W_stack_4->GetYaxis()->SetTitleOffset(0);
   bmjeteta_W_stack_4->GetYaxis()->SetTitleFont(42);
   bmjeteta_W_stack_4->GetZaxis()->SetLabelFont(42);
   bmjeteta_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   bmjeteta_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   bmjeteta_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(bmjeteta_W_stack_4,"hist");
   
   TH1F *bmjeteta_SinglesPtop_stack_5 = new TH1F("bmjeteta_SinglesPtop_stack_5","Single top",24,-2.4,2.4);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(1,92.39725);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(2,107.3342);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(3,118.4544);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(4,185.644);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(5,229.2581);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(6,291.925);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(7,377.2863);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(8,386.3604);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(9,488.2721);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(10,498.7401);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(11,524.6631);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(12,534.9211);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(13,528.9174);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(14,523.3836);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(15,458.5936);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(16,475.1092);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(17,411.3243);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(18,359.3197);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(19,306.1735);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(20,251.5666);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(21,206.6363);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(22,175.4643);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(23,120.3898);
   bmjeteta_SinglesPtop_stack_5->SetBinContent(24,94.44494);
   bmjeteta_SinglesPtop_stack_5->SetBinError(1,11.1148);
   bmjeteta_SinglesPtop_stack_5->SetBinError(2,11.94637);
   bmjeteta_SinglesPtop_stack_5->SetBinError(3,12.63743);
   bmjeteta_SinglesPtop_stack_5->SetBinError(4,15.70996);
   bmjeteta_SinglesPtop_stack_5->SetBinError(5,17.45031);
   bmjeteta_SinglesPtop_stack_5->SetBinError(6,19.77759);
   bmjeteta_SinglesPtop_stack_5->SetBinError(7,22.42624);
   bmjeteta_SinglesPtop_stack_5->SetBinError(8,22.69756);
   bmjeteta_SinglesPtop_stack_5->SetBinError(9,25.52881);
   bmjeteta_SinglesPtop_stack_5->SetBinError(10,25.96935);
   bmjeteta_SinglesPtop_stack_5->SetBinError(11,26.43587);
   bmjeteta_SinglesPtop_stack_5->SetBinError(12,26.76403);
   bmjeteta_SinglesPtop_stack_5->SetBinError(13,26.45289);
   bmjeteta_SinglesPtop_stack_5->SetBinError(14,26.47);
   bmjeteta_SinglesPtop_stack_5->SetBinError(15,24.80383);
   bmjeteta_SinglesPtop_stack_5->SetBinError(16,25.21097);
   bmjeteta_SinglesPtop_stack_5->SetBinError(17,23.53916);
   bmjeteta_SinglesPtop_stack_5->SetBinError(18,22.01167);
   bmjeteta_SinglesPtop_stack_5->SetBinError(19,20.2296);
   bmjeteta_SinglesPtop_stack_5->SetBinError(20,18.41675);
   bmjeteta_SinglesPtop_stack_5->SetBinError(21,16.61473);
   bmjeteta_SinglesPtop_stack_5->SetBinError(22,15.53242);
   bmjeteta_SinglesPtop_stack_5->SetBinError(23,12.75484);
   bmjeteta_SinglesPtop_stack_5->SetBinError(24,11.19119);
   bmjeteta_SinglesPtop_stack_5->SetEntries(6189);
   bmjeteta_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bmjeteta_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bmjeteta_SinglesPtop_stack_5->SetMarkerColor(ci);
   bmjeteta_SinglesPtop_stack_5->GetXaxis()->SetTitle("#eta(b matched jet)");
   bmjeteta_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   bmjeteta_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetTitle(" Events");
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   bmjeteta_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   bmjeteta_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   bmjeteta_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   bmjeteta_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(bmjeteta_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bmjeteta_fx3013[25] = {
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   0};
   Double_t Graph_from_bmjeteta_fy3013[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_bmjeteta_felx3013[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bmjeteta_fely3013[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_bmjeteta_fehx3013[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bmjeteta_fehy3013[25] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,Graph_from_bmjeteta_fx3013,Graph_from_bmjeteta_fy3013,Graph_from_bmjeteta_felx3013,Graph_from_bmjeteta_fehx3013,Graph_from_bmjeteta_fely3013,Graph_from_bmjeteta_fehy3013);
   grae->SetName("Graph_from_bmjeteta");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bmjeteta3013 = new TH1F("Graph_Graph_from_bmjeteta3013","Data",100,-2.88,2.88);
   Graph_Graph_from_bmjeteta3013->SetMinimum(0);
   Graph_Graph_from_bmjeteta3013->SetMaximum(2.02516);
   Graph_Graph_from_bmjeteta3013->SetDirectory(0);
   Graph_Graph_from_bmjeteta3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bmjeteta3013->SetLineColor(ci);
   Graph_Graph_from_bmjeteta3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bmjeteta3013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bmjeteta3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bmjeteta3013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_bmjeteta3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bmjeteta3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bmjeteta3013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bmjeteta3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bmjeteta3013);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bmjeteta","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bmjeteta_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bmjeteta_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bmjeteta_DY","DY","f");

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
   entry=leg->AddEntry("bmjeteta_W","W","f");

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
   entry=leg->AddEntry("bmjeteta_Single top","Single top","f");

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
   p2->Range(-3.093976,0.4485106,2.689157,1.597447);
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
   
   TH1F *ratioframe__14 = new TH1F("ratioframe__14","t#bar{t}",24,-2.4,2.4);
   ratioframe__14->SetMinimum(0.46);
   ratioframe__14->SetMaximum(1.54);
   ratioframe__14->SetEntries(497128);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetMarkerColor(ci);
   ratioframe__14->GetXaxis()->SetTitle("#eta(b matched jet)");
   ratioframe__14->GetXaxis()->SetLabelFont(42);
   ratioframe__14->GetXaxis()->SetLabelSize(0);
   ratioframe__14->GetXaxis()->SetTitleSize(0);
   ratioframe__14->GetXaxis()->SetTitleOffset(0);
   ratioframe__14->GetXaxis()->SetTitleFont(42);
   ratioframe__14->GetYaxis()->SetTitle("Data/MC");
   ratioframe__14->GetYaxis()->SetNoExponent();
   ratioframe__14->GetYaxis()->SetNdivisions(5);
   ratioframe__14->GetYaxis()->SetLabelFont(42);
   ratioframe__14->GetYaxis()->SetLabelSize(0.18);
   ratioframe__14->GetYaxis()->SetTitleSize(0.2);
   ratioframe__14->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__14->GetYaxis()->SetTitleFont(42);
   ratioframe__14->GetZaxis()->SetLabelFont(42);
   ratioframe__14->GetZaxis()->SetLabelSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleFont(42);
   ratioframe__14->Draw("");
   
   Double_t Graph_from_ratio_fx3014[24] = {
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3};
   Double_t Graph_from_ratio_fy3014[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3014[24] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3014[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3014[24] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3014[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(24,Graph_from_ratio_fx3014,Graph_from_ratio_fy3014,Graph_from_ratio_felx3014,Graph_from_ratio_fehx3014,Graph_from_ratio_fely3014,Graph_from_ratio_fehy3014);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3014 = new TH1F("Graph_Graph_from_ratio3014","Data",100,-2.88,2.88);
   Graph_Graph_from_ratio3014->SetMinimum(0);
   Graph_Graph_from_ratio3014->SetMaximum(1.1);
   Graph_Graph_from_ratio3014->SetDirectory(0);
   Graph_Graph_from_ratio3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3014->SetLineColor(ci);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3014);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
