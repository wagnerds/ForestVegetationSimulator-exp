C WARNING! The codes were created by NBEL Tester program. Please do NOT modify
C Last modified on 9/17/2019
       TYPE REFINFO
         CHARACTER*3 ABRV
         CHARACTER*40 AUTH
       END TYPE REFINFO
       TYPE(REFINFO) BEQREF(202)
       INTEGER I6, REFCNT /202/
       DATA (BEQREF(I6),I6=1,202) /
C      REFINFO(ABRV, AUTH)
     + REFINFO('BAL','Baldwin 1989'),
     + REFINFO('BAR','Barclay et al. 1986'),
     + REFINFO('BAN','Barney et al. 1978'),
     + REFINFO('BAS','Baskerville 1965'),
     + REFINFO('BAK','Baskerville 1966'),
     + REFINFO('BIC','Bickelhaupt et al. 1973'),
     + REFINFO('BIN','Binkley 1983'),
     + REFINFO('BIK','Binkley et al. 1984'),
     + REFINFO('BOC','Bockheim and Lee 1984'),
     + REFINFO('BOE','Boerner and Kost 1986'),
     + REFINFO('BOR','Bormann 1990'),
     + REFINFO('BRE','Brenneman et al. 1978'),
     + REFINFO('BRI','Bridge 1979'),
     + REFINFO('BRG','Briggs et al. 1989'),
     + REFINFO('BRN','Brown 1978'),
     + REFINFO('BUS','Busing et al. 1993'),
     + REFINFO('CAM','Campbell et al. 1985'),
     + REFINFO('CAP','Carpenter 1983'),
     + REFINFO('CAT','Carter and White 1971'),
     + REFINFO('CHA','Chapman and Gower 1991'),
     + REFINFO('CHJ','Chojnacky 1984'),
     + REFINFO('CHM','Chojnacky and Moisen 1993'),
     + REFINFO('CLK','Clark et al. 1985'),
     + REFINFO('CLA','Clark et al. 1986a'),
     + REFINFO('CLB','Clark et al. 1986b'),
     + REFINFO('CLS','Clark and Schroeder 1986'),
     + REFINFO('CLT','Clary and Tiedemann 1987'),
     + REFINFO('CLE','Clebsch 1971'),
     + REFINFO('COC','Cochran et al. 1984'),
     + REFINFO('CRO','Crow 1971'),
     + REFINFO('CRW','Crow 1976'),
     + REFINFO('COW','Crow 1983'),
     + REFINFO('DUD','Dudley and Fownes 1992'),
     + REFINFO('DUN','Dunlap and Shipman 1967'),
     + REFINFO('ESP','Espinosa-Bancalari and Perry 1987'),
     + REFINFO('FAS','Fassnacht 1996'),
     + REFINFO('FEL','Felker et al. 1982'),
     + REFINFO('FER','Feller 1992'),
     + REFINFO('FRE','Freedman 1984'),
     + REFINFO('FRD','Freedman et al. 1982'),
     + REFINFO('GAR','Gary 1976'),
     + REFINFO('GHO','Gholz 1980'),
     + REFINFO('GHL','Gholz et al. 1991'),
     + REFINFO('GHZ','Gholz et al. 1979'),
     + REFINFO('GOL','Goldsmith and Hocker 1978'),
     + REFINFO('GOW','Gower et al. 1987'),
     + REFINFO('GOE','Gower et al. 1993a'),
     + REFINFO('GOR','Gower et al. 1993b'),
     + REFINFO('GWR','Gower et al. 1992'),
     + REFINFO('GRE','Green and Grigal 1978'),
     + REFINFO('GRI','Grier et al. 1992'),
     + REFINFO('GRR','Grier et al. 1984'),
     + REFINFO('GRL','Grier and Logan 1977'),
     + REFINFO('GRK','Grigal and Kernik 1978'),
     + REFINFO('HAR','Harding and Grigal 1985'),
     + REFINFO('HAM','Harmon 1994'),
     + REFINFO('HAT','Harrington et al. 1984'),
     + REFINFO('HRS','Harris et al. 1973'),
     + REFINFO('HEG','Hegyi 1972'),
     + REFINFO('HEL','Helgerson et al. 1988'),
     + REFINFO('HOC','Hocker and Early 1983'),
     + REFINFO('HON','Honer 1971'),
     + REFINFO('IVA','Ivask et al. 1988'),
     + REFINFO('JOH','Johnston and Bartos 1977'),
     + REFINFO('JOK','Jokela et al. 1981'),
     + REFINFO('JOE','Jokela et al. 1986'),
     + REFINFO('KEA','Ker 1980a'),
     + REFINFO('KEB','Ker 1980b'),
     + REFINFO('KER','Ker 1984'),
     + REFINFO('KEV','Ker and van Raalte 1981'),
     + REFINFO('KIM','Kimmins 1973'),
     + REFINFO('KIN','Kinerson and Bartholomew 1977'),
     + REFINFO('KIS','King and Schnell 1972'),
     + REFINFO('KLO','Klopsch 1994'),
     + REFINFO('KOE','Koerper 1994'),
     + REFINFO('KOR','Koerper and Richardson 1980'),
     + REFINFO('KRU','Krumlik 1974'),
     + REFINFO('KRK','Krumlik and Kimmins 1973'),
     + REFINFO('LAN','Landis and Mogren 1975'),
     + REFINFO('LIE','Lieffers and Campbell 1984'),
     + REFINFO('LOO','Loomis et al. 1966'),
     + REFINFO('MAC','Maclean and Wein 1976'),
     + REFINFO('MAR','Marshall and Wang 1995'),
     + REFINFO('MAT','Martin et al. 1998'),
     + REFINFO('MCC','McCain 1994'),
     + REFINFO('MEA','Means et al. 1994'),
     + REFINFO('MIL','Miller et al. 1981'),
     + REFINFO('MON','Monk et al. 1970'),
     + REFINFO('MOT','Monteith 1979'),
     + REFINFO('MOO','Moore and Verspoor 1973'),
     + REFINFO('MOR','Morrison 1990'),
     + REFINFO('NAI','Naidu et al. 1998'),
     + REFINFO('NEL','Nelson and Switzer 1975'),
     + REFINFO('OUE','Ouellet 1983'),
     + REFINFO('PAR','Parker and Schneider 1975'),
     + REFINFO('PAS','Pastor et al. 1984'),
     + REFINFO('PAT','Pastor and Bockheim 1981'),
     + REFINFO('PEA','Pearson et al. 1984'),
     + REFINFO('PER','Perala and Alban 1994'),
     + REFINFO('PET','Peterson et al. 1970'),
     + REFINFO('PHI','Phillips 1981'),
     + REFINFO('POL','Pollard 1972'),
     + REFINFO('RAL','Ralston 1973'),
     + REFINFO('RAP','Ralston and Prince 1965'),
     + REFINFO('RAM','Ramseur and Kelly 1981'),
     + REFINFO('REI','Reid et al. 1974'),
     + REFINFO('REN','Reiners 1972'),
     + REFINFO('REA','Rencz and Auclair 1980'),
     + REFINFO('REY','Reynolds et al. 1978'),
     + REFINFO('RIB','Ribe 1973'),
     + REFINFO('ROG','Rogerson 1964'),
     + REFINFO('ROL','Rolfe et al. 1978'),
     + REFINFO('RUA','Ruark and Bockheim 1988'),
     + REFINFO('RUR','Ruark et al. 1987'),
     + REFINFO('SAC','Sachs 1984'),
     + REFINFO('SAN','Santantonio et al. 1977'),
     + REFINFO('SCH','Schmitt and Grigal 1981'),
     + REFINFO('SCN','Schnell 1976'),
     + REFINFO('SCE','Schnell 1978'),
     + REFINFO('SCR','Schroeder et al. 1997'),
     + REFINFO('SCU','Schubert et al. 1988'),
     + REFINFO('SIC','Siccama et al. 1994'),
     + REFINFO('SIN','Singh 1984'),
     + REFINFO('SIM','Singh and Misra 1979'),
     + REFINFO('SNE','Snell and Little 1983'),
     + REFINFO('SNM','Snell and Max 1985'),
     + REFINFO('SOL','Sollins and Anderson 1971'),
     + REFINFO('SOI','Sollins et al. 1973'),
     + REFINFO('STC','St. Clair 1993'),
     + REFINFO('STA','Standish et al. 1985'),
     + REFINFO('STN','Stanek and State 1978'),
     + REFINFO('SWA','Swank and Schreuder 1974'),
     + REFINFO('TEL','Telfer 1969'),
     + REFINFO('TER','Ter-Mikaelian and Korzukhin 1997'),
     + REFINFO('THI','Thies and Cunningham 1996'),
     + REFINFO('TRI','Tritton and Hornbeck 1982'),
     + REFINFO('TUS','Tuskan and Rensema 1992'),
     + REFINFO('VAL','Van Lear et al. 1984'),
     + REFINFO('WAD','Wade 1969'),
     + REFINFO('WAN','Wang et al. 1995'),
     + REFINFO('WAG','Wang et al. 1996'),
     + REFINFO('WAR','Waring et al. 1978'),
     + REFINFO('WAT','Wartluft 1977'),
     + REFINFO('WEE','Weetman and Harland 1964'),
     + REFINFO('WES','Westman 1987'),
     + REFINFO('WHI','Whittaker et al. 1974'),
     + REFINFO('WHN','Whittaker and Niering 1975'),
     + REFINFO('WHW','Whittaker and Woodwell 1968'),
     + REFINFO('WIA','Wiant et al. 1977'),
     + REFINFO('WIL','Williams and McClenahan 1984'),
     + REFINFO('YOU','Young et al. 1980'),
     + REFINFO('JEN','Jenkins et al 2003'),
     + REFINFO('FNC','FCS_BIOMASS_FIA_NC'),
     + REFINFO('FNE','FCS_BIOMASS_FIA_NE'),
     + REFINFO('FRM','FCS_BIOMASS_FIA_RM'),
     + REFINFO('FSE','FCS_BIOMASS_FIA_SE'),
     + REFINFO('FNW','FCS_BIOMASS_FIA_NW'),
     + REFINFO('SHA','Shaw 1979'),
     + REFINFO('HAN','Harmon (year?)'),
     + REFINFO('PIL','Pillsbury and Kirkely 1984'),
     + REFINFO('HEA','Heath et al 2009'),
     + REFINFO('YON','Young et al. 1964'),
     + REFINFO('HIT','Hitchcock 1978'),
     + REFINFO('PHL','Phillips 1977'),
     + REFINFO('WIN','Wiant et al. 1979'),
     + REFINFO('MYE','Myers et al 1980'),
     + REFINFO('SCL','Schlaegel 1975'),
     + REFINFO('CLR','Clark and Schroeder 1977'),
     + REFINFO('CLL','Clark et al 1980a'),
     + REFINFO('CLN','Clark et al 1980b'),
     + REFINFO('CZA','Czapowskyj et al 1985'),
     + REFINFO('AMA','Amateis et al 1992'),
     + REFINFO('YAR','Yarie et al 2007'),
     + REFINFO('BAD','Baldwin et al 1997'),
     + REFINFO('KAS','Kasile 1984'),
     + REFINFO('ELI','Elliot et al 2002'),
     + REFINFO('REE','Reed et al 1995'),
     + REFINFO('SAT','Santee and Monk 1981'),
     + REFINFO('SMI','Smith and Wood 2006'),
     + REFINFO('TIN','Tinker et al 2010'),
     + REFINFO('SCA','Schlaegel 1975'),
     + REFINFO('CRE','Crow and Erdmann 1983'),
     + REFINFO('ALB','Alban and Laidly 1982'),
     + REFINFO('ALE','Alemdag 1982'),
     + REFINFO('WAA','Wang 2012a'),
     + REFINFO('WAB','Wang 2012b'),
     + REFINFO('CLC','Clark and Saucier 1990'),
     + REFINFO('OSW','Oswald et al 2010'),
     + REFINFO('CHO','Chojnacky et al 2014'),
     + REFINFO('AFF','Affleck 2019'),
     + REFINFO('ALM','Alemdag 1984'),
     + REFINFO('MAN','Manning etal 1984'),
     + REFINFO('WEA','Weaver and Gillespie 1992'),
     + REFINFO('SCT','Scatena, F. N. etal 1993'),
     + REFINFO('BR6','Brandeis, T. J. etal 2006'),
     + REFINFO('FRA','Frangi and Lugo 1985'),
     + REFINFO('CIN','Cintron 1984'),
     + REFINFO('FRO','Fromard, F. etal. 1998.'),
     + REFINFO('ASN','Asner, G.P. et al 2011'),
     + REFINFO('CAB','Chave J, Andalo C, Brown S, et al. 2005'),
     + REFINFO('CHV','Chave, J. et al. 2014'),
     + REFINFO('FPI','NIMS_BIOMASS_PACIFIC_ISLANDS.PKB')/