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
      section.nData     = 44;
      section.data(44)  = dumData; %prealloc
      
	  ;% rtP.FromWorkspace7_Time0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWorkspace7_Data0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.FromWorkspace9_Time0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131074;
	
	  ;% rtP.FromWorkspace9_Data0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 131076;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262148;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 262150;
	
	  ;% rtP.FromWorkspace8_Time0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393222;
	
	  ;% rtP.FromWorkspace8_Data0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 393224;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524296;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 524298;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655370;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 655372;
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786444;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 786446;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917518;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 917520;
	
	  ;% rtP.FromWorkspace4_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048592;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 1048594;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1179666;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1179668;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1310740;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 1310742;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 1441814;
	
	  ;% rtP.FromWorkspace13_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 1441816;
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 1572888;
	
	  ;% rtP.FromWorkspace6_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 1572890;
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 1703962;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 1703964;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 1835036;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 1835038;
	
	  ;% rtP.FromWorkspace10_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 1966110;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 1966112;
	
	  ;% rtP.Constant_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 2097184;
	
	  ;% rtP.Constant1_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 2097185;
	
	  ;% rtP.Constant10_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 2097186;
	
	  ;% rtP.Constant11_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 2097187;
	
	  ;% rtP.Constant2_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 2097188;
	
	  ;% rtP.Constant3_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 2097189;
	
	  ;% rtP.Constant4_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 2097190;
	
	  ;% rtP.Constant5_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 2097191;
	
	  ;% rtP.Constant6_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 2097192;
	
	  ;% rtP.Constant7_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 2097193;
	
	  ;% rtP.Constant8_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 2097194;
	
	  ;% rtP.Constant9_Value
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 2097195;
	
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
    nTotSects     = 2;
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
      
	  ;% rtB.liewt1idy0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.c3f5xp54js
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 65536;
	
	  ;% rtB.lqx12b0xy1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131072;
	
	  ;% rtB.c5x4egfo3o
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196608;
	
	  ;% rtB.a1ssold0cf
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262144;
	
	  ;% rtB.gpflyyrvgw
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 327680;
	
	  ;% rtB.dwutuz3ccd
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393216;
	
	  ;% rtB.nk3kxgqrrj
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 458752;
	
	  ;% rtB.bctdqm3hqv
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524288;
	
	  ;% rtB.puuhl5bfrb
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 589824;
	
	  ;% rtB.jg4g51cq5r
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655360;
	
	  ;% rtB.dkwsdhcmgi
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 720896;
	
	  ;% rtB.nzzrf3025p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786432;
	
	  ;% rtB.homs2h42w5
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 851968;
	
	  ;% rtB.dja5cpo1bk
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917504;
	
	  ;% rtB.ftgyvdtej5
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 983040;
	
	  ;% rtB.faktrlkhtc
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048576;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.gtqmwx3mzy
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.d55hvhulp0
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    sectIdxOffset = 2;
    
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
      
	  ;% rtDW.g0xb4l5keh.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.guvwlab5cj.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.azi3a5jqgt.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ly2u0svbhz.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.k4pmebkxm0.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.h2tvi3e4zc.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.dvrypl0qlq.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.nmd0gdzcmn.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.k43hkxinwx.TimePtr
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.nnintsv2v5.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.glchecpn25.TimePtr
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.fghyjkm11b.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.ofdt3igasd.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.nxbtbx35wl.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.cggw1zeixd.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.koghksg1kx.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.g3jmse5nhb.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.nbr0vpfhyq.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.m5n310htgl.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.f4eplfx1zr.LoggedData
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.luyniqswml.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.nog1w1hukz.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.kh4yvixqbe.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.cjcdkzuapp.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.cg0bxzudwl.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.eiur0wrcts.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.penqdnwkab.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.arch5uuns0.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.ondinwor10.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.j5unx1snrf.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.lqtv55rxal.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.nugueput5p.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.e50hwlfetp.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% rtDW.knljyxljhx
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.a4ka45qq3i
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.e0resaer1z.PrevIndex
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.cibzpdmmhr
	  section.data(4).logicalSrcIdx = 36;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.liwlvxel1g
	  section.data(5).logicalSrcIdx = 37;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.b5vx33zofm.PrevIndex
	  section.data(6).logicalSrcIdx = 38;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jtcicpj2sm
	  section.data(7).logicalSrcIdx = 39;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.pjfm2molyz
	  section.data(8).logicalSrcIdx = 40;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.gcwskomyjc.PrevIndex
	  section.data(9).logicalSrcIdx = 41;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.lsq2kpx252
	  section.data(10).logicalSrcIdx = 42;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.pcu5b3ghhi
	  section.data(11).logicalSrcIdx = 43;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.pzdmkrguwq.PrevIndex
	  section.data(12).logicalSrcIdx = 44;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.eabcjupldh
	  section.data(13).logicalSrcIdx = 45;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.hmjfatyrl4
	  section.data(14).logicalSrcIdx = 46;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.j310mstkss.PrevIndex
	  section.data(15).logicalSrcIdx = 47;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.nwn5t1uwqp
	  section.data(16).logicalSrcIdx = 48;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.f3iigipiku
	  section.data(17).logicalSrcIdx = 49;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.mwqvaddvfl.PrevIndex
	  section.data(18).logicalSrcIdx = 50;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.dl1isdhfyz
	  section.data(19).logicalSrcIdx = 51;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.a11comamzj
	  section.data(20).logicalSrcIdx = 52;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.jw3bgkm4th.PrevIndex
	  section.data(21).logicalSrcIdx = 53;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.oniqdvpsin
	  section.data(22).logicalSrcIdx = 54;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.h3gwww4axl
	  section.data(23).logicalSrcIdx = 55;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.djvjedwkym.PrevIndex
	  section.data(24).logicalSrcIdx = 56;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.fbuzu2oh1p
	  section.data(25).logicalSrcIdx = 57;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.jvs3kxs40w
	  section.data(26).logicalSrcIdx = 58;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.nxq3votgjx.PrevIndex
	  section.data(27).logicalSrcIdx = 59;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.obilf4y22j
	  section.data(28).logicalSrcIdx = 60;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.c0y1ylaiwq
	  section.data(29).logicalSrcIdx = 61;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.hlmig0afwy.PrevIndex
	  section.data(30).logicalSrcIdx = 62;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.mxzvbg4ftd
	  section.data(31).logicalSrcIdx = 63;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.ljlsms1abt
	  section.data(32).logicalSrcIdx = 64;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.hol1rnwm5o.PrevIndex
	  section.data(33).logicalSrcIdx = 65;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.ozpe3grulu
	  section.data(34).logicalSrcIdx = 66;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.czletarm4o
	  section.data(35).logicalSrcIdx = 67;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.ddavbq1tqq.PrevIndex
	  section.data(36).logicalSrcIdx = 68;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.daspqe2aoe
	  section.data(37).logicalSrcIdx = 69;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.hjp4ic2mxc
	  section.data(38).logicalSrcIdx = 70;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.gj4wn3ah3r.PrevIndex
	  section.data(39).logicalSrcIdx = 71;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.mv5dusxviz
	  section.data(40).logicalSrcIdx = 72;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.atu2lxmomi
	  section.data(41).logicalSrcIdx = 73;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.a42hiitwvh.PrevIndex
	  section.data(42).logicalSrcIdx = 74;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.oakvbgle2d
	  section.data(43).logicalSrcIdx = 75;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.omkjsjveyj
	  section.data(44).logicalSrcIdx = 76;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.ghhsf1sxoz.PrevIndex
	  section.data(45).logicalSrcIdx = 77;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.heuczihubc
	  section.data(46).logicalSrcIdx = 78;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.f0skiflgxl
	  section.data(47).logicalSrcIdx = 79;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.lrtzlied03.PrevIndex
	  section.data(48).logicalSrcIdx = 80;
	  section.data(48).dtTransOffset = 47;
	
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


  targMap.checksum0 = 1583969531;
  targMap.checksum1 = 2007326612;
  targMap.checksum2 = 437079099;
  targMap.checksum3 = 3818319278;

