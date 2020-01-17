void elpt()
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
   p1->Range(-57.83133,-4221.312,424.0964,30957.12);
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
   
   TH1F *frame__25 = new TH1F("frame__25","t#bar{t}",40,0,400);
   frame__25->SetMinimum(0.1);
   frame__25->SetMaximum(30605.34);
   frame__25->SetEntries(32767);
   frame__25->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__25->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__25->SetMarkerColor(ci);
   frame__25->GetXaxis()->SetTitle("electron pt [GeV]");
   frame__25->GetXaxis()->SetLabelFont(42);
   frame__25->GetXaxis()->SetLabelSize(0.035);
   frame__25->GetXaxis()->SetTitleSize(0.035);
   frame__25->GetXaxis()->SetTitleFont(42);
   frame__25->GetYaxis()->SetTitle(" electrons");
   frame__25->GetYaxis()->SetNoExponent();
   frame__25->GetYaxis()->SetLabelFont(42);
   frame__25->GetYaxis()->SetTitleSize(0.045);
   frame__25->GetYaxis()->SetTitleOffset(1.3);
   frame__25->GetYaxis()->SetTitleFont(42);
   frame__25->GetZaxis()->SetLabelFont(42);
   frame__25->GetZaxis()->SetLabelSize(0.035);
   frame__25->GetZaxis()->SetTitleSize(0.035);
   frame__25->GetZaxis()->SetTitleFont(42);
   frame__25->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_13 = new TH1F("mc_stack_13","mc",40,0,400);
   mc_stack_13->SetMinimum(-9.345868e-07);
   mc_stack_13->SetMaximum(24719.69);
   mc_stack_13->SetDirectory(0);
   mc_stack_13->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_13->SetLineColor(ci);
   mc_stack_13->GetXaxis()->SetLabelFont(42);
   mc_stack_13->GetXaxis()->SetLabelSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleFont(42);
   mc_stack_13->GetYaxis()->SetLabelFont(42);
   mc_stack_13->GetYaxis()->SetLabelSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleOffset(0);
   mc_stack_13->GetYaxis()->SetTitleFont(42);
   mc_stack_13->GetZaxis()->SetLabelFont(42);
   mc_stack_13->GetZaxis()->SetLabelSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_13);
   
   
   TH1F *elpt_t#bar{t}_stack_1 = new TH1F("elpt_t#bar{t}_stack_1","t#bar{t}",40,0,400);
   elpt_t#bar{t}_stack_1->SetBinContent(3,21441.49);
   elpt_t#bar{t}_stack_1->SetBinContent(4,22521.19);
   elpt_t#bar{t}_stack_1->SetBinContent(5,20912.85);
   elpt_t#bar{t}_stack_1->SetBinContent(6,16968.89);
   elpt_t#bar{t}_stack_1->SetBinContent(7,12923.89);
   elpt_t#bar{t}_stack_1->SetBinContent(8,9801.691);
   elpt_t#bar{t}_stack_1->SetBinContent(9,7316.345);
   elpt_t#bar{t}_stack_1->SetBinContent(10,5835.206);
   elpt_t#bar{t}_stack_1->SetBinContent(11,4404.959);
   elpt_t#bar{t}_stack_1->SetBinContent(12,3282.942);
   elpt_t#bar{t}_stack_1->SetBinContent(13,2313.812);
   elpt_t#bar{t}_stack_1->SetBinContent(14,1775.584);
   elpt_t#bar{t}_stack_1->SetBinContent(15,1331.609);
   elpt_t#bar{t}_stack_1->SetBinContent(16,964.2115);
   elpt_t#bar{t}_stack_1->SetBinContent(17,762.2607);
   elpt_t#bar{t}_stack_1->SetBinContent(18,516.4665);
   elpt_t#bar{t}_stack_1->SetBinContent(19,500.538);
   elpt_t#bar{t}_stack_1->SetBinContent(20,370.2109);
   elpt_t#bar{t}_stack_1->SetBinContent(21,278.7849);
   elpt_t#bar{t}_stack_1->SetBinContent(22,261.9543);
   elpt_t#bar{t}_stack_1->SetBinContent(23,164.6352);
   elpt_t#bar{t}_stack_1->SetBinContent(24,142.406);
   elpt_t#bar{t}_stack_1->SetBinContent(25,93.83549);
   elpt_t#bar{t}_stack_1->SetBinContent(26,83.05534);
   elpt_t#bar{t}_stack_1->SetBinContent(27,46.09734);
   elpt_t#bar{t}_stack_1->SetBinContent(28,59.8591);
   elpt_t#bar{t}_stack_1->SetBinContent(29,27.62606);
   elpt_t#bar{t}_stack_1->SetBinContent(30,75.58607);
   elpt_t#bar{t}_stack_1->SetBinContent(31,19.75975);
   elpt_t#bar{t}_stack_1->SetBinContent(32,34.22414);
   elpt_t#bar{t}_stack_1->SetBinContent(33,3.622273);
   elpt_t#bar{t}_stack_1->SetBinContent(34,15.94157);
   elpt_t#bar{t}_stack_1->SetBinContent(35,18.71748);
   elpt_t#bar{t}_stack_1->SetBinContent(36,9.592483);
   elpt_t#bar{t}_stack_1->SetBinContent(38,2.320959);
   elpt_t#bar{t}_stack_1->SetBinContent(40,11.64926);
   elpt_t#bar{t}_stack_1->SetBinContent(41,27.80788);
   elpt_t#bar{t}_stack_1->SetBinError(3,335.1022);
   elpt_t#bar{t}_stack_1->SetBinError(4,344.9214);
   elpt_t#bar{t}_stack_1->SetBinError(5,333.5186);
   elpt_t#bar{t}_stack_1->SetBinError(6,300.7797);
   elpt_t#bar{t}_stack_1->SetBinError(7,262.7256);
   elpt_t#bar{t}_stack_1->SetBinError(8,229.1449);
   elpt_t#bar{t}_stack_1->SetBinError(9,197.0702);
   elpt_t#bar{t}_stack_1->SetBinError(10,179.8426);
   elpt_t#bar{t}_stack_1->SetBinError(11,155.6524);
   elpt_t#bar{t}_stack_1->SetBinError(12,134.4104);
   elpt_t#bar{t}_stack_1->SetBinError(13,112.4781);
   elpt_t#bar{t}_stack_1->SetBinError(14,98.68396);
   elpt_t#bar{t}_stack_1->SetBinError(15,86.25238);
   elpt_t#bar{t}_stack_1->SetBinError(16,72.9541);
   elpt_t#bar{t}_stack_1->SetBinError(17,64.49979);
   elpt_t#bar{t}_stack_1->SetBinError(18,53.69438);
   elpt_t#bar{t}_stack_1->SetBinError(19,52.48704);
   elpt_t#bar{t}_stack_1->SetBinError(20,45.52874);
   elpt_t#bar{t}_stack_1->SetBinError(21,38.90477);
   elpt_t#bar{t}_stack_1->SetBinError(22,38.03626);
   elpt_t#bar{t}_stack_1->SetBinError(23,30.57736);
   elpt_t#bar{t}_stack_1->SetBinError(24,28.06232);
   elpt_t#bar{t}_stack_1->SetBinError(25,22.78705);
   elpt_t#bar{t}_stack_1->SetBinError(26,21.4774);
   elpt_t#bar{t}_stack_1->SetBinError(27,15.4348);
   elpt_t#bar{t}_stack_1->SetBinError(28,17.91581);
   elpt_t#bar{t}_stack_1->SetBinError(29,12.45145);
   elpt_t#bar{t}_stack_1->SetBinError(30,20.25785);
   elpt_t#bar{t}_stack_1->SetBinError(31,10.90023);
   elpt_t#bar{t}_stack_1->SetBinError(32,14.01796);
   elpt_t#bar{t}_stack_1->SetBinError(33,3.622273);
   elpt_t#bar{t}_stack_1->SetBinError(34,9.24862);
   elpt_t#bar{t}_stack_1->SetBinError(35,9.745252);
   elpt_t#bar{t}_stack_1->SetBinError(36,6.822664);
   elpt_t#bar{t}_stack_1->SetBinError(38,2.320959);
   elpt_t#bar{t}_stack_1->SetBinError(40,8.255318);
   elpt_t#bar{t}_stack_1->SetBinError(41,11.94555);
   elpt_t#bar{t}_stack_1->SetEntries(27079);
   elpt_t#bar{t}_stack_1->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   elpt_t#bar{t}_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   elpt_t#bar{t}_stack_1->SetMarkerColor(ci);
   elpt_t#bar{t}_stack_1->GetXaxis()->SetTitle("electron pt [GeV]");
   elpt_t#bar{t}_stack_1->GetXaxis()->SetLabelFont(42);
   elpt_t#bar{t}_stack_1->GetXaxis()->SetLabelSize(0.035);
   elpt_t#bar{t}_stack_1->GetXaxis()->SetTitleSize(0.035);
   elpt_t#bar{t}_stack_1->GetXaxis()->SetTitleFont(42);
   elpt_t#bar{t}_stack_1->GetYaxis()->SetTitle(" electrons");
   elpt_t#bar{t}_stack_1->GetYaxis()->SetLabelFont(42);
   elpt_t#bar{t}_stack_1->GetYaxis()->SetLabelSize(0.035);
   elpt_t#bar{t}_stack_1->GetYaxis()->SetTitleSize(0.035);
   elpt_t#bar{t}_stack_1->GetYaxis()->SetTitleOffset(0);
   elpt_t#bar{t}_stack_1->GetYaxis()->SetTitleFont(42);
   elpt_t#bar{t}_stack_1->GetZaxis()->SetLabelFont(42);
   elpt_t#bar{t}_stack_1->GetZaxis()->SetLabelSize(0.035);
   elpt_t#bar{t}_stack_1->GetZaxis()->SetTitleSize(0.035);
   elpt_t#bar{t}_stack_1->GetZaxis()->SetTitleFont(42);
   mc->Add(elpt_t#bar{t}_stack_1,"hist");
   
   TH1F *elpt_Diboson_stack_2 = new TH1F("elpt_Diboson_stack_2","Diboson",40,0,400);
   elpt_Diboson_stack_2->SetBinContent(3,21.64077);
   elpt_Diboson_stack_2->SetBinContent(4,26.16635);
   elpt_Diboson_stack_2->SetBinContent(5,24.36737);
   elpt_Diboson_stack_2->SetBinContent(6,16.89673);
   elpt_Diboson_stack_2->SetBinContent(7,15.07165);
   elpt_Diboson_stack_2->SetBinContent(8,11.35742);
   elpt_Diboson_stack_2->SetBinContent(9,10.01801);
   elpt_Diboson_stack_2->SetBinContent(10,9.540356);
   elpt_Diboson_stack_2->SetBinContent(11,5.591259);
   elpt_Diboson_stack_2->SetBinContent(12,5.982188);
   elpt_Diboson_stack_2->SetBinContent(13,2.082091);
   elpt_Diboson_stack_2->SetBinContent(14,2.815073);
   elpt_Diboson_stack_2->SetBinContent(15,6.55256);
   elpt_Diboson_stack_2->SetBinContent(16,1.678292);
   elpt_Diboson_stack_2->SetBinContent(17,2.623035);
   elpt_Diboson_stack_2->SetBinContent(18,1.782654);
   elpt_Diboson_stack_2->SetBinContent(19,1.718006);
   elpt_Diboson_stack_2->SetBinContent(20,2.477329);
   elpt_Diboson_stack_2->SetBinContent(21,1.617348);
   elpt_Diboson_stack_2->SetBinContent(22,1.660728);
   elpt_Diboson_stack_2->SetBinContent(24,1.798748);
   elpt_Diboson_stack_2->SetBinContent(25,0.7823845);
   elpt_Diboson_stack_2->SetBinContent(26,0.4460424);
   elpt_Diboson_stack_2->SetBinContent(27,0.6625967);
   elpt_Diboson_stack_2->SetBinContent(28,0.468703);
   elpt_Diboson_stack_2->SetBinContent(29,0.7930845);
   elpt_Diboson_stack_2->SetBinContent(31,0.7771947);
   elpt_Diboson_stack_2->SetBinContent(33,0.4085204);
   elpt_Diboson_stack_2->SetBinContent(34,1.118595);
   elpt_Diboson_stack_2->SetBinContent(37,0.834108);
   elpt_Diboson_stack_2->SetBinContent(39,0.46343);
   elpt_Diboson_stack_2->SetBinContent(41,1.958566);
   elpt_Diboson_stack_2->SetBinError(3,2.874821);
   elpt_Diboson_stack_2->SetBinError(4,3.128393);
   elpt_Diboson_stack_2->SetBinError(5,3.043494);
   elpt_Diboson_stack_2->SetBinError(6,2.538801);
   elpt_Diboson_stack_2->SetBinError(7,2.454769);
   elpt_Diboson_stack_2->SetBinError(8,2.109489);
   elpt_Diboson_stack_2->SetBinError(9,1.942823);
   elpt_Diboson_stack_2->SetBinError(10,1.980782);
   elpt_Diboson_stack_2->SetBinError(11,1.504608);
   elpt_Diboson_stack_2->SetBinError(12,1.545065);
   elpt_Diboson_stack_2->SetBinError(13,0.8860221);
   elpt_Diboson_stack_2->SetBinError(14,1.067853);
   elpt_Diboson_stack_2->SetBinError(15,1.603155);
   elpt_Diboson_stack_2->SetBinError(16,0.8352881);
   elpt_Diboson_stack_2->SetBinError(17,1.02735);
   elpt_Diboson_stack_2->SetBinError(18,0.8709895);
   elpt_Diboson_stack_2->SetBinError(19,0.8597774);
   elpt_Diboson_stack_2->SetBinError(20,1.015572);
   elpt_Diboson_stack_2->SetBinError(21,0.8102962);
   elpt_Diboson_stack_2->SetBinError(22,0.8312248);
   elpt_Diboson_stack_2->SetBinError(24,0.9003524);
   elpt_Diboson_stack_2->SetBinError(25,0.5533937);
   elpt_Diboson_stack_2->SetBinError(26,0.4460424);
   elpt_Diboson_stack_2->SetBinError(27,0.4698287);
   elpt_Diboson_stack_2->SetBinError(28,0.468703);
   elpt_Diboson_stack_2->SetBinError(29,0.5608044);
   elpt_Diboson_stack_2->SetBinError(31,0.549701);
   elpt_Diboson_stack_2->SetBinError(33,0.4085204);
   elpt_Diboson_stack_2->SetBinError(34,0.6502212);
   elpt_Diboson_stack_2->SetBinError(37,0.5906533);
   elpt_Diboson_stack_2->SetBinError(39,0.46343);
   elpt_Diboson_stack_2->SetBinError(41,0.8870875);
   elpt_Diboson_stack_2->SetEntries(511);
   elpt_Diboson_stack_2->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   elpt_Diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   elpt_Diboson_stack_2->SetMarkerColor(ci);
   elpt_Diboson_stack_2->GetXaxis()->SetTitle("electron pt [GeV]");
   elpt_Diboson_stack_2->GetXaxis()->SetLabelFont(42);
   elpt_Diboson_stack_2->GetXaxis()->SetLabelSize(0.035);
   elpt_Diboson_stack_2->GetXaxis()->SetTitleSize(0.035);
   elpt_Diboson_stack_2->GetXaxis()->SetTitleFont(42);
   elpt_Diboson_stack_2->GetYaxis()->SetTitle(" electrons");
   elpt_Diboson_stack_2->GetYaxis()->SetLabelFont(42);
   elpt_Diboson_stack_2->GetYaxis()->SetLabelSize(0.035);
   elpt_Diboson_stack_2->GetYaxis()->SetTitleSize(0.035);
   elpt_Diboson_stack_2->GetYaxis()->SetTitleOffset(0);
   elpt_Diboson_stack_2->GetYaxis()->SetTitleFont(42);
   elpt_Diboson_stack_2->GetZaxis()->SetLabelFont(42);
   elpt_Diboson_stack_2->GetZaxis()->SetLabelSize(0.035);
   elpt_Diboson_stack_2->GetZaxis()->SetTitleSize(0.035);
   elpt_Diboson_stack_2->GetZaxis()->SetTitleFont(42);
   mc->Add(elpt_Diboson_stack_2,"hist");
   
   TH1F *elpt_DY_stack_3 = new TH1F("elpt_DY_stack_3","DY",40,0,400);
   elpt_DY_stack_3->SetBinContent(3,218.3443);
   elpt_DY_stack_3->SetBinContent(4,35.34811);
   elpt_DY_stack_3->SetBinContent(5,17.90387);
   elpt_DY_stack_3->SetBinContent(7,9.033381);
   elpt_DY_stack_3->SetBinContent(8,16.81726);
   elpt_DY_stack_3->SetBinContent(10,20.71554);
   elpt_DY_stack_3->SetBinContent(17,0.3771112);
   elpt_DY_stack_3->SetBinContent(19,20.7678);
   elpt_DY_stack_3->SetBinError(3,60.63844);
   elpt_DY_stack_3->SetBinError(4,24.99494);
   elpt_DY_stack_3->SetBinError(5,17.90386);
   elpt_DY_stack_3->SetBinError(7,9.03338);
   elpt_DY_stack_3->SetBinError(8,16.81726);
   elpt_DY_stack_3->SetBinError(10,20.71554);
   elpt_DY_stack_3->SetBinError(17,0.3771112);
   elpt_DY_stack_3->SetBinError(19,20.7678);
   elpt_DY_stack_3->SetEntries(21);
   elpt_DY_stack_3->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   elpt_DY_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   elpt_DY_stack_3->SetMarkerColor(ci);
   elpt_DY_stack_3->GetXaxis()->SetTitle("electron pt [GeV]");
   elpt_DY_stack_3->GetXaxis()->SetLabelFont(42);
   elpt_DY_stack_3->GetXaxis()->SetLabelSize(0.035);
   elpt_DY_stack_3->GetXaxis()->SetTitleSize(0.035);
   elpt_DY_stack_3->GetXaxis()->SetTitleFont(42);
   elpt_DY_stack_3->GetYaxis()->SetTitle(" electrons");
   elpt_DY_stack_3->GetYaxis()->SetLabelFont(42);
   elpt_DY_stack_3->GetYaxis()->SetLabelSize(0.035);
   elpt_DY_stack_3->GetYaxis()->SetTitleSize(0.035);
   elpt_DY_stack_3->GetYaxis()->SetTitleOffset(0);
   elpt_DY_stack_3->GetYaxis()->SetTitleFont(42);
   elpt_DY_stack_3->GetZaxis()->SetLabelFont(42);
   elpt_DY_stack_3->GetZaxis()->SetLabelSize(0.035);
   elpt_DY_stack_3->GetZaxis()->SetTitleSize(0.035);
   elpt_DY_stack_3->GetZaxis()->SetTitleFont(42);
   mc->Add(elpt_DY_stack_3,"hist");
   
   TH1F *elpt_W_stack_4 = new TH1F("elpt_W_stack_4","W",40,0,400);
   elpt_W_stack_4->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   elpt_W_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   elpt_W_stack_4->SetMarkerColor(ci);
   elpt_W_stack_4->GetXaxis()->SetTitle("electron pt [GeV]");
   elpt_W_stack_4->GetXaxis()->SetLabelFont(42);
   elpt_W_stack_4->GetXaxis()->SetLabelSize(0.035);
   elpt_W_stack_4->GetXaxis()->SetTitleSize(0.035);
   elpt_W_stack_4->GetXaxis()->SetTitleFont(42);
   elpt_W_stack_4->GetYaxis()->SetTitle(" electrons");
   elpt_W_stack_4->GetYaxis()->SetLabelFont(42);
   elpt_W_stack_4->GetYaxis()->SetLabelSize(0.035);
   elpt_W_stack_4->GetYaxis()->SetTitleSize(0.035);
   elpt_W_stack_4->GetYaxis()->SetTitleOffset(0);
   elpt_W_stack_4->GetYaxis()->SetTitleFont(42);
   elpt_W_stack_4->GetZaxis()->SetLabelFont(42);
   elpt_W_stack_4->GetZaxis()->SetLabelSize(0.035);
   elpt_W_stack_4->GetZaxis()->SetTitleSize(0.035);
   elpt_W_stack_4->GetZaxis()->SetTitleFont(42);
   mc->Add(elpt_W_stack_4,"hist");
   
   TH1F *elpt_SinglesPtop_stack_5 = new TH1F("elpt_SinglesPtop_stack_5","Single top",40,0,400);
   elpt_SinglesPtop_stack_5->SetBinContent(3,824.687);
   elpt_SinglesPtop_stack_5->SetBinContent(4,959.8593);
   elpt_SinglesPtop_stack_5->SetBinContent(5,863.1464);
   elpt_SinglesPtop_stack_5->SetBinContent(6,730.0511);
   elpt_SinglesPtop_stack_5->SetBinContent(7,547.7768);
   elpt_SinglesPtop_stack_5->SetBinContent(8,481.7657);
   elpt_SinglesPtop_stack_5->SetBinContent(9,367.9721);
   elpt_SinglesPtop_stack_5->SetBinContent(10,266.4113);
   elpt_SinglesPtop_stack_5->SetBinContent(11,238.6671);
   elpt_SinglesPtop_stack_5->SetBinContent(12,211.6189);
   elpt_SinglesPtop_stack_5->SetBinContent(13,169.8385);
   elpt_SinglesPtop_stack_5->SetBinContent(14,142.5962);
   elpt_SinglesPtop_stack_5->SetBinContent(15,113.5316);
   elpt_SinglesPtop_stack_5->SetBinContent(16,85.87769);
   elpt_SinglesPtop_stack_5->SetBinContent(17,57.93166);
   elpt_SinglesPtop_stack_5->SetBinContent(18,57.96555);
   elpt_SinglesPtop_stack_5->SetBinContent(19,51.34457);
   elpt_SinglesPtop_stack_5->SetBinContent(20,23.1839);
   elpt_SinglesPtop_stack_5->SetBinContent(21,28.76873);
   elpt_SinglesPtop_stack_5->SetBinContent(22,26.5513);
   elpt_SinglesPtop_stack_5->SetBinContent(23,27.85304);
   elpt_SinglesPtop_stack_5->SetBinContent(24,31.74348);
   elpt_SinglesPtop_stack_5->SetBinContent(25,16.91513);
   elpt_SinglesPtop_stack_5->SetBinContent(26,10.05767);
   elpt_SinglesPtop_stack_5->SetBinContent(27,13.77747);
   elpt_SinglesPtop_stack_5->SetBinContent(28,13.02376);
   elpt_SinglesPtop_stack_5->SetBinContent(29,12.75763);
   elpt_SinglesPtop_stack_5->SetBinContent(30,9.767364);
   elpt_SinglesPtop_stack_5->SetBinContent(31,5.846041);
   elpt_SinglesPtop_stack_5->SetBinContent(32,12.76901);
   elpt_SinglesPtop_stack_5->SetBinContent(33,4.392556);
   elpt_SinglesPtop_stack_5->SetBinContent(34,1.979326);
   elpt_SinglesPtop_stack_5->SetBinContent(36,6.716249);
   elpt_SinglesPtop_stack_5->SetBinContent(37,2.338614);
   elpt_SinglesPtop_stack_5->SetBinContent(38,2.440263);
   elpt_SinglesPtop_stack_5->SetBinContent(39,2.907234);
   elpt_SinglesPtop_stack_5->SetBinContent(41,13.537);
   elpt_SinglesPtop_stack_5->SetBinError(3,32.71911);
   elpt_SinglesPtop_stack_5->SetBinError(4,35.65215);
   elpt_SinglesPtop_stack_5->SetBinError(5,33.95611);
   elpt_SinglesPtop_stack_5->SetBinError(6,31.20304);
   elpt_SinglesPtop_stack_5->SetBinError(7,26.87628);
   elpt_SinglesPtop_stack_5->SetBinError(8,25.44412);
   elpt_SinglesPtop_stack_5->SetBinError(9,22.21748);
   elpt_SinglesPtop_stack_5->SetBinError(10,19.17311);
   elpt_SinglesPtop_stack_5->SetBinError(11,18.10929);
   elpt_SinglesPtop_stack_5->SetBinError(12,17.08419);
   elpt_SinglesPtop_stack_5->SetBinError(13,15.28609);
   elpt_SinglesPtop_stack_5->SetBinError(14,13.92985);
   elpt_SinglesPtop_stack_5->SetBinError(15,12.45666);
   elpt_SinglesPtop_stack_5->SetBinError(16,10.89794);
   elpt_SinglesPtop_stack_5->SetBinError(17,8.943872);
   elpt_SinglesPtop_stack_5->SetBinError(18,8.870302);
   elpt_SinglesPtop_stack_5->SetBinError(19,8.407721);
   elpt_SinglesPtop_stack_5->SetBinError(20,5.566687);
   elpt_SinglesPtop_stack_5->SetBinError(21,6.196314);
   elpt_SinglesPtop_stack_5->SetBinError(22,5.993669);
   elpt_SinglesPtop_stack_5->SetBinError(23,6.156632);
   elpt_SinglesPtop_stack_5->SetBinError(24,6.594621);
   elpt_SinglesPtop_stack_5->SetBinError(25,4.742463);
   elpt_SinglesPtop_stack_5->SetBinError(26,3.608172);
   elpt_SinglesPtop_stack_5->SetBinError(27,4.34625);
   elpt_SinglesPtop_stack_5->SetBinError(28,4.201289);
   elpt_SinglesPtop_stack_5->SetBinError(29,4.262989);
   elpt_SinglesPtop_stack_5->SetBinError(30,3.711819);
   elpt_SinglesPtop_stack_5->SetBinError(31,2.799544);
   elpt_SinglesPtop_stack_5->SetBinError(32,4.262329);
   elpt_SinglesPtop_stack_5->SetBinError(33,2.439476);
   elpt_SinglesPtop_stack_5->SetBinError(34,1.48015);
   elpt_SinglesPtop_stack_5->SetBinError(36,3.005057);
   elpt_SinglesPtop_stack_5->SetBinError(37,1.680734);
   elpt_SinglesPtop_stack_5->SetBinError(38,1.744288);
   elpt_SinglesPtop_stack_5->SetBinError(39,2.055725);
   elpt_SinglesPtop_stack_5->SetBinError(41,4.425377);
   elpt_SinglesPtop_stack_5->SetEntries(5156);
   elpt_SinglesPtop_stack_5->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   elpt_SinglesPtop_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   elpt_SinglesPtop_stack_5->SetMarkerColor(ci);
   elpt_SinglesPtop_stack_5->GetXaxis()->SetTitle("electron pt [GeV]");
   elpt_SinglesPtop_stack_5->GetXaxis()->SetLabelFont(42);
   elpt_SinglesPtop_stack_5->GetXaxis()->SetLabelSize(0.035);
   elpt_SinglesPtop_stack_5->GetXaxis()->SetTitleSize(0.035);
   elpt_SinglesPtop_stack_5->GetXaxis()->SetTitleFont(42);
   elpt_SinglesPtop_stack_5->GetYaxis()->SetTitle(" electrons");
   elpt_SinglesPtop_stack_5->GetYaxis()->SetLabelFont(42);
   elpt_SinglesPtop_stack_5->GetYaxis()->SetLabelSize(0.035);
   elpt_SinglesPtop_stack_5->GetYaxis()->SetTitleSize(0.035);
   elpt_SinglesPtop_stack_5->GetYaxis()->SetTitleOffset(0);
   elpt_SinglesPtop_stack_5->GetYaxis()->SetTitleFont(42);
   elpt_SinglesPtop_stack_5->GetZaxis()->SetLabelFont(42);
   elpt_SinglesPtop_stack_5->GetZaxis()->SetLabelSize(0.035);
   elpt_SinglesPtop_stack_5->GetZaxis()->SetTitleSize(0.035);
   elpt_SinglesPtop_stack_5->GetZaxis()->SetTitleFont(42);
   mc->Add(elpt_Single top_stack_5,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_elpt_fx3025[41] = {
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
   Double_t Graph_from_elpt_fy3025[41] = {
   0,
   0,
   20651,
   22982,
   20165,
   16636,
   12694,
   9616,
   7124,
   5367,
   4008,
   2807,
   2169,
   1582,
   1211,
   948,
   674,
   563,
   396,
   321,
   252,
   178,
   144,
   123,
   105,
   75,
   53,
   55,
   34,
   31,
   32,
   24,
   20,
   12,
   14,
   7,
   9,
   4,
   5,
   5,
   0};
   Double_t Graph_from_elpt_felx3025[41] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_elpt_fely3025[41] = {
   0,
   0,
   143.7046,
   151.5982,
   142.0035,
   128.9806,
   112.6677,
   98.06121,
   84.40379,
   73.25981,
   63.30877,
   52.98113,
   46.57252,
   39.77436,
   34.79943,
   30.78961,
   25.96151,
   23.72762,
   19.89975,
   17.91647,
   15.87451,
   13.3294,
   11.9863,
   11.07567,
   10.23082,
   8.641077,
   7.257208,
   7.393726,
   5.80224,
   5.537671,
   5.627243,
   4.864704,
   4.43453,
   3.415326,
   3.696566,
   2.581513,
   2.943511,
   1.914367,
   2.159724,
   2.159724,
   0};
   Double_t Graph_from_elpt_fehx3025[41] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_elpt_fehy3025[41] = {
   1.841055,
   1.841055,
   143.7046,
   151.5982,
   142.0035,
   128.9806,
   112.6677,
   98.06121,
   84.40379,
   73.25981,
   63.30877,
   52.98113,
   46.57252,
   39.77436,
   34.79943,
   30.78961,
   25.96151,
   23.72762,
   19.89975,
   17.91647,
   15.87451,
   14.36698,
   13.02808,
   12.12087,
   11.27975,
   9.698975,
   8.326089,
   8.461342,
   6.888243,
   6.627738,
   6.715892,
   5.967055,
   5.546633,
   4.559911,
   4.830479,
   3.770356,
   4.110286,
   3.162815,
   3.382539,
   3.382539,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_elpt_fx3025,Graph_from_elpt_fy3025,Graph_from_elpt_felx3025,Graph_from_elpt_fehx3025,Graph_from_elpt_fely3025,Graph_from_elpt_fehy3025);
   grae->SetName("Graph_from_elpt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_elpt3025 = new TH1F("Graph_Graph_from_elpt3025","Data",100,0,440);
   Graph_Graph_from_elpt3025->SetMinimum(0);
   Graph_Graph_from_elpt3025->SetMaximum(25446.96);
   Graph_Graph_from_elpt3025->SetDirectory(0);
   Graph_Graph_from_elpt3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_elpt3025->SetLineColor(ci);
   Graph_Graph_from_elpt3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_elpt3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_elpt3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_elpt3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_elpt3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_elpt3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_elpt3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_elpt3025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_elpt3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_elpt3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_elpt3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_elpt3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_elpt3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_elpt3025);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_elpt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("elpt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("elpt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("elpt_DY","DY","f");

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
   entry=leg->AddEntry("elpt_W","W","f");

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
   entry=leg->AddEntry("elpt_Single top","Single top","f");

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
   
   TH1F *ratioframe__26 = new TH1F("ratioframe__26","t#bar{t}",40,0,400);
   ratioframe__26->SetMinimum(0.46);
   ratioframe__26->SetMaximum(1.54);
   ratioframe__26->SetEntries(32767);

   ci = TColor::GetColor("#cc0000");
   ratioframe__26->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__26->SetMarkerColor(ci);
   ratioframe__26->GetXaxis()->SetTitle("electron pt [GeV]");
   ratioframe__26->GetXaxis()->SetLabelFont(42);
   ratioframe__26->GetXaxis()->SetLabelSize(0);
   ratioframe__26->GetXaxis()->SetTitleSize(0);
   ratioframe__26->GetXaxis()->SetTitleOffset(0);
   ratioframe__26->GetXaxis()->SetTitleFont(42);
   ratioframe__26->GetYaxis()->SetTitle("Data/MC");
   ratioframe__26->GetYaxis()->SetNoExponent();
   ratioframe__26->GetYaxis()->SetNdivisions(5);
   ratioframe__26->GetYaxis()->SetLabelFont(42);
   ratioframe__26->GetYaxis()->SetLabelSize(0.18);
   ratioframe__26->GetYaxis()->SetTitleSize(0.2);
   ratioframe__26->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__26->GetYaxis()->SetTitleFont(42);
   ratioframe__26->GetZaxis()->SetLabelFont(42);
   ratioframe__26->GetZaxis()->SetLabelSize(0.035);
   ratioframe__26->GetZaxis()->SetTitleSize(0.035);
   ratioframe__26->GetZaxis()->SetTitleFont(42);
   ratioframe__26->Draw("");
   
   Double_t Graph_from_ratio_fx3026[40] = {
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
   Double_t Graph_from_ratio_fy3026[40] = {
   0,
   0,
   0.9175711,
   0.9761893,
   0.9242255,
   0.9390466,
   0.9405906,
   0.9325391,
   0.925876,
   0.8752628,
   0.8620805,
   0.8018756,
   0.8725797,
   0.8235316,
   0.8341983,
   0.9013399,
   0.8187636,
   0.9770663,
   0.689453,
   0.8108679,
   0.8150831,
   0.6134413,
   0.7480977,
   0.6990693,
   0.9414254,
   0.8016327,
   0.8754916,
   0.7498136,
   0.8257081,
   0.3631957,
   1.212903,
   0.5107128,
   2.374352,
   0.6302691,
   0.747964,
   0.4292179,
   2.836681,
   0.8401205,
   1.483387,
   0.4292119};
   Double_t Graph_from_ratio_felx3026[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_ratio_fely3026[40] = {
   0,
   0,
   0.01534034,
   0.01578898,
   0.01564029,
   0.01760521,
   0.02022157,
   0.02296774,
   0.02626562,
   0.02860138,
   0.03209023,
   0.0345328,
   0.04403286,
   0.04748009,
   0.05552752,
   0.06966674,
   0.07204524,
   0.1010631,
   0.07677378,
   0.1043048,
   0.1158779,
   0.09350896,
   0.1363135,
   0.1307815,
   0.2169329,
   0.2083336,
   0.2613144,
   0.2136103,
   0.2997164,
   0.1092488,
   0.5606183,
   0.1903219,
   1.345546,
   0.3601402,
   0.4377377,
   0.2545885,
   1.85233,
   0.6624939,
   1.140247,
   0.3596666};
   Double_t Graph_from_ratio_fehx3026[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t Graph_from_ratio_fehy3026[40] = {
   0,
   0,
   0.01534034,
   0.01578898,
   0.01564029,
   0.01760521,
   0.02022157,
   0.02296774,
   0.02626562,
   0.02860138,
   0.03209023,
   0.0345328,
   0.04403286,
   0.04748009,
   0.05552752,
   0.06966674,
   0.07204524,
   0.1010631,
   0.07677378,
   0.1043048,
   0.1158779,
   0.09350896,
   0.1363135,
   0.1307815,
   0.2169329,
   0.2083336,
   0.2613144,
   0.2136103,
   0.2997164,
   0.1092488,
   0.5606183,
   0.1903219,
   1.345546,
   0.3601402,
   0.4377377,
   0.2545885,
   1.85233,
   0.6624939,
   1.140247,
   0.3596666};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3026,Graph_from_ratio_fy3026,Graph_from_ratio_felx3026,Graph_from_ratio_fehx3026,Graph_from_ratio_fely3026,Graph_from_ratio_fehy3026);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3026 = new TH1F("Graph_Graph_from_ratio3026","Data",100,0,440);
   Graph_Graph_from_ratio3026->SetMinimum(0);
   Graph_Graph_from_ratio3026->SetMaximum(5.157912);
   Graph_Graph_from_ratio3026->SetDirectory(0);
   Graph_Graph_from_ratio3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3026->SetLineColor(ci);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3026);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
