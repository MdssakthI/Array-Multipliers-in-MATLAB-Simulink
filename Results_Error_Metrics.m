S0=[];S1=[];S2=[];S3=[];S4=[];S5=[];S6=[];S7=[];S8=[];S9=[];S10=[];S11=[];
S12=[];S13=[];S14=[];S15=[];
Result_Final=[];
Result_dec=[];
Size_Port_A=size(Port_A_DISP);
for i=1:Size_Port_A(1)-1
    S0=[S0 out.Sum0(1,i)];
    S1=[S1 out.Sum1(1,i)];
    S2=[S2 out.Sum2(1,i)];
    S3=[S3 out.Sum3(1,i)];
    S4=[S4 out.Sum4(1,i)];
    S5=[S5 out.Sum5(1,i)];
    S6=[S6 out.Sum6(1,i)];
    S7=[S7 out.Sum7(1,i)];
    S8=[S8 out.Sum8(1,i)];
    S9=[S9 out.Sum9(1,i)];
    S10=[S10 out.Sum10(1,i)];
    S11=[S11 out.Sum11(1,i)];
    S12=[S12 out.Sum12(1,i)];
    S13=[S13 out.Sum13(1,i)];
    S14=[S14 out.Sum14(1,i)];
    S15=[S15 out.Sum15(1,i)];
    Result = sprintf('%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d', S15(i),S14(i),S13(i),S12(i),S11(i),S10(i),S9(i),S8(i),S7(i),S6(i),S5(i),S4(i),S3(i),S2(i),S1(i),S0(i)); % If you want a string.
    Result_dec=[Result_dec ;bin2dec(Result)];
    %Result = str2double(Result); % If you want a double.
    
    %Result = strcat(num2str(S15),num2str(S14),num2str(S13),num2str(S12),num2str(S11),num2str(S10),num2str(S9),num2str(S8),num2str(S7),num2str(S6),num2str(S5),num2str(S4),num2str(S3),num2str(S2),num2str(S1),num2str(S0));
    Result_Final = [Result_Final ;Result];
end 

Accurate_Result=[]; 
for i=0:1:N
    for j=0:255
        Accurate_Result=[Accurate_Result i*j];
    end
end
Accurate_Result=Accurate_Result';
    
%error distance / Absolute Error
ED=[];
ED=[ED Result_dec-Accurate_Result];
%Mean Squared Error
%MSE = immse(Accurate_Result,Result_dec)
%Root Mean Square Error
%RMSE = sqrt(MSE)
MAE= (1/1024)*sum(ED)
%PSNR = 10*log10(255^2/MSE)
%Peak Signal to Noise Ratio (PSNR)
%peaksnr = psnr(Result_dec,Accurate_Result) %Not verified
%Normalized Cross Correlation (NK)
%NK = normxcorr2(Result_dec,Accurate_Result);
%Normalized Absolute Error
%Structural Content
[MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]=iq_measures(Accurate_Result,Result_dec,'no')
Error=[MAE,MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]';