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
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917518;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 917520;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048592;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 1048594;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1179666;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1179668;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1310740;
	
	  ;% rtP.FromWorkspace3_Data0
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
      
	  ;% rtB.icmeug23yd
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kahhteyho0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 65536;
	
	  ;% rtB.g1g5fzyp4j
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131072;
	
	  ;% rtB.op5zfwxpem
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196608;
	
	  ;% rtB.fcp1tvzqdu
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262144;
	
	  ;% rtB.jkn5jguhvy
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 327680;
	
	  ;% rtB.d2qr5asfwj
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393216;
	
	  ;% rtB.kkcpfq4kub
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 458752;
	
	  ;% rtB.hoh3yov1xo
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524288;
	
	  ;% rtB.ellhmzh2h3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 589824;
	
	  ;% rtB.j02lqvxrlg
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655360;
	
	  ;% rtB.g1pjgzybux
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 720896;
	
	  ;% rtB.cipref3upt
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786432;
	
	  ;% rtB.mupymws3k3
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 851968;
	
	  ;% rtB.d41bodg12y
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917504;
	
	  ;% rtB.ayfvkpfmwj
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 983040;
	
	  ;% rtB.di1pxs4wub
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048576;
	
	  ;% rtB.nlvtydabhm
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
      
	  ;% rtDW.pvltcsg3fd.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.b1dguehs12.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.c1mkke1lc0.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.lqtjsmd0c0.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.enjvq1rtga.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ajfirptzuw.AQHandles
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.awjbgkvpml.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.bgsy1dpqct.TimePtr
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.k1cll4glti.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.n2rvtyxgyn.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.j4giqpsgit.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.ebwheh510k.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.cjva2p5i1u.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.j11louxedr.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.brkivscmyp.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.bkhye3vpg5.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.dub1rycbnz.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.nmdky2lrb2.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.pkw4hqakgw.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.ih233gw33i.TimePtr
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.lfpipej4d5.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.ksm0c15pn3.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.g2gvxr3gsi.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.hjizvovpsx.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.kr3cklxyu4.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.f1xmxzfzp0.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.gfsafs2vvk.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.gujjiko25c.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.fqlzo2jf0t.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.ncssq0cdqe.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.eziwunhvb3.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.l2l4tukvx1.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.feszysrdxp.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.duuwmv1zl1.LoggedData
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtDW.moidzuewht.PrevIndex
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.d25msrec11.PrevIndex
	  section.data(2).logicalSrcIdx = 35;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.o4oqn42ujc.PrevIndex
	  section.data(3).logicalSrcIdx = 36;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.kbdqbct1b2.PrevIndex
	  section.data(4).logicalSrcIdx = 37;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.mltx3t5uia.PrevIndex
	  section.data(5).logicalSrcIdx = 38;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kddtm1uwe3.PrevIndex
	  section.data(6).logicalSrcIdx = 39;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.frhsfxyceb.PrevIndex
	  section.data(7).logicalSrcIdx = 40;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.hzwxcai33x.PrevIndex
	  section.data(8).logicalSrcIdx = 41;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.a14vmdf0iv.PrevIndex
	  section.data(9).logicalSrcIdx = 42;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.eqyepdn0ua.PrevIndex
	  section.data(10).logicalSrcIdx = 43;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.o4b50arjk4.PrevIndex
	  section.data(11).logicalSrcIdx = 44;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.dnlhn3plya.PrevIndex
	  section.data(12).logicalSrcIdx = 45;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.bao1yo2tyh.PrevIndex
	  section.data(13).logicalSrcIdx = 46;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.c5ev3bj0ey.PrevIndex
	  section.data(14).logicalSrcIdx = 47;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.iryr4bvyss.PrevIndex
	  section.data(15).logicalSrcIdx = 48;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.pgjyomlnv4.PrevIndex
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


  targMap.checksum0 = 582112333;
  targMap.checksum1 = 1551001858;
  targMap.checksum2 = 3445610677;
  targMap.checksum3 = 2818132646;

