  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% rtP.FromWorkspace4_Time0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.FromWorkspace10_Time0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 500002;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 500004;
	
	  ;% rtP.FromWorkspace7_Time0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 1000004;
	
	  ;% rtP.FromWorkspace7_Data0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 1000006;
	
	  ;% rtP.FromWorkspace9_Time0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 1500006;
	
	  ;% rtP.FromWorkspace9_Data0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 1500008;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 2000008;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 2000010;
	
	  ;% rtP.FromWorkspace8_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 2500010;
	
	  ;% rtP.FromWorkspace8_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 2500012;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 3000012;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 3000014;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 3500014;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 3500016;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 4000016;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 4000018;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 4500018;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 4500020;
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 5000020;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 5000022;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 5500022;
	
	  ;% rtP.FromWorkspace13_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 5500024;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 6000024;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 6000026;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 6500026;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 6500028;
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 7000028;
	
	  ;% rtP.FromWorkspace6_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 7000030;
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 7500030;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 7500032;
	
	  ;% rtP.Constant1_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 8000032;
	
	  ;% rtP.Constant2_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 8000033;
	
	  ;% rtP.Constant3_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 8000034;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtB.k0hyfnm1ch
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.meiz31siww
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 250000;
	
	  ;% rtB.d54z2dljwq
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 500000;
	
	  ;% rtB.mcbil1nyld
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 750000;
	
	  ;% rtB.ktlhpjha4k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 1000000;
	
	  ;% rtB.l4ltwvzyvm
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 1250000;
	
	  ;% rtB.a0qrkwewg4
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 1500000;
	
	  ;% rtB.pr30j5ysml
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 1750000;
	
	  ;% rtB.hjh0ky43kr
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 2000000;
	
	  ;% rtB.mg5mdqgkpv
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 2250000;
	
	  ;% rtB.a53qjunlmv
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 2500000;
	
	  ;% rtB.krxguioqgx
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 2750000;
	
	  ;% rtB.bnwinqtrit
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 3000000;
	
	  ;% rtB.hfancckye0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 3250000;
	
	  ;% rtB.lj2ijy4alr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 3500000;
	
	  ;% rtB.bc5tmjuqzj
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 3750000;
	
	  ;% rtB.jfdlcoegym
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 4000000;
	
	  ;% rtB.dgk02pnspm
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 4250000;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 34;
      section.data(34)  = dumData; %prealloc
      
	  ;% rtDW.ojtbpb1yy5.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.f1tmsjtqnt.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.dx5s3uwqau.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.bfytgcxbki.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.djzkjp023y.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.jf0hghzqai.AQHandles
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.kmna4jad2b.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.aufaasvjgl.TimePtr
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.nfragcbcxx.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.kvb5m1pcgv.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.mjbvjuyhmx.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.mlk4hix5ud.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.lrq2lg0xm3.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.e2wcgahprl.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.prrcw4alw4.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.oahvl2yyy3.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.eot3d5vx3e.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.hjyyno5nqo.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.kt4kigj1cq.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.m2dox4smlm.TimePtr
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.m5mg4z5ebi.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.ha1fwacylw.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.muz2bhjt4s.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.bukctp4lfh.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.e324zd4vsk.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.hjigikktg3.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.kj1sde5cxa.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.mqqifw5u1d.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.pvbt4rjdrv.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.pl2tm32hqx.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.fxrziqiktn.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.dly0dk4jjq.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.lgdf2zo4wc.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.lwezto5dff.LoggedData
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtDW.kh0x535rb5.PrevIndex
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.a5eejfdcqf.PrevIndex
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.hfywki0r05.PrevIndex
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.cc3izxqqgf.PrevIndex
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.d5ulhfztgc.PrevIndex
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.arcmxsixf4.PrevIndex
	  section.data(6).logicalSrcIdx = 39;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.mlet1tetrq.PrevIndex
	  section.data(7).logicalSrcIdx = 40;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.kfae21jer3.PrevIndex
	  section.data(8).logicalSrcIdx = 41;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.kchhb3bx1t.PrevIndex
	  section.data(9).logicalSrcIdx = 42;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.k0pqdq20eu.PrevIndex
	  section.data(10).logicalSrcIdx = 43;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.gxxpejzeeu.PrevIndex
	  section.data(11).logicalSrcIdx = 44;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.nsfyw35vta.PrevIndex
	  section.data(12).logicalSrcIdx = 45;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.glsasphhw2.PrevIndex
	  section.data(13).logicalSrcIdx = 46;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.ccyhxmy2qg.PrevIndex
	  section.data(14).logicalSrcIdx = 47;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.axak2gonlb.PrevIndex
	  section.data(15).logicalSrcIdx = 48;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.hnjjnciu15.PrevIndex
	  section.data(16).logicalSrcIdx = 49;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2566471223;
  targMap.checksum1 = 4207072792;
  targMap.checksum2 = 3281424394;
  targMap.checksum3 = 3726560868;

