      SUBROUTINE EXDBSQLITE
      IMPLICIT NONE
C----------
C BASE $Id: exdbs.f 2750 2019-08-15 01:23:04Z mshettles521 $
C----------
C  EXTERNAL REFERENCES FOR THE Q-FAMILY DATA BASE CONNECTION CODE.
C----------
      REAL TPA1,BA1,CFVOL,BFVOL,STDIST1,STDIST2,STDIST3,STDIST4
      REAL STDIST5,STDIST6,STDIST7,STDIST8,STDIST9
      REAL INGROW,TPAIN,TPASUM,HTAVE,TPATOT,PRBSTK,SUMTPA,SUMPCT,
     >     PASPCT,BESTTPA,BESTPCT,AVEHT,PASTPA
      INTEGER BURNYEAR, NUMPTS,M,NOYEAR,MECHYEAR,PCTBURN,WTHTAVE,TOT,
     >     NTALLY,IYEAR,PCTNONE,PCTMECH,TBL
      CHARACTER*47 HABTYP
      CHARACTER*7 SERIES
      CHARACTER*2 SPECCD
      REAL RDANUW
      INTEGER IDANUW
      CHARACTER*1 CDANUW
      CHARACTER*16 LABEL
C----------
C  ENTRY DBSSTATS
C----------      
      ENTRY  DBSSTATS(SPECCD,TPA1,BA1,CFVOL,BFVOL,STDIST1,
     & STDIST2,STDIST3,STDIST4,STDIST5,STDIST6,STDIST7,STDIST8,
     & STDIST9,LABEL,TBL,IYEAR)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        CDANUW = SPECCD(1:1)
        RDANUW = TPA1
        RDANUW = BA1
        RDANUW = CFVOL
        RDANUW = BFVOL
        RDANUW = STDIST1
        RDANUW = STDIST2
        RDANUW = STDIST3
        RDANUW = STDIST4
        RDANUW = STDIST5
        RDANUW = STDIST6
        RDANUW = STDIST7
        RDANUW = STDIST8
        RDANUW = STDIST9
        CDANUW = LABEL(1:1)
        IDANUW = TBL
        IDANUW = IYEAR        
      RETURN 
C----------
C  ENTRY DBSSPRT
C----------      
      ENTRY  DBSSPRT(SPECCD,TPASUM,HTAVE,TPATOT,
     &  WTHTAVE,TOT,IYEAR)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        CDANUW = SPECCD(1:1)
        RDANUW = TPASUM
        RDANUW = HTAVE
        RDANUW = TPATOT
        RDANUW = WTHTAVE
        IDANUW = TOT
        IDANUW = IYEAR
      RETURN 
C----------
C  ENTRY DBSSITEPREP
C----------      
      ENTRY  DBSSITEPREP(NOYEAR,MECHYEAR,BURNYEAR,PCTNONE,
     & PCTMECH,PCTBURN)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        IDANUW = NOYEAR
        IDANUW = MECHYEAR
        IDANUW = BURNYEAR
        IDANUW = PCTNONE
        IDANUW = PCTMECH
        IDANUW = PCTBURN
      RETURN 
C----------
C  ENTRY DBSPLOTHAB
C----------      
      ENTRY  DBSPLOTHAB(NUMPTS,HABTYP,SERIES,M)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        IDANUW = NUMPTS
        CDANUW = HABTYP(1:1)
        CDANUW = SERIES(1:1)
        IDANUW = M
      RETURN 
C----------
C  ENTRY DBSTALLY
C----------      
      ENTRY  DBSTALLY(PRBSTK,NTALLY,SPECCD,SUMTPA,SUMPCT,BESTTPA,
     & BESTPCT,AVEHT,PASTPA,PASPCT,IYEAR)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        RDANUW = PRBSTK
        IDANUW = NTALLY
        CDANUW = SPECCD(1:1)
        RDANUW = SUMTPA
        RDANUW = SUMPCT
        RDANUW = BESTTPA
        RDANUW = BESTPCT
        RDANUW = AVEHT
        RDANUW = PASTPA
        RDANUW = PASPCT
        IDANUW = IYEAR
      RETURN 
C----------
C  ENTRY DBSINGROW
C----------      
      ENTRY  DBSINGROW(IYEAR,INGROW,SPECCD,TPAIN)
C----------
C  DUMMY ARGUMENT NOT USED WARNING SUPPRESSION SECTION
C----------
        IDANUW = IYEAR
        RDANUW = INGROW
        CDANUW = SPECCD(1:1)
        RDANUW = TPAIN
      RETURN 
C
      END
