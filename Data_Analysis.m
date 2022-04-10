%%Script to generate graphs for results
clear
MSE_CDM=[0	18564	7.95E+04	135126	170158	33278.125	79463.15625 21579993.09	34688265	19511288	10875472.56	21579993.09];
MSE_RCA=[0	1.65E+04	9.37E+04	154289	170158	25963.65625	90839.3125 4970914.438	15221391.84	25029071	19511288	9678355.563	15116540.94];

AD_CDM=[0	-31.5	-227.3027	-321	322.75	-115.15625	-227.3027344	-543.5	-3860.107422	-5125	3031.75	-2278.148438	-3860.107422
];
AD_RCA=[0 -11.1562	-241.125	-360	322.75	-104.1679688	-234.0839844	-384.609375	-2962.160156	-4362.25	3031.75	-2188.082031	-2947.201172
];

SC_RCA=[1 0.9981	0.9863	0.9763	1.028549288	0.992280725	0.986530398 ];
SC_CDM=[1 0.9974	0.9873	0.9804	1.028549288	0.991610038	0.987276231 ];

NK_RCA=[1 0.9981	1.001	1.0068	1.012	0.985941189	1.003862139	1.006730455];
NK_CDM=[1 0.9974	1.0013	1.0064	1.0099	0.985941189	1.004195196	1.006359635];

MD_RCA=[0 440	854	938	1708	808	854];
MD_CDM=[0 482	854	978	1708	1284	854];

% T28_Delay = [0.030155	0.032191	0.037369];
% EXA22T_Delay=[0.017654	0.017817	0.018205];
% Plot_Bar(T28_Delay,EXA22T_Delay,'Delay Comparison of EXA22T vs 28T Full Adder',{'22nm','32nm','45nm'},{'28-T CMOS Full Adder', 'EXA22T Novel Full Adder'})
% 
% T28_Power = [157.71	211.57	342.83];
% EXA22T_Power=[263.08	347.03	416.44];
% Plot_Bar(T28_Power,EXA22T_Power,'Power Dissipation Comparison of EXA22T vs 28T Full Adder',{'22nm','32nm','45nm'},{'28-T CMOS Full Adder', 'EXA22T Novel Full Adder'})
% 
% T28_A = [2.43174E-12	5.14483E-12	1.01741E-11];
% EXA22T_A=[1.65044E-12	3.49184E-12	6.90525E-12];
% Plot_Bar(T28_A,EXA22T_A,'Layout Area Comparison of EXA22T vs 28T Full Adder',{'22nm','32nm','45nm'},{'28-T CMOS Full Adder', 'EXA22T Novel Full Adder'})

%% Delay for All Adder Cells
Delay=[];
Delay_FA45=[0.037369 0.034798 0.018553 0.019224 0.018638 0.015806 0.010218 0.018205]
Delay_FA22=[0.030155 0.031484 0.017465 0.018725 0.017637 0.015947 0.010073 0.017654];
Delay_FA32=[0.032191 0.03367 0.018409 0.018879 0.016882 0.015725 0.010074 0.017817];
for i=1:8
Delay=[Delay ; Delay_FA45(i) Delay_FA32(i) Delay_FA22(i)];
end
figure()
bar(Delay)
XLabel={'T28','AMA1','AMA2','AMA3','InXA1','InXA2','InXA3','EXA22T'}
set(gca,'xticklabel',XLabel)
title("Delay Comparison between Full Adder Cells using 22nm,32nm and 45nm PTM Models")
xlabel("Adder Cells Used")
ylabel("Delay / ns")
legend({'45nm PTM Model' '32nm PTM Model' '22nm PTM Model'});

%% Power Dissipation for All Adder Cells
Power=[];
Power_FA45=[342.83 248.18 188.02 193.45 86.344 73.318 792.21 416.44];
Power_FA22=[157.71 128.97 98.395 108.22 7.6104 94.52 665.13 263.08];
Power_FA32=[211.57 159.39 119.53 129.21 21.302 58.235 761.59 347.03];
for i=1:8
Power=[Power ; Power_FA45(i) Power_FA32(i) Power_FA22(i)];
end
figure()
bar(Power)
XLabel={'T28','AMA1','AMA2','AMA3','InXA1','InXA2','InXA3','EXA22T'}
set(gca,'xticklabel',XLabel)
title("Power Dissipation Comparison between Full Adder Cells using 22nm,32nm and 45nm PTM Models")
xlabel("Adder Cells Used")
ylabel("Power Dissipation / nW")
legend({'45nm PTM Model' '32nm PTM Model' '22nm PTM Model'});

%% Area for All Adder Cells
Area=[];
Area_FA45=[1.01741E-11 5.89275E-12 5.73885E-12 4.0905E-12 2.99801E-12 3.969E-12 2.87753E-12 6.90525E-12];
Area_FA32=[5.14483E-12 2.97984E-12 2.90202E-12 2.06848E-12 1.51603E-12 2.00704E-12 1.4551E-12 3.49184E-12];
Area_FA22=[2.43174E-12 1.40844E-12 1.37166E-12 9.7768E-13 7.16562E-13 9.4864E-13 6.87764E-13 1.65044E-12];
for i=1:8
Area=[Area ; Area_FA45(i) Area_FA32(i) Area_FA22(i)];
end
figure()
bar(Area)
XLabel={'T28','AMA1','AMA2','AMA3','InXA1','InXA2','InXA3','EXA22T'}
set(gca,'xticklabel',XLabel)
title("Area Comparison between Full Adder Cells using 22nm,32nm and 45nm PTM Models")
xlabel("Adder Cells Used")
ylabel("Area / m^2")
legend({'45nm PTM Model' '32nm PTM Model' '22nm PTM Model'});

%% Plot of NAB vs PSNR
figure()
PSNR_MAC=[];
PSNR_MAC1=[79.6822	71.1551	70.6092	82.2071	Inf	71.1551	53.8387	44.8794	43.0013	44.681	56.4619	45.0408	29.6162	26.3402	23.3915	21.901	27.5648	26.359];
PSNR_MAC2=[78.6104	71.5333	71.5333	82.2071	Inf	71.5333	52.54364597	44.3545	43.9433	44.681	52.7066	44.3545	27.0879	23.1066	22.0552	21.901	24.6839	23.1066];
for i=1:18
PSNR_MAC=[PSNR_MAC ; PSNR_MAC1(i) PSNR_MAC2(i)];
end
bar(PSNR_MAC)
set(gca,'xticklabel',[])

% set(gca,'xticklabel',XLabel)
% title("Delay Comparison between Full Adder Cells using PTM 32nm Models")
% xlabel("Adder Cells Used")
% ylabel("Delay / ns")
hold on 


bar(Delay_FA22)
% XLabel={'T28','AMA1','AMA2','AMA3','InXA1','InXA2','InXA3','EXA22T'}
% set(gca,'xticklabel',XLabel)
% title("Delay Comparison between Full Adder Cells using PTM 32nm Models")
% xlabel("Adder Cells Used")
% ylabel("Delay / ns")

Plot_Bar(MSE_RCA(1:7),MSE_CDM(1:7),'MSE Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1','8AMA2','8AMA3','8InXA1','8InXA2','8InXA3'},{'MAC Design I', 'MAC Design II'})
%Plot_Bar(PSNR_RCA(1:7),PSNR_CDM(1:7),'PSNR Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1-EB','8AMA2-EB','8AMA3-EB','8InXA1-EB','8InXA2-EB','8InXA3-EB'})
Plot_Bar(AD_RCA(1:7),AD_CDM(1:7),'AD Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1','8AMA2','8AMA3','8InXA1','8InXA2','8InXA3'},{'MAC Design I', 'MAC Design II'})
Plot_Bar(SC_RCA(1:7),SC_CDM(1:7),'SC Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1','8AMA2','8AMA3','8InXA1','8InXA2','8InXA3'},{'MAC Design I', 'MAC Design II'})
Plot_Bar(NK_RCA(1:7),NK_CDM(1:7),'NK Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1','8AMA2','8AMA3','8InXA1','8InXA2','8InXA3'},{'MAC Design I', 'MAC Design II'})
Plot_Bar(MD_RCA(1:7),MD_CDM(1:7),'MD Comparison NAB=8 for 8-bit Multiplier',{'Exact','8AMA1','8AMA2','8AMA3','8InXA1','8InXA2','8InXA3'},{'MAC Design I', 'MAC Design II'})
% Plot_Bar(MSE_CDM(13:18),MSE_RCA(13:18),MAC,'MSE Comparison NAB=12')
% Plot_Bar(PSNR_CDM(13:18),PSNR_RCA(13:18),MAC,'PSNR Comparison NAB=12')
% Plot_Bar(AD_CDM(13:18),AD_RCA(13:18),MAC,'AD Comparison NAB=12')
% Plot_Bar(PSNR_CDM,PSNR_RCA,MAC,'PSNR Comparison NAB=4')
% Plot_Bar(AD_CDM,AD_RCA,MAC,'AD Comparison NAB=4')
