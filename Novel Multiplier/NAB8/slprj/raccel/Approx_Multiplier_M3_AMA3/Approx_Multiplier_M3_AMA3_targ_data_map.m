  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 40;
      section.data(40)  = dumData; %prealloc
      
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
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655370;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 655372;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786444;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 786446;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917518;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 917520;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048592;
	
	  ;% rtP.FromWorkspace13_Data0
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
	
	  ;% rtP.FromWorkspace4_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 1441814;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 1441816;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 1572888;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 1572890;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 1703962;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 1703964;
	
	  ;% rtP.FromWorkspace10_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 1835036;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 1835038;
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 1966110;
	
	  ;% rtP.FromWorkspace6_Data0
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
	
	  ;% rtP.Constant4_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 2097187;
	
	  ;% rtP.Constant5_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 2097188;
	
	  ;% rtP.Constant6_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 2097189;
	
	  ;% rtP.Constant7_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 2097190;
	
	  ;% rtP.Constant_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 2097191;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.Zero_Value
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
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
      
	  ;% rtB.cefaqd4mmo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.h1hlsij0yt
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 65536;
	
	  ;% rtB.pmm03rrn0a
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131072;
	
	  ;% rtB.n1rh2tbdzh
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196608;
	
	  ;% rtB.dassz0pmrw
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262144;
	
	  ;% rtB.muuf4tphh2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 327680;
	
	  ;% rtB.klpdnkjsg2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393216;
	
	  ;% rtB.li4o0hildc
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 458752;
	
	  ;% rtB.ohekoapafv
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524288;
	
	  ;% rtB.lyv0zmdkxz
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 589824;
	
	  ;% rtB.dkwoqzqhxy
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655360;
	
	  ;% rtB.cgd0ee2uwi
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 720896;
	
	  ;% rtB.dlorqfbkxe
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786432;
	
	  ;% rtB.mdsfzgmvpb
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 851968;
	
	  ;% rtB.djm2pikxpj
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917504;
	
	  ;% rtB.e3p0mcsrbm
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 983040;
	
	  ;% rtB.op44in5v5j
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048576;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtB.jvksohy2jj
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kjtqep3s42
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.hhlvjssrul
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.eehjfds1zp
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.nbczllmynw
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.klitm0zcu3
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.nfioqm3gmv
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 6;
	
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
      
	  ;% rtDW.oxtg0nrans.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.p2ll3502se.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.i1idkhyivn.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.itc1nn5uma.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.cbllkrk5ok.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.htr1izgrwz.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.cf23xd2iev.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.bwdrbajjum.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ietuenx3i2.TimePtr
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.alxkrbalx0.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.jnpvkmxlxy.TimePtr
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.mqbhms4nl1.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.dyhvwc5vja.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.pdy5jueqrh.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.c1h3ctgqpj.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.etnkf1pdot.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.m0ersehk4c.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.hin42u5r1x.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.hramb0ocol.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.nzc5cbptd2.LoggedData
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.db5tg4f432.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.nvzvmncc32.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.ey2q1a0juo.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.dcjvfvqrrm.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.pmwyrvpwuv.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.ef2tbr3zkc.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.h4kgvkhif3.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.duoloaq3l3.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.dcmmg3x1y2.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.lgjsik0a1v.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.haw1uambsf.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.ppq01k01ro.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.ocx3rwgp5n.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% rtDW.anbyqeqhho
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jsd1ksfewi
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ps2znodovw.PrevIndex
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ngfspxrd23
	  section.data(4).logicalSrcIdx = 36;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.f1vm3nfado
	  section.data(5).logicalSrcIdx = 37;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.jiac0cbguk.PrevIndex
	  section.data(6).logicalSrcIdx = 38;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.avecdpuxre
	  section.data(7).logicalSrcIdx = 39;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ioqyqoalne
	  section.data(8).logicalSrcIdx = 40;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.l5xsozc2ul.PrevIndex
	  section.data(9).logicalSrcIdx = 41;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.mnzge41qdh
	  section.data(10).logicalSrcIdx = 42;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.c1whuykri1
	  section.data(11).logicalSrcIdx = 43;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.dhnbacq5om.PrevIndex
	  section.data(12).logicalSrcIdx = 44;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.eosjlsccjz
	  section.data(13).logicalSrcIdx = 45;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.j3mhxlgarq
	  section.data(14).logicalSrcIdx = 46;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.fjx3qw2pbg.PrevIndex
	  section.data(15).logicalSrcIdx = 47;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.bkl45ijtav
	  section.data(16).logicalSrcIdx = 48;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.m2qlk4ptp3
	  section.data(17).logicalSrcIdx = 49;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.lxuj2cx0tl.PrevIndex
	  section.data(18).logicalSrcIdx = 50;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.dzb4xa21pv
	  section.data(19).logicalSrcIdx = 51;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.jvew4rz0fv
	  section.data(20).logicalSrcIdx = 52;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.nkdrkcqhkl.PrevIndex
	  section.data(21).logicalSrcIdx = 53;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.lbivdgyqyw
	  section.data(22).logicalSrcIdx = 54;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.c1ekirrnbf
	  section.data(23).logicalSrcIdx = 55;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.h23jwch0yf.PrevIndex
	  section.data(24).logicalSrcIdx = 56;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.m41ys0hbb2
	  section.data(25).logicalSrcIdx = 57;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.eltzdzm2xb
	  section.data(26).logicalSrcIdx = 58;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.j3ak4rycm4.PrevIndex
	  section.data(27).logicalSrcIdx = 59;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.ck0rx0mnxl
	  section.data(28).logicalSrcIdx = 60;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.pkxitby4f3
	  section.data(29).logicalSrcIdx = 61;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.cu2ifxkm3s.PrevIndex
	  section.data(30).logicalSrcIdx = 62;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.codeguntwv
	  section.data(31).logicalSrcIdx = 63;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.joxwee1hat
	  section.data(32).logicalSrcIdx = 64;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.mxawas1cca.PrevIndex
	  section.data(33).logicalSrcIdx = 65;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.nf5kfotlzq
	  section.data(34).logicalSrcIdx = 66;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.nadsikh0yy
	  section.data(35).logicalSrcIdx = 67;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.lthjpvw2ja.PrevIndex
	  section.data(36).logicalSrcIdx = 68;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.fop2prr0bf
	  section.data(37).logicalSrcIdx = 69;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.dozhfgcamo
	  section.data(38).logicalSrcIdx = 70;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.ig2yyen4dq.PrevIndex
	  section.data(39).logicalSrcIdx = 71;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.izqj2pp23z
	  section.data(40).logicalSrcIdx = 72;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.nlkb1imv5x
	  section.data(41).logicalSrcIdx = 73;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.ktgnhdwjii.PrevIndex
	  section.data(42).logicalSrcIdx = 74;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.ezsa5od0uf
	  section.data(43).logicalSrcIdx = 75;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.ip304rfffi
	  section.data(44).logicalSrcIdx = 76;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.fqrsvzknvr.PrevIndex
	  section.data(45).logicalSrcIdx = 77;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.akrsefwjhe
	  section.data(46).logicalSrcIdx = 78;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.kf2ahulxfb
	  section.data(47).logicalSrcIdx = 79;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.be1ve5xyyq.PrevIndex
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


  targMap.checksum0 = 634033103;
  targMap.checksum1 = 1460873130;
  targMap.checksum2 = 2732228506;
  targMap.checksum3 = 146304284;

