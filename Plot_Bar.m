function [Data_CDM,Data_RCA,FA,Title_Plot] = Plot_Bar(Data_CDM,Data_RCA,FA,Title_Plot)
%PLOT_BAR Summary of this function goes here
%   Detailed explanation goes here
b_data=[];
for i=1:6
   b_data=[b_data ; Data_CDM(i) Data_RCA(i)] 
end
figure()
bar(b_data);
title(Title_Plot)
legend('Carry-Save MAC','Ripple-Carry MAC');
end

