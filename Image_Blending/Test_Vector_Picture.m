%Name : Mohandas Sakthi Santhiran
%Error Metric Evaluation of proposed approx multiplier
%Will be open sourced

% function [Sum,Cout] = Full_Adder(A,B,Cin)
%     Sum=bitxor(Cin,(bitxor(A,B));
%     Cout=bitor(bitand(A,B),bitand(bitxor(A,B),Cin)));
% end
% 
% A=str2num(dec2bin(16));
% B=str2num(dec2bin(8));
% Cin=str2num(dec2bin(1));
% [Sum,Cout]=FullAdder(A,B,Cin);
%% Declaration of Ports and Variables for Multiplicand
N=500;
Port_A=[];
Port_1=[0 0];
Port_2=[0 0];
Port_3=[0 0];
Port_4=[0 0];
Port_5=[0 0];
Port_6=[0 0];
Port_7=[0 0];
Port_8=[0 0];
t=0.01:0.01:0.01*N*N;
time_increment=1;

%% Loading first test image into multiplicand 8-bit input port
img=imread("Je4Tk.png");

for j=1:N
    for k=1:N
        for input=img(j,k)
            val=dec2bin(input,8);
            for i=1:8
                Port_A(i)=str2double(val(i));
            end
            s=size(Port_1)
            if s(1)>0
                time_increment=s(1);
            end
            Port_1=[Port_1 ;t(time_increment) Port_A(8)];
            Port_2=[Port_2 ;t(time_increment) Port_A(7)];
            Port_3=[Port_3 ;t(time_increment) Port_A(6)];
            Port_4=[Port_4 ;t(time_increment) Port_A(5)];
            Port_5=[Port_5 ;t(time_increment) Port_A(4)];
            Port_6=[Port_6 ;t(time_increment) Port_A(3)];
            Port_7=[Port_7 ;t(time_increment) Port_A(2)];
            Port_8=[Port_8 ;t(time_increment) Port_A(1)];
            Port_A=[];
        end
        Port_A_DISP=[Port_8 Port_7 Port_6 Port_5 Port_4 Port_3 Port_2 Port_1 ];
    end
end

%% Declaration of Ports and Variables for Multiplier
Port_B=[];
Port_9=[0 0];
Port_10=[0 0];
Port_11=[0 0];
Port_12=[0 0];
Port_13=[0 0];
Port_14=[0 0];
Port_15=[0 0];
Port_16=[0 0];
time_increment2=1;

%% Loading second test image into multiplicand 8-bit input port
img2=gray_img;

for l=1:N
    for m=1:N
        for input2=img2(l,m)
            val=dec2bin(input2,8)
            for i=1:8
                Port_B(i)=str2double(val(i));
            end
            s=size(Port_9);
            if s(1)>0
                time_increment2=s(1);
            end
            Port_9=[Port_9 ;t(time_increment2) Port_B(8)];
            Port_10=[Port_10 ;t(time_increment2) Port_B(7)];
            Port_11=[Port_11 ;t(time_increment2) Port_B(6)];
            Port_12=[Port_12 ;t(time_increment2) Port_B(5)];
            Port_13=[Port_13 ;t(time_increment2) Port_B(4)];
            Port_14=[Port_14 ;t(time_increment2) Port_B(3)];
            Port_15=[Port_15 ;t(time_increment2) Port_B(2)];
            Port_16=[Port_16 ;t(time_increment2) Port_B(1)];
            Port_B=[];
        end
        Port_B_DISP=[Port_16 Port_15 Port_14 Port_13 Port_12 Port_11 Port_10 Port_9];
    end
end


Port_1=Port_1';
Port_2=Port_2';
Port_3=Port_3';
Port_4=Port_4';
Port_5=Port_5';
Port_6=Port_6';
Port_7=Port_7';
Port_8=Port_8';
Port_9=Port_9';
Port_10=Port_10';
Port_11=Port_11';
Port_12=Port_12';
Port_13=Port_13';
Port_14=Port_14';
Port_15=Port_15';
Port_16=Port_16';

