
Size_Port_A=size(Port_A_DISP);
S0=zeros(1,250000);S3=zeros(1,250000);S6=zeros(1,250000);S9=zeros(1,250000);
S1=zeros(1,250000);S4=zeros(1,250000);S7=zeros(1,250000);S10=zeros(1,250000);
S2=zeros(1,250000);S5=zeros(1,250000);S8=zeros(1,250000);S11=zeros(1,250000);
S12=zeros(1,250000);S15=zeros(1,250000);
S13=zeros(1,250000);Result_dec=zeros(1,250000);
S14=zeros(1,250000);
for i=1:Size_Port_A(1)-1
    S0(1,i)=out.Sum0(1,i);
    S1(1,i)=out.Sum1(1,i);
    S2(1,i)=out.Sum2(1,i);
    S3(1,i)=out.Sum3(1,i);
    S4(1,i)=out.Sum4(1,i);
    S5(1,i)=out.Sum5(1,i);
    S6(1,i)=out.Sum6(1,i);
    S7(1,i)=out.Sum7(1,i);
    S8(1,i)=out.Sum8(1,i);
    S9(1,i)=out.Sum9(1,i);
    S10(1,i)=out.Sum10(1,i);
    S11(1,i)=out.Sum11(1,i);
    S12(1,i)=out.Sum12(1,i);
    S13(1,i)=out.Sum13(1,i);
    S14(1,i)=out.Sum14(1,i);
    S15(1,i)=out.Sum15(1,i);
    Result = sprintf('%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d', S15(1,i),S14(1,i),S13(1,i),S12(1,i),S11(1,i),S10(1,i),S9(1,i),S8(1,i),S7(1,i),S6(1,i),S5(1,i),S4(1,i),S3(1,i),S2(1,i),S1(1,i),S0(1,i)); % If you want a string.

    %Result_dec(1,i)=bin2dec(Result)
 
    %Result = str2double(Result); % If you want a double.

    %Result = strcat(num2str(S15),num2str(S14),num2str(S13),num2str(S12),num2str(S11),num2str(S10),num2str(S9),num2str(S8),num2str(S7),num2str(S6),num2str(S5),num2str(S4),num2str(S3),num2str(S2),num2str(S1),num2str(S0));
%     Result_Final(1,i) =Result;
end


% 
% Accurate_Result=[]; 
% for i=0:1:N
%     for j=0:255
%         Accurate_Result=[Accurate_Result i*j];
%     end
% end
% Accurate_Result=Accurate_Result';
    
% %error distance / Absolute Error
% ED=[];
% ED=[ED Result_dec-Accurate_Result];
% %Mean Squared Error
% %MSE = immse(Accurate_Result,Result_dec)
% %Root Mean Square Error
% %RMSE = sqrt(MSE)
% MAE= (1/1024)*sum(ED)
%PSNR = 10*log10(255^2/MSE)
%Peak Signal to Noise Ratio (PSNR)
%peaksnr = psnr(Result_dec,Accurate_Result) %Not verified
%Normalized Cross Correlation (NK)
%NK = normxcorr2(Result_dec,Accurate_Result);
%Normalized Absolute Error
%Structural Content
% [MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]=iq_measures(Accurate_Result,Result_dec,'no')
% Error=[MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]';