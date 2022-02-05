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
      section.nData     = 43;
      section.data(43)  = dumData; %prealloc
      
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
	
	  ;% rtP.FromWorkspace6_Time0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655370;
	
	  ;% rtP.FromWorkspace6_Data0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 655372;
	
	  ;% rtP.FromWorkspace11_Time0
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786444;
	
	  ;% rtP.FromWorkspace11_Data0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 786446;
	
	  ;% rtP.FromWorkspace4_Time0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917518;
	
	  ;% rtP.FromWorkspace4_Data0
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 917520;
	
	  ;% rtP.FromWorkspace12_Time0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048592;
	
	  ;% rtP.FromWorkspace12_Data0
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 1048594;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 1179666;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 1179668;
	
	  ;% rtP.FromWorkspace13_Time0
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 1310740;
	
	  ;% rtP.FromWorkspace13_Data0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 1310742;
	
	  ;% rtP.FromWorkspace14_Time0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 1441814;
	
	  ;% rtP.FromWorkspace14_Data0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 1441816;
	
	  ;% rtP.FromWorkspace15_Time0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 1572888;
	
	  ;% rtP.FromWorkspace15_Data0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 1572890;
	
	  ;% rtP.FromWorkspace3_Time0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 1703962;
	
	  ;% rtP.FromWorkspace3_Data0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 1703964;
	
	  ;% rtP.FromWorkspace5_Time0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 1835036;
	
	  ;% rtP.FromWorkspace5_Data0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 1835038;
	
	  ;% rtP.FromWorkspace10_Time0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 1966110;
	
	  ;% rtP.FromWorkspace10_Data0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 1966112;
	
	  ;% rtP.Constant1_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 2097184;
	
	  ;% rtP.Constant2_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 2097185;
	
	  ;% rtP.Constant_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 2097186;
	
	  ;% rtP.Constant3_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 2097187;
	
	  ;% rtP.Constant8_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 2097188;
	
	  ;% rtP.Constant4_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 2097189;
	
	  ;% rtP.Constant9_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 2097190;
	
	  ;% rtP.Constant10_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 2097191;
	
	  ;% rtP.Constant5_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 2097192;
	
	  ;% rtP.Constant6_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 2097193;
	
	  ;% rtP.Constant7_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 2097194;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.Zero_Value
	  section.data(1).logicalSrcIdx = 43;
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
      
	  ;% rtB.ki3jm1b3dp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ac4gbhjse5
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 65536;
	
	  ;% rtB.es3h3fnkv0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 131072;
	
	  ;% rtB.chtfyle541
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 196608;
	
	  ;% rtB.obvrbahkgr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 262144;
	
	  ;% rtB.ftywdhfrnq
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 327680;
	
	  ;% rtB.ay0uhgxppx
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 393216;
	
	  ;% rtB.n3ghdaztt5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 458752;
	
	  ;% rtB.dqwbh3hq04
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 524288;
	
	  ;% rtB.oaom5gl2vj
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 589824;
	
	  ;% rtB.j4pryny4vl
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 655360;
	
	  ;% rtB.gsie3ma3c1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 720896;
	
	  ;% rtB.j001cgyiv5
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 786432;
	
	  ;% rtB.mtneenlfu1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 851968;
	
	  ;% rtB.kkmp2q1u0b
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 917504;
	
	  ;% rtB.b3nhabfcsy
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 983040;
	
	  ;% rtB.d0mmh1dnhq
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 1048576;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtB.lg14uka0xz
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.pwhdfwala2
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.ixybpokhb1
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.o1pbhxvcvg
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ckztss5ead
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.owa1qwu54g
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.luaye3cspa
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.ffzy44b5sp
	  section.data(8).logicalSrcIdx = 24;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.g0cwpbr0y0
	  section.data(9).logicalSrcIdx = 25;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.ekqxrotgj0
	  section.data(10).logicalSrcIdx = 26;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.nep0lfrure
	  section.data(11).logicalSrcIdx = 27;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.dkkmrdnqfw
	  section.data(12).logicalSrcIdx = 28;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.jitrtk3yht
	  section.data(13).logicalSrcIdx = 29;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.cs3n5rrynv
	  section.data(14).logicalSrcIdx = 30;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.gdqazxysni
	  section.data(15).logicalSrcIdx = 31;
	  section.data(15).dtTransOffset = 14;
	
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
      
	  ;% rtDW.nlr254sz25.TimePtr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pr3fwnlpgk.TimePtr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.dwoanvig1x.AQHandles
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.esvnbrk15f.TimePtr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.oznckgphen.TimePtr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.d55t05a2xe.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jicbwiyez5.TimePtr
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ixj24l1myd.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.d3umpea34x.TimePtr
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.jkteypol3e.TimePtr
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.gkjuub03ra.TimePtr
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.jksobmoalm.TimePtr
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.lj113kpzv4.TimePtr
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.om2gmm2jag.TimePtr
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.h41vgtc3ky.TimePtr
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.ln2xpz4hzg.TimePtr
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.bcmr1x5pix.TimePtr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.dhecasfssm.TimePtr
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.jzrj3tcydh.TimePtr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.j1tkhfev4u.LoggedData
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.bcpod2sutp.LoggedData
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.kna32tlcxt.LoggedData
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.n5jknqfd2r.LoggedData
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.mtoixlbpko.LoggedData
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.ac3vq3pg2w.LoggedData
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.isl4udk1sa.LoggedData
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.jxh30m4egg.LoggedData
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.ocxxyzkydi.LoggedData
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.ekuua0muto.LoggedData
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.nlqhjgcw0m.LoggedData
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.gvtkugchrm.LoggedData
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.mt0pbtvv13.LoggedData
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.hbyfvpd5vj.LoggedData
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% rtDW.i1kdxf121h
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.eoc3eeucvi
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.mzcomateoh.PrevIndex
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fda3cbb3nw
	  section.data(4).logicalSrcIdx = 36;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.efj1gvv2gr
	  section.data(5).logicalSrcIdx = 37;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.hhucah42fn.PrevIndex
	  section.data(6).logicalSrcIdx = 38;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.nxwnfuyem0
	  section.data(7).logicalSrcIdx = 39;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.krxfewyasy
	  section.data(8).logicalSrcIdx = 40;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.nzc1kt2qsq.PrevIndex
	  section.data(9).logicalSrcIdx = 41;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.o1nablqqad
	  section.data(10).logicalSrcIdx = 42;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.gphw1qtffc
	  section.data(11).logicalSrcIdx = 43;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.bt2kjhduml.PrevIndex
	  section.data(12).logicalSrcIdx = 44;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.kak3h1i1oa
	  section.data(13).logicalSrcIdx = 45;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.ppj5e0aivp
	  section.data(14).logicalSrcIdx = 46;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.dqs2ms3eur.PrevIndex
	  section.data(15).logicalSrcIdx = 47;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.hs2zfz2nlh
	  section.data(16).logicalSrcIdx = 48;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.cefzg3zmcq
	  section.data(17).logicalSrcIdx = 49;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.d2mqo0d2sp.PrevIndex
	  section.data(18).logicalSrcIdx = 50;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.ft0xburawt
	  section.data(19).logicalSrcIdx = 51;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.mp21qtcsjx
	  section.data(20).logicalSrcIdx = 52;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.nzt5mfnv3k.PrevIndex
	  section.data(21).logicalSrcIdx = 53;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.nwykeulaqx
	  section.data(22).logicalSrcIdx = 54;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.e22rmz1lwx
	  section.data(23).logicalSrcIdx = 55;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.g5hpdcltcn.PrevIndex
	  section.data(24).logicalSrcIdx = 56;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.bqxw0jmr2z
	  section.data(25).logicalSrcIdx = 57;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.bhuyepyku4
	  section.data(26).logicalSrcIdx = 58;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.jqv01tm0px.PrevIndex
	  section.data(27).logicalSrcIdx = 59;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.dpqfjpkijy
	  section.data(28).logicalSrcIdx = 60;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.jetevoghi4
	  section.data(29).logicalSrcIdx = 61;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.ha1vep0n15.PrevIndex
	  section.data(30).logicalSrcIdx = 62;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.hye5igtl1q
	  section.data(31).logicalSrcIdx = 63;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.kfdh0vb0dl
	  section.data(32).logicalSrcIdx = 64;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.b0dn2sp3hb.PrevIndex
	  section.data(33).logicalSrcIdx = 65;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.bdrhcv20eb
	  section.data(34).logicalSrcIdx = 66;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.lk4newzhbn
	  section.data(35).logicalSrcIdx = 67;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.miqffbz3nv.PrevIndex
	  section.data(36).logicalSrcIdx = 68;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.dbkpycgaes
	  section.data(37).logicalSrcIdx = 69;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.jgbhsrli5q
	  section.data(38).logicalSrcIdx = 70;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.jq3gjo2hvz.PrevIndex
	  section.data(39).logicalSrcIdx = 71;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.ko4owp1rtb
	  section.data(40).logicalSrcIdx = 72;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.jhztvkm5k1
	  section.data(41).logicalSrcIdx = 73;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtDW.j4s4fpsto2.PrevIndex
	  section.data(42).logicalSrcIdx = 74;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtDW.ojn5cdcyud
	  section.data(43).logicalSrcIdx = 75;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtDW.bz3dqqo1kx
	  section.data(44).logicalSrcIdx = 76;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtDW.jzfwrfb3lq.PrevIndex
	  section.data(45).logicalSrcIdx = 77;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtDW.ar3uovtx04
	  section.data(46).logicalSrcIdx = 78;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtDW.hcnnk1udor
	  section.data(47).logicalSrcIdx = 79;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtDW.fob3jepxrd.PrevIndex
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


  targMap.checksum0 = 725902208;
  targMap.checksum1 = 2916200256;
  targMap.checksum2 = 2961943389;
  targMap.checksum3 = 4058834483;

