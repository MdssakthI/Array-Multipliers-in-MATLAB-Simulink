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
	  section.data(3).dtTransOffset = 131074;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 131076;
	
	  ;% rtP.FromWorkspace7_Time0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262148;
	
	  ;% rtP.FromWorkspace7_Data0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 262150;
	
	  ;% rtP.FromWorkspace9_Time0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393222;
	
	  ;% rtP.FromWorkspace9_Data0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 393224;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524296;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 524298;
	
	  ;% rtP.FromWorkspace8_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655370;
	
	  ;% rtP.FromWorkspace8_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 655372;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786444;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 786446;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917518;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 917520;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048592;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 1048594;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1179666;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1179668;
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1310740;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 1310742;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 1441814;
	
	  ;% rtP.FromWorkspace13_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 1441816;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 1572888;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 1572890;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 1703962;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 1703964;
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 1835036;
	
	  ;% rtP.FromWorkspace6_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 1835038;
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 1966110;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 1966112;
	
	  ;% rtP.Constant1_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 2097184;
	
	  ;% rtP.Constant2_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 2097185;
	
	  ;% rtP.Constant3_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 2097186;
	
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
      
	  ;% rtB.eup54mfimv
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.mnz5kle1gf
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 65536;
	
	  ;% rtB.h4zwj0gg5m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131072;
	
	  ;% rtB.dtcooeqmvn
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196608;
	
	  ;% rtB.hylxakpzl2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262144;
	
	  ;% rtB.e2gudbfzyg
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 327680;
	
	  ;% rtB.cizjerxfp1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393216;
	
	  ;% rtB.lyapzwh0q0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 458752;
	
	  ;% rtB.noqvucsf4c
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524288;
	
	  ;% rtB.d0ogx0dgen
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 589824;
	
	  ;% rtB.l0yxy1trsz
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655360;
	
	  ;% rtB.aiosmdxa2l
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 720896;
	
	  ;% rtB.fexnua0eu1
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786432;
	
	  ;% rtB.ig5johsy1x
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 851968;
	
	  ;% rtB.cjfjjcf1xa
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917504;
	
	  ;% rtB.jkdoicrvaa
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 983040;
	
	  ;% rtB.oujdf1cc4w
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048576;
	
	  ;% rtB.mtnyuvdch4
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 1114112;
	
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
      
	  ;% rtDW.gnbyk1vfpw.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.npiehoddtj.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cqnhljthsr.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.my2hna4bv5.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.hd0v2iido5.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.gbymj2ovto.AQHandles
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.fmgxrjxk2n.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.eiqxbuesbz.TimePtr
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.eq3rg3c5up.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.luhxwyafiu.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.cfvswxfwyx.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.hzvynktexa.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.eqacg2g0mx.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.kocbkcq1ny.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.ejgvioxsis.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.cdedddumvu.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.ewbt0atfr2.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.bwrixaskfc.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.kyuqkps5fr.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.nijly2wvbr.TimePtr
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.djfd54zveq.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.d5r3gt1qtk.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.buq141ezul.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.ovr2iox4zn.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.apbmqvnfyd.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.figs1pdllv.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.ghgjezc2no.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.daxhxgnuhd.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.ldwjz3eh43.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.ak2hahct4v.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.gqhwwusxhu.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.klzr21neu1.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.n3g1rf42ev.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.ldp5u1kzwu.LoggedData
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtDW.gtugm1qhhu.PrevIndex
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hjbxnaclbx.PrevIndex
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.jpw5msa5vc.PrevIndex
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.lgunhngoxg.PrevIndex
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.jg1qrtf2sl.PrevIndex
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.hq3pyscxok.PrevIndex
	  section.data(6).logicalSrcIdx = 39;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.j5bjhwt11y.PrevIndex
	  section.data(7).logicalSrcIdx = 40;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.hpkbuzawxv.PrevIndex
	  section.data(8).logicalSrcIdx = 41;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.fzkfbubcgq.PrevIndex
	  section.data(9).logicalSrcIdx = 42;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.elnvzbtyvt.PrevIndex
	  section.data(10).logicalSrcIdx = 43;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.cnkd33dq50.PrevIndex
	  section.data(11).logicalSrcIdx = 44;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.aahfl2c5s1.PrevIndex
	  section.data(12).logicalSrcIdx = 45;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.krwyoel2ll.PrevIndex
	  section.data(13).logicalSrcIdx = 46;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.lx30wb3zrx.PrevIndex
	  section.data(14).logicalSrcIdx = 47;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.gighpgdqo2.PrevIndex
	  section.data(15).logicalSrcIdx = 48;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.eppx5hicmk.PrevIndex
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


  targMap.checksum0 = 48784481;
  targMap.checksum1 = 2902915658;
  targMap.checksum2 = 2133966256;
  targMap.checksum3 = 2717791975;

