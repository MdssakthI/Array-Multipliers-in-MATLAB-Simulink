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
      section.nData     = 34;
      section.data(34)  = dumData; %prealloc
      
	  ;% rtP.FromWorkspace7_Time0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWorkspace7_Data0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.FromWorkspace9_Time0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 64514;
	
	  ;% rtP.FromWorkspace9_Data0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 64516;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 129028;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 129030;
	
	  ;% rtP.FromWorkspace8_Time0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 193542;
	
	  ;% rtP.FromWorkspace8_Data0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 193544;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 258056;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 258058;
	
	  ;% rtP.FromWorkspace10_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 322570;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 322572;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 387084;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 387086;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 451598;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 451600;
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 516112;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 516114;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 580626;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 580628;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 645140;
	
	  ;% rtP.FromWorkspace13_Data0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 645142;
	
	  ;% rtP.FromWorkspace4_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 709654;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 709656;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 774168;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 774170;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 838682;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 838684;
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 903196;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 903198;
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 967710;
	
	  ;% rtP.FromWorkspace6_Data0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 967712;
	
	  ;% rtP.Constant_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 1032224;
	
	  ;% rtP.Constant1_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 1032225;
	
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
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtB.ns4p5qffbs
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nq0kqahirn
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 32256;
	
	  ;% rtB.p05b2tos5x
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 64512;
	
	  ;% rtB.a1kxek0qf0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 96768;
	
	  ;% rtB.pzuiisq4h5
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 129024;
	
	  ;% rtB.h3x1apuddp
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 161280;
	
	  ;% rtB.k0ww0ahqju
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 193536;
	
	  ;% rtB.lbojjlhp3e
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 225792;
	
	  ;% rtB.cf1q1sywfs
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 258048;
	
	  ;% rtB.ganzexiptk
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 290304;
	
	  ;% rtB.gwaczjbsbb
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 322560;
	
	  ;% rtB.dwosdq14jq
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 354816;
	
	  ;% rtB.mthgiu4zzb
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 387072;
	
	  ;% rtB.b03wo0vlnc
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 419328;
	
	  ;% rtB.jro0v4a1vj
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 451584;
	
	  ;% rtB.nogjdhu301
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 483840;
	
	  ;% rtB.kyixvogo0m
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 516096;
	
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
      section.nData     = 33;
      section.data(33)  = dumData; %prealloc
      
	  ;% rtDW.fh1xf5ew32.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.m4rjf4ewan.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.koh20ckr1d.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.lixywmk45f.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.njqi5gn3wz.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.p3tek1h1w5.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.eqxemamok3.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ljsicej2jp.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.c3ark0gajy.TimePtr
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.kymi3cbjki.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.aauzmjdxqq.TimePtr
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.dlkjiluyo1.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.gla14t4n1o.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.c3uuk2d4op.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.ange1qf3ku.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.lzinrftzd0.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.pvced405zq.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.g4udu5uvvb.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.no1io2ovug.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.pzqes4pt3b.LoggedData
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.az5i4ez2mn.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.cnii2el242.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.fsbz2syvej.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.ltksrcauy3.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.giqqxavhg0.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.hpf4srv5wy.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.psnduconoe.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.iqm3yzt00e.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.deeahv0ozb.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.hnunn5lfsf.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.c2ng0zd0ro.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.a1e2wlem3f.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.m1l3bctojx.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtDW.ntvaixwdrn.PrevIndex
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fzbhpbbfed.PrevIndex
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.hk2jnl5nld.PrevIndex
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.pqg4hz3zh4.PrevIndex
	  section.data(4).logicalSrcIdx = 36;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.latid21dux.PrevIndex
	  section.data(5).logicalSrcIdx = 37;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.gn31hrfwar.PrevIndex
	  section.data(6).logicalSrcIdx = 38;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.hmq1mmtxes.PrevIndex
	  section.data(7).logicalSrcIdx = 39;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.kmn3pgmyg5.PrevIndex
	  section.data(8).logicalSrcIdx = 40;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ntgl42hmkr.PrevIndex
	  section.data(9).logicalSrcIdx = 41;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.acnbzrcojc.PrevIndex
	  section.data(10).logicalSrcIdx = 42;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.ot5xfv5sth.PrevIndex
	  section.data(11).logicalSrcIdx = 43;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.k4wjhynsm1.PrevIndex
	  section.data(12).logicalSrcIdx = 44;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.b3n5ni3cpl.PrevIndex
	  section.data(13).logicalSrcIdx = 45;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.hwff2qevzk.PrevIndex
	  section.data(14).logicalSrcIdx = 46;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.ngarqyvhaz.PrevIndex
	  section.data(15).logicalSrcIdx = 47;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.bzjl2bpanr.PrevIndex
	  section.data(16).logicalSrcIdx = 48;
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


  targMap.checksum0 = 801067691;
  targMap.checksum1 = 2198617057;
  targMap.checksum2 = 3912794828;
  targMap.checksum3 = 102128146;

