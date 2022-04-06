% S0=[];S1=[];S2=[];S3=[];S4=[];S5=[];S6=[];S7=[];S8=[];S9=[];S10=[];S11=[];
% S12=[];S13=[];S14=[];S15=[];
Result_Final=zeros(250000,1);
Result_dec=zeros(250000,1);
Size_Port_A=size(Port_A_DISP);

for i=1:size(Port_A_DISP)-1  
%     S0=[S0 out.Sum0(1,i)];
%     S1=[S1 out.Sum1(1,i)];
%     S2=[S2 out.Sum2(1,i)];
%     S3=[S3 out.Sum3(1,i)];
%     S4=[S4 out.Sum4(1,i)];
%     S5=[S5 out.Sum5(1,i)];
%     S6=[S6 out.Sum6(1,i)];
%     S7=[S7 out.Sum7(1,i)];
%     S8=[S8 out.Sum8(1,i)];
%     S9=[S9 out.Sum9(1,i)];
%     S10=[S10 out.Sum10(1,i)];
%     S11=[S11 out.Sum11(1,i)];
%     S12=[S12 out.Sum12(1,i)];
%     S13=[S13 out.Sum13(1,i)];
%     S14=[S14 out.Sum14(1,i)];
%     S15=[S15 out.Sum15(1,i)];
    Result = sprintf('%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d', out.Sum15(1,i),out.Sum14(1,i),out.Sum13(1,i),out.Sum12(1,i),out.Sum11(1,i),out.Sum10(1,i),out.Sum9(1,i),out.Sum8(1,i),out.Sum7(1,i),out.Sum6(1,i),out.Sum5(1,i),out.Sum4(1,i),out.Sum3(1,i),out.Sum2(1,i),out.Sum1(1,i),out.Sum0(1,i)) % If you want a string.
    Result_dec(i)=bin2dec(Result);
    Result = str2double(Result); % If you want a double.

    %Result = strcat(num2str(S15),num2str(S14),num2str(S13),num2str(S12),num2str(S11),num2str(S10),num2str(S9),num2str(S8),num2str(S7),num2str(S6),num2str(S5),num2str(S4),num2str(S3),num2str(S2),num2str(S1),num2str(S0));
    %Result_Final(i) = Result;
end

%% Reconstructing Resultant Image and displaying it in figure
Img_Matrix=zeros(500,500);
k=1;
for i=1:500
    for j=1:500
        Img_Matrix(i,j)=Result_dec(k,1);
        k=k+1;
    end
end

figure(1)
Output_Display=mat2gray(Img_Matrix,[0 65025]);imshow(Output_Display)    
Accurate_Result=(im2double(img(1:500,1:500)).*255).*gray_img


% figure(2)
% Accurate_Display=mat2gray(Accurate_Result,[0 65025]);imshow(Accurate_Display); 


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

[MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]=iq_measures(Accurate_Result,Img_Matrix,'no')
Error=[MSE,PSNR,AD,SC,NK,MD,LMSE,NAE]';