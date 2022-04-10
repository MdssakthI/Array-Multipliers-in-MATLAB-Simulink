function [A,B,Title,XLabel,LegendBar] = Plot_Bar(A,B,Title,XLabel,LegendBar)
%PLOT_BAR Summary of this function goes here
%A and B are two data inputs
%xlabel is for the x-axis labels. There is a bug if data exceeds 10 values
%Title and LegendBar variables are as described
AB=[A B];
% for i=1:size(A,2)
%    AB=[AB ; A(i) B(i)] %Concatenate data beside each other to make side by side comparison
% end
%figure()
bar(AB);
set(gca,'xticklabel',XLabel)
title(Title)
xlabel("Multiplier Design");
ylabel("Value");
legend(LegendBar);
end

