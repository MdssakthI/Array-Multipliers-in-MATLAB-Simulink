function [A,B,Title,XLabel,LegendBar] = Plot_Bar(A,B,Title,XLabel,LegendBar)
%PLOT_BAR Summary of this function goes here
%   Detailed explanation goes here
AB=[];
for i=1:size(A,2)
   AB=[AB ; A(i) B(i)] 
end
figure()
bar(AB);
set(gca,'xticklabel',XLabel)
title(Title)
xlabel("Multiplier Design");
ylabel("Value");
legend(LegendBar);
end

