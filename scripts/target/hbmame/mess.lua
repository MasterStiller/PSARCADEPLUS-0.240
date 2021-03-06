-- license:BSD-3-Clause
-- copyright-holders:MAMEdev Team

---------------------------------------------------------------------------
--Disable bus cores
--BUSES["NEOGEO_CTRL"] = true
--BUSES["NEOGEO"] = true
---------------------------------------------------------------------------
---------------------------------------------------------------------------
--
--   mess.lua
--
--   MESS target makefile
--
---------------------------------------------------------------------------

--------------------------------------------------
-- specify available CPU cores
--------------------------------------------------

CPUS["Z80"] = true
--CPUS["KC80"] = true
CPUS["Z180"] = true
CPUS["I8085"] = true
CPUS["I8089"] = true
CPUS["M6502"] = true
CPUS["ST2XXX"] = true
CPUS["XAVIX"] = true
CPUS["XAVIX2000"] = true
CPUS["H6280"] = true
CPUS["I86"] = true
CPUS["I386"] = true
CPUS["NEC"] = true
CPUS["V30MZ"] = true
CPUS["V60"] = true
CPUS["MCS48"] = true
CPUS["MCS51"] = true
CPUS["MCS96"] = true
CPUS["M6800"] = true
CPUS["M6805"] = true
CPUS["HD6309"] = true
CPUS["M6809"] = true
CPUS["KONAMI"] = true
CPUS["M680X0"] = true
CPUS["T11"] = true
CPUS["S2650"] = true
CPUS["TMS340X0"] = true
CPUS["TMS9900"] = true
CPUS["TMS9995"] = true
CPUS["TMS9900L"] = true
CPUS["Z8000"] = true
CPUS["Z8001"] = true
CPUS["TMS32010"] = true
CPUS["TMS32025"] = true
CPUS["TMS32031"] = true
CPUS["TMS32051"] = true
CPUS["TMS32082"] = true
CPUS["TMS57002"] = true
CPUS["CCPU"] = true
CPUS["ADSP21XX"] = true
CPUS["ASAP"] = true
CPUS["AM29000"] = true
CPUS["UPD7810"] = true
CPUS["ARM"] = true
CPUS["ARM7"] = true
CPUS["JAGUAR"] = true
CPUS["CUBEQCPU"] = true
CPUS["ESRIP"] = true
CPUS["MIPS1"] = true
CPUS["MIPS3"] = true
CPUS["PSX"] = true
CPUS["SH"] = true
CPUS["DSP16"] = true
CPUS["DSP32C"] = true
CPUS["PIC16C5X"] = true
CPUS["PIC16C62X"] = true
CPUS["PIC17"] = true
CPUS["G65816"] = true
CPUS["SPC700"] = true
CPUS["E1"] = true
CPUS["I860"] = true
CPUS["I960"] = true
CPUS["H16"] = true
CPUS["H8"] = true
CPUS["H8500"] = true
CPUS["V810"] = true
CPUS["M37710"] = true
CPUS["POWERPC"] = true
CPUS["SE3208"] = true
CPUS["MC68HC11"] = true
CPUS["ADSP21062"] = true
CPUS["DSP56156"] = true
CPUS["RSP"] = true
CPUS["COP400"] = true
CPUS["TLCS90"] = true
CPUS["TLCS900"] = true
CPUS["MB88XX"] = true
CPUS["MB86233"] = true
CPUS["MB86235"] = true
CPUS["SSP1601"] = true
CPUS["APEXC"] = true
CPUS["CP1610"] = true
CPUS["F8"] = true
CPUS["LH5801"] = true
CPUS["PATINHOFEIO"] = true
CPUS["PDP1"] = true
CPUS["PDP8"] = true
CPUS["TX0"] = true
CPUS["SATURN"] = true
CPUS["SC61860"] = true
CPUS["LR35902"] = true
CPUS["TMS7000"] = true
CPUS["SM8500"] = true
CPUS["MINX"] = true
CPUS["SSEM"] = true
CPUS["DIABLO"] = true
CPUS["AVR8"] = true
CPUS["TMS1000"] = true
CPUS["MCS40"] = true
CPUS["SUPERFX"] = true
CPUS["Z8"] = true
CPUS["I8008"] = true
CPUS["SCMP"] = true
CPUS["MN1880"] = true
--CPUS["MN10200"] = true
CPUS["COSMAC"] = true
CPUS["UNSP"] = true
CPUS["HCD62121"] = true
CPUS["PPS4"] = true
CPUS["PPS41"] = true
CPUS["UPD7725"] = true
CPUS["HD61700"] = true
CPUS["LC8670"] = true
CPUS["SCORE"] = true
CPUS["ES5510"] = true
CPUS["SCUDSP"] = true
CPUS["IE15"] = true
CPUS["8X300"] = true
CPUS["ALTO2"] = true
--CPUS["W65816"] = true
CPUS["ARC"] = true
CPUS["ARCOMPACT"] = true
CPUS["AMIS2000"] = true
CPUS["UCOM4"] = true
CPUS["HMCS40"] = true
CPUS["E0C6200"] = true
CPUS["MELPS4"] = true
CPUS["HPHYBRID"] = true
CPUS["SM510"] = true
CPUS["SPARC"] = true
CPUS["NANOPROCESSOR"] = true
CPUS["CLIPPER"] = true
CPUS["CAPRICORN"] = true
CPUS["ALPHA"] = true
CPUS["NS32000"] = true
--CPUS["DSPP"] = true
CPUS["HPC"] = true
CPUS["MEG"] = true
CPUS["DSPV"] = true
CPUS["RII"] = true
CPUS["BCP"] = true
CPUS["F2MC16"] = true
CPUS["CR16B"] = true
CPUS["FR"] = true
CPUS["DSP56000"] = true
CPUS["VT50"] = true
CPUS["VT61"] = true
CPUS["PACE"] = true
CPUS["WE32000"] = true
CPUS["RX01"] = true
CPUS["GTRON"] = true
CPUS["M88000"] = true
CPUS["XAVIX2"] = true
CPUS["UPD78K"] = true
CPUS["ROMP"] = true
CPUS["COPS1"] = true
CPUS["MK1"] = true
CPUS["M68HC16"] = true

--------------------------------------------------
-- specify available sound cores; some of these are
-- only for MAME and so aren't included
--------------------------------------------------

--SOUNDS["SAMPLES"] = true
SOUNDS["DAC"] = true
SOUNDS["DMADAC"] = true
SOUNDS["SPEAKER"] = true
SOUNDS["BEEP"] = true
SOUNDS["DISCRETE"] = true
SOUNDS["AY8910"] = true
SOUNDS["YM2154"] = true
SOUNDS["YM2151"] = true
SOUNDS["YM2414"] = true
SOUNDS["YM3806"] = true
SOUNDS["YM2203"] = true
SOUNDS["YM2413"] = true
SOUNDS["YM2608"] = true
SOUNDS["YM2610"] = true
SOUNDS["YM2610B"] = true
SOUNDS["YM2612"] = true
--SOUNDS["YM3438"] = true
SOUNDS["YM3812"] = true
SOUNDS["YM3526"] = true
SOUNDS["Y8950"] = true
SOUNDS["YMF262"] = true
SOUNDS["YMF271"] = true
SOUNDS["YMF278B"] = true
SOUNDS["YMZ280B"] = true
SOUNDS["SN76477"] = true
SOUNDS["SN76496"] = true
SOUNDS["POKEY"] = true
SOUNDS["TIA"] = true
SOUNDS["NES_APU"] = true
SOUNDS["PAULA_8364"] = true
SOUNDS["ASTROCADE"] = true
--SOUNDS["NAMCO"] = true
--SOUNDS["NAMCO_15XX"] = true
--SOUNDS["NAMCO_CUS30"] = true
--SOUNDS["NAMCO_52XX"] = true
--SOUNDS["NAMCO_63701X"] = true
SOUNDS["NAMCO_163"] = true
SOUNDS["T6W28"] = true
--SOUNDS["SNKWAVE"] = true
--SOUNDS["C140"] = true
--SOUNDS["C352"] = true
--SOUNDS["TMS36XX"] = true
--SOUNDS["TMS3615"] = true
SOUNDS["TMS5110"] = true
SOUNDS["TMS5220"] = true
SOUNDS["VLM5030"] = true
--SOUNDS["ADPCM"] = true
SOUNDS["MSM5205"] = true
--SOUNDS["MSM5232"] = true
SOUNDS["OKIM6258"] = true
SOUNDS["OKIM6295"] = true
--SOUNDS["OKIM6376"] = true
--SOUNDS["OKIM9810"] = true
SOUNDS["UPD7752"] = true
SOUNDS["UPD7759"] = true
SOUNDS["HC55516"] = true
--SOUNDS["TC8830F"] = true
--SOUNDS["K005289"] = true
--SOUNDS["K007232"] = true
SOUNDS["K051649"] = true
--SOUNDS["K053260"] = true
--SOUNDS["K054539"] = true
--SOUNDS["K056800"] = true
--SOUNDS["SEGAPCM"] = true
SOUNDS["MULTIPCM"] = true
SOUNDS["SCSP"] = true
SOUNDS["AICA"] = true
SOUNDS["RF5C68"] = true
--SOUNDS["RF5C400"] = true
--SOUNDS["CEM3394"] = true
SOUNDS["QSOUND"] = true
--SOUNDS["QS1000"] = true
SOUNDS["SAA1099"] = true
--SOUNDS["IREMGA20"] = true
SOUNDS["ES5503"] = true
SOUNDS["ES5505"] = true
SOUNDS["ES5506"] = true
--SOUNDS["BSMT2000"] = true
--SOUNDS["GAELCO_CG1V"] = true
--SOUNDS["GAELCO_GAE1"] = true
SOUNDS["HUC6230"] = true
SOUNDS["C6280"] = true
SOUNDS["SP0250"] = true
SOUNDS["SPU"] = true
SOUNDS["CDDA"] = true
--SOUNDS["ICS2115"] = true
--SOUNDS["I5000_SND"] = true
--SOUNDS["ST0016"] = true
--SOUNDS["SETAPCM"] = true
--SOUNDS["X1_010"] = true
--SOUNDS["VRENDER0"] = true
SOUNDS["VOTRAX"] = true
--SOUNDS["ES8712"] = true
SOUNDS["CDP1869"] = true
SOUNDS["S14001A"] = true
SOUNDS["WAVE"] = true
SOUNDS["SID6581"] = true
SOUNDS["SID8580"] = true
SOUNDS["SP0256"] = true
--SOUNDS["DIGITALKER"] = true
SOUNDS["CDP1863"] = true
SOUNDS["CDP1864"] = true
--SOUNDS["ZSG2"] = true
SOUNDS["MOS656X"] = true
SOUNDS["ASC"] = true
--SOUNDS["MAS3507D"] = true
SOUNDS["SOCRATES"] = true
SOUNDS["TMC0285"] = true
SOUNDS["TMS5200"] = true
SOUNDS["CD2801"] = true
SOUNDS["CD2802"] = true
--SOUNDS["M58817"] = true
SOUNDS["TMC0281"] = true
SOUNDS["TMS5100"] = true
SOUNDS["TMS5110A"] = true
SOUNDS["LMC1992"] = true
SOUNDS["AWACS"] = true
--SOUNDS["YMZ770"] = true
--SOUNDS["MPEG_AUDIO"] = true
SOUNDS["T6721A"] = true
SOUNDS["MOS7360"] = true
SOUNDS["ESQPUMP"] = true
SOUNDS["VRC6"] = true
--SOUNDS["SB0400"] = true
--SOUNDS["AC97"] = true
--SOUNDS["ES1373"] = true
SOUNDS["L7A1045"] = true
SOUNDS["AD1848"] = true
SOUNDS["UPD1771"] = true
SOUNDS["GB_SOUND"] = true
SOUNDS["PCD3311"] = true
SOUNDS["MEA8000"] = true
--SOUNDS["DAC76"] = true
--SOUNDS["MM5837"] = true
SOUNDS["DAVE"] = true
--SOUNDS["LC7535"] = true
SOUNDS["UPD934G"] = true
SOUNDS["IOPSPU"] = true
SOUNDS["SWP00"] = true
SOUNDS["SWP20"] = true
SOUNDS["SWP30"] = true
--SOUNDS["XT446"] = true
SOUNDS["S_DSP"] = true
SOUNDS["ROLANDPCM"] = true
--SOUNDS["TT5665"] = true
SOUNDS["RP2C33_SOUND"] = true
SOUNDS["UDA1344"] = true
SOUNDS["LYNX"] = true

--------------------------------------------------
-- specify available video cores
--------------------------------------------------

VIDEOS["SEGA315_5124"] = true
VIDEOS["SEGA315_5313"] = true
VIDEOS["AM8052"] = true
--VIDEOS["BUFSPRITE"] = true
VIDEOS["BT45X"] = true
VIDEOS["BT459"] = true
VIDEOS["BT47X"] = true
VIDEOS["CATSEYE"] = true
VIDEOS["CDP1861"] = true
VIDEOS["CDP1862"] = true
--VIDEOS["CESBLIT"] = true
VIDEOS["CRT9007"] = true
VIDEOS["CRT9021"] = true
VIDEOS["CRT9028"] = true
VIDEOS["CRT9212"] = true
VIDEOS["CRTC_EGA"] = true
VIDEOS["DL1416"] = true
VIDEOS["DM9368"] = true
VIDEOS["DP8350"] = true
VIDEOS["EF9340_1"] = true
VIDEOS["EF9345"] = true
VIDEOS["EF9364"] = true
VIDEOS["EF9365"] = true
--VIDEOS["EF9369"] = true
VIDEOS["FIXFREQ"] = true
VIDEOS["GF4500"] = true
--VIDEOS["EPIC12"] = true
VIDEOS["NT7534"] = true
VIDEOS["HD44102"] = true
VIDEOS["HD44352"] = true
VIDEOS["HD44780"] = true
VIDEOS["HD61202"] = true
VIDEOS["HD61603"] = true
VIDEOS["HD61830"] = true
VIDEOS["HD63484"] = true
VIDEOS["HD66421"] = true
VIDEOS["HLCD0438"] = true
VIDEOS["HLCD0488"] = true
VIDEOS["HLCD0515"] = true
VIDEOS["HLCD0538"] = true
VIDEOS["HP1LL3"] = true
VIDEOS["HUC6202"] = true
VIDEOS["HUC6260"] = true
VIDEOS["HUC6261"] = true
VIDEOS["HUC6270"] = true
VIDEOS["HUC6271"] = true
VIDEOS["HUC6272"] = true
VIDEOS["I8244"] = true
VIDEOS["I82730"] = true
VIDEOS["I8275"] = true
VIDEOS["IMS_CVC"] = true
VIDEOS["LC7582"] = true
VIDEOS["LC7985"] = true
--VIDEOS["M50458"] = true
--VIDEOS["MB90082"] = true
--VIDEOS["MB_VCU"] = true
VIDEOS["MC6845"] = true
VIDEOS["MC6847"] = true
VIDEOS["MD4330B"] = true
VIDEOS["MM5445"] = true
VIDEOS["MSM6222B"] = true
VIDEOS["MSM6255"] = true
VIDEOS["MOS6566"] = true
VIDEOS["PC_VGA"] = true
VIDEOS["PCD8544"] = true
VIDEOS["PCF2100"] = true
--VIDEOS["POLY"] = true
VIDEOS["PSX"] = true
VIDEOS["RAMDAC"] = true
VIDEOS["S2636"] = true
VIDEOS["SAA5050"] = true
VIDEOS["SAA5240"] = true
VIDEOS["PWM_DISPLAY"] = true
VIDEOS["SDA5708"] = true
VIDEOS["SED1200"] = true
VIDEOS["SED1330"] = true
VIDEOS["SED1356"] = true
VIDEOS["SED1500"] = true
VIDEOS["SED1520"] = true
VIDEOS["SNES_PPU"] = true
VIDEOS["T6963C"] = true
VIDEOS["T6A04"] = true
VIDEOS["TEA1002"] = true
--VIDEOS["TLC34076"] = true
--VIDEOS["TMS34061"] = true
VIDEOS["TMS3556"] = true
VIDEOS["TMS9927"] = true
VIDEOS["TMS9928A"] = true
VIDEOS["TOPCAT"] = true
VIDEOS["NEREID"] = true
VIDEOS["UPD3301"] = true
VIDEOS["UPD7220"] = true
VIDEOS["UPD7227"] = true
VIDEOS["V9938"] = true
VIDEOS["VIC4567"] = true
VIDEOS["VIRGE_PCI"] = true
--VIDEOS["VOODOO"] = true
VIDEOS["SCN2674"] = true
VIDEOS["GB_LCD"] = true
VIDEOS["GBA_LCD"] = true
VIDEOS["MGA2064W"] = true
VIDEOS["PPU2C0X"] = true
VIDEOS["DP8510"] = true
VIDEOS["MB88303"] = true
VIDEOS["PS2GS"] = true
VIDEOS["PS2GIF"] = true
VIDEOS["DECSFB"] = true
VIDEOS["BT431"] = true
--VIDEOS["VRENDER0"] = true

--------------------------------------------------
-- specify available machine cores
--------------------------------------------------

MACHINES["AKIKO"] = true
MACHINES["ALPHA_8921"] = true
MACHINES["AM2901B"] = true
MACHINES["AUTOCONFIG"] = true
MACHINES["BUSMOUSE"] = true
MACHINES["CR511B"] = true
MACHINES["DMAC"] = true
MACHINES["GAYLE"] = true
MACHINES["6522VIA"] = true
MACHINES["6821PIA"] = true
MACHINES["6840PTM"] = true
MACHINES["MPCC68561"] = true
MACHINES["68681"] = true
MACHINES["7200FIFO"] = true
MACHINES["8530SCC"] = true
MACHINES["ACIA6850"] = true
MACHINES["ACORN_BMU"] = true
MACHINES["ACORN_IOC"] = true
MACHINES["ACORN_LC"] = true
MACHINES["ACORN_MEMC"] = true
MACHINES["ACORN_VIDC"] = true
MACHINES["ADC0804"] = true
MACHINES["ADC0808"] = true
MACHINES["ADC083X"] = true
MACHINES["ADC1038"] = true
MACHINES["ADC1213X"] = true
MACHINES["AICARTC"] = true
MACHINES["AM25S55X"] = true
MACHINES["AM2847"] = true
MACHINES["AM2910"] = true
MACHINES["AM53CF96"] = true
MACHINES["AM79C30"] = true
MACHINES["AM79C90"] = true
MACHINES["AM9513"] = true
MACHINES["AM9517A"] = true
MACHINES["AM9519"] = true
MACHINES["AMIGAFDC"] = true
MACHINES["APPLEPIC"] = true
MACHINES["ARM_IOMD"] = true
MACHINES["AT_KEYBC"] = true
MACHINES["AT28C16"] = true
MACHINES["AT28C64B"] = true
MACHINES["AT29X"] = true
MACHINES["AT45DBXX"] = true
MACHINES["ATAFLASH"] = true
MACHINES["AY31015"] = true
MACHINES["BANKDEV"] = true
MACHINES["BIM68153"] = true
MACHINES["BQ4847"] = true
MACHINES["BQ4852"] = true
MACHINES["CDP1852"] = true
MACHINES["CDP1871"] = true
MACHINES["CDP1879"] = true
--MACHINES["CDU76S"] = true
MACHINES["CH376"] = true
MACHINES["CHESSMACHINE"] = true
MACHINES["CMOS40105"] = true
MACHINES["COM52C50"] = true
MACHINES["COM8116"] = true
MACHINES["COP452"] = true
MACHINES["CR589"] = true
MACHINES["CS4031"] = true
MACHINES["CS8221"] = true
MACHINES["CS8900A"] = true
MACHINES["CXD1095"] = true
MACHINES["DL11"] = true
MACHINES["DP8390"] = true
MACHINES["DP83932C"] = true
MACHINES["DP8573"] = true
--MACHINES["DS1204"] = true
MACHINES["DS1302"] = true
MACHINES["DS1315"] = true
MACHINES["DS1386"] = true
MACHINES["DS17X85"] = true
MACHINES["DS2401"] = true
MACHINES["DS2404"] = true
MACHINES["DS6417"] = true
MACHINES["DS75160A"] = true
MACHINES["DS75161A"] = true
MACHINES["DS8874"] = true
MACHINES["E0516"] = true
MACHINES["E05A03"] = true
MACHINES["E05A30"] = true
MACHINES["EEPROMDEV"] = true
MACHINES["ER1400"] = true
MACHINES["ER2055"] = true
MACHINES["EXORTERM"] = true
MACHINES["F3853"] = true
MACHINES["F4702"] = true
MACHINES["GLUKRS"] = true
MACHINES["GT913"] = true
MACHINES["HD63450"] = true
MACHINES["HD64610"] = true
MACHINES["HP_DC100_TAPE"] = true
MACHINES["HP_TACO"] = true
MACHINES["1MA6"] = true
MACHINES["1MB5"] = true
MACHINES["I2CMEM"] = true
MACHINES["I3001"] = true
MACHINES["I3002"] = true
MACHINES["I7220"] = true
MACHINES["I80130"] = true
MACHINES["I8087"] = true
MACHINES["I8155"] = true
MACHINES["I8212"] = true
MACHINES["I8214"] = true
MACHINES["I82355"] = true
MACHINES["I8243"] = true
MACHINES["I8251"] = true
MACHINES["I8255"] = true
MACHINES["I8257"] = true
MACHINES["I8271"] = true
MACHINES["I8279"] = true
MACHINES["I8291A"] = true
MACHINES["I8355"] = true
--MACHINES["IBM21S850"] = true
MACHINES["ICM7170"] = true
MACHINES["IDECTRL"] = true
MACHINES["IE15"] = true
MACHINES["IM6402"] = true
MACHINES["INS8154"] = true
MACHINES["INS8250"] = true
MACHINES["INTELFLASH"] = true
MACHINES["JVS"] = true
MACHINES["K033906"] = true
MACHINES["K053252"] = true
MACHINES["K056230"] = true
MACHINES["KB3600"] = true
MACHINES["KBDC8042"] = true
MACHINES["KR2376"] = true
MACHINES["LATCH8"] = true
MACHINES["LC89510"] = true
MACHINES["LDPR8210"] = true
MACHINES["LDSTUB"] = true
MACHINES["LDV1000"] = true
MACHINES["LDVP931"] = true
MACHINES["LH5810"] = true
MACHINES["LINFLASH"] = true
MACHINES["LOCOMO"] = true
MACHINES["LPCI"] = true
MACHINES["LSI53C810"] = true
MACHINES["M3002"] = true
MACHINES["M68307"] = true
MACHINES["M68340"] = true
MACHINES["M950X0"] = true
MACHINES["M68SFDC"] = true
MACHINES["M6M80011AP"] = true
MACHINES["MB14241"] = true
MACHINES["MB3773"] = true
MACHINES["MB8421"] = true
MACHINES["MB87030"] = true
MACHINES["MB87078"] = true
MACHINES["MB8795"] = true
MACHINES["MB89352"] = true
MACHINES["MB89371"] = true
MACHINES["MC14411"] = true
MACHINES["MC146818"] = true
MACHINES["MC6843"] = true
MACHINES["MC6844"] = true
MACHINES["MC6846"] = true
MACHINES["MC6852"] = true
MACHINES["MC6854"] = true
MACHINES["MC68328"] = true
MACHINES["MC68901"] = true
MACHINES["MCCS1850"] = true
MACHINES["MCF5206E"] = true
MACHINES["MICROTOUCH"] = true
MACHINES["MIOT6530"] = true
MACHINES["MM5307"] = true
MACHINES["MM58167"] = true
MACHINES["MM58174"] = true
MACHINES["MM58274C"] = true
MACHINES["MM74C922"] = true
MACHINES["MM5740"] = true
MACHINES["MOS6526"] = true
MACHINES["MOS6529"] = true
MACHINES["MOS6551"] = true
MACHINES["MOS6702"] = true
MACHINES["MOS8706"] = true
MACHINES["MOS8722"] = true
MACHINES["MOS8726"] = true
MACHINES["MPU401"] = true
MACHINES["MSM5832"] = true
MACHINES["MSM58321"] = true
MACHINES["MSM6242"] = true
--MACHINES["MSM6253"] = true
MACHINES["MYB3K_KEYBOARD"] = true
MACHINES["NCR5380"] = true
MACHINES["NCR5385"] = true
MACHINES["NCR5390"] = true
MACHINES["NCR539x"] = true
MACHINES["NCR53C7XX"] = true
MACHINES["NETLIST"] = true
MACHINES["NMC9306"] = true
MACHINES["NSC810"] = true
MACHINES["NSCSI"] = true
MACHINES["OMTI5100"] = true
MACHINES["OUTPUT_LATCH"] = true
MACHINES["PC_FDC"] = true
MACHINES["PC_LPT"] = true
MACHINES["PCCARD"] = true
MACHINES["PCF8573"] = true
MACHINES["PCF8583"] = true
--MACHINES["PCF8584"] = true
MACHINES["PCF8593"] = true
MACHINES["PCI"] = true
MACHINES["PCKEYBRD"] = true
MACHINES["PDC"] = true
MACHINES["PHI"] = true
MACHINES["PIC8259"] = true
MACHINES["PIT68230"] = true
MACHINES["PIT8253"] = true
MACHINES["PLA"] = true
--MACHINES["PROFILE"] = true
MACHINES["PROM82S129"] = true
MACHINES["PXA255"] = true
MACHINES["R64H156"] = true
MACHINES["RF5C296"] = true
MACHINES["RIOT6532"] = true
MACHINES["RIPPLE_COUNTER"] = true
MACHINES["ROC10937"] = true
MACHINES["RP5C01"] = true
MACHINES["RP5C15"] = true
MACHINES["RP5H01"] = true
MACHINES["RSTBUF"] = true
MACHINES["RTC4543"] = true
MACHINES["RTC65271"] = true
MACHINES["RTC9701"] = true
MACHINES["S_SMP"] = true
--MACHINES["S2636"] = true
MACHINES["S3520CF"] = true
MACHINES["S3C24XX"] = true
MACHINES["S3C44B0"] = true
MACHINES["SA1110"] = true
MACHINES["SA1111"] = true
MACHINES["SAA1043"] = true
MACHINES["SATURN"] = true
MACHINES["SCC68070"] = true
--MACHINES["SCSI"] = true
MACHINES["SCC2698B"] = true
MACHINES["SCN_PCI"] = true
MACHINES["SCOOP"] = true
MACHINES["SCUDSP"] = true
MACHINES["SECFLASH"] = true
MACHINES["SEIBU_COP"] = true
MACHINES["SENSORBOARD"] = true
--MACHINES["SERFLASH"] = true
MACHINES["SMC91C9X"] = true
MACHINES["SMIOC"] = true
MACHINES["SEGA_SCU"] = true
MACHINES["SMPC"] = true
MACHINES["SPG2XX"] = true
MACHINES["SPG290"] = true
MACHINES["SPISDCARD"] = true
MACHINES["STVCD"] = true
MACHINES["SUN4C_MMU"] = true
MACHINES["SWTPC8212"] = true
MACHINES["TASC_SB30"] = true
MACHINES["TC0091LVC"] = true
MACHINES["TDC1008"] = true
--MACHINES["TE7750"] = true
MACHINES["TIMEKPR"] = true
MACHINES["TMC0430"] = true
MACHINES["TMC0999"] = true
MACHINES["TMC208K"] = true
MACHINES["TMP68301"] = true
MACHINES["TMS5501"] = true
MACHINES["TMS6100"] = true
MACHINES["TMS9901"] = true
MACHINES["TMS9902"] = true
MACHINES["TMS9914"] = true
MACHINES["TPI6525"] = true
MACHINES["TSCONF_DMA"] = true
MACHINES["TTL7400"] = true
MACHINES["TTL7404"] = true
--MACHINES["TSB12LV01A"] = true
MACHINES["TTL74123"] = true
MACHINES["TTL74145"] = true
MACHINES["TTL74148"] = true
MACHINES["TTL74153"] = true
MACHINES["TTL74157"] = true
MACHINES["TTL74161"] = true
MACHINES["TTL74164"] = true
MACHINES["TTL74175"] = true
MACHINES["TTL74181"] = true
MACHINES["TTL74259"] = true
MACHINES["TTL74381"] = true
MACHINES["TTL74543"] = true
MACHINES["TTL7474"] = true
MACHINES["TUBE"] = true
MACHINES["UCB1200"] = true
MACHINES["UPC82C710"] = true
MACHINES["UPC82C711"] = true
MACHINES["UPD1990A"] = true
MACHINES["UPD4991A"] = true
--MACHINES["UPD4992"] = true
MACHINES["UPD4701"] = true
MACHINES["UPD7001"] = true
MACHINES["UPD7002"] = true
MACHINES["UPD7004"] = true
MACHINES["UPD71071"] = true
MACHINES["UPD765"] = true
MACHINES["FDC_PLL"] = true
MACHINES["V3021"] = true
MACHINES["VIC_PL192"] = true
MACHINES["WD_FDC"] = true
MACHINES["WD1000"] = true
MACHINES["WD1010"] = true
MACHINES["WD11C00_17"] = true
MACHINES["WD2010"] = true
MACHINES["WD33C9X"] = true
MACHINES["WD7600"] = true
MACHINES["X2201"] = true
MACHINES["X2212"] = true
MACHINES["X76F041"] = true
MACHINES["X76F100"] = true
MACHINES["YM2148"] = true
MACHINES["YM3802"] = true
MACHINES["Z80CTC"] = true
MACHINES["Z80SIO"] = true
MACHINES["Z80SCC"] = true
MACHINES["Z80DMA"] = true
MACHINES["Z80PIO"] = true
MACHINES["Z80STI"] = true
MACHINES["Z8536"] = true
MACHINES["SMC92X4"] = true
MACHINES["HDC9234"] = true
MACHINES["TI99_HD"] = true
MACHINES["STRATA"] = true
MACHINES["STEPPERS"] = true
MACHINES["CORVUSHD"] = true
MACHINES["WOZFDC"] = true
MACHINES["APPLE_FDINTF"] = true
MACHINES["IWM"] = true
MACHINES["SWIM1"] = true
MACHINES["SWIM2"] = true
MACHINES["SWIM3"] = true
MACHINES["MAC_VIDEO_SONORA"] = true
MACHINES["DIABLO_HD"] = true
MACHINES["TMS1024"] = true
MACHINES["NSC810"] = true
MACHINES["VT82C496"] = true
MACHINES["FDC37C93X"] = true
MACHINES["GENPC"] = true
MACHINES["GEN_LATCH"] = true
MACHINES["WATCHDOG"] = true
MACHINES["SMARTMEDIA"] = true
MACHINES["APPLE_DRIVE"] = true
MACHINES["APPLE_FDC"] = true
MACHINES["SONY_DRIVE"] = true
MACHINES["SCNXX562"] = true
MACHINES["FGA002"] = true
MACHINES["I82586"] = true
MACHINES["INPUT_MERGER"] = true
-- MACHINES["K054321"] = true
MACHINES["ADC0844"] = true
MACHINES["28FXXX"] = true
-- MACHINES["GEN_FIFO"] = true
MACHINES["Z80DAISY"] = true
MACHINES["PS2DMAC"] = true
MACHINES["PS2INTC"] = true
MACHINES["PS2MC"] = true
MACHINES["PS2PAD"] = true
MACHINES["PS2SIF"] = true
MACHINES["PS2TIMER"] = true
MACHINES["IOPCDVD"] = true
MACHINES["IOPDMA"] = true
MACHINES["IOPINTC"] = true
MACHINES["IOPSIO2"] = true
MACHINES["IOPTIMER"] = true
MACHINES["Z8038"] = true
MACHINES["AIC565"] = true
MACHINES["AIC580"] = true
MACHINES["AIC6250"] = true
MACHINES["DC7085"] = true
MACHINES["I82357"] = true
MACHINES["XC1700E"] = true
MACHINES["EDLC"] = true
MACHINES["WTL3132"] = true
MACHINES["CXD1185"] = true
MACHINES["BL_HANDHELDS_MENUCONTROL"] = true
MACHINES["NS32081"] = true
MACHINES["NS32202"] = true
MACHINES["NS32082"] = true
MACHINES["BITMAP_PRINTER"] = true

--------------------------------------------------
-- specify available bus cores
--------------------------------------------------

BUSES["A1BUS"] = true
BUSES["A2BUS"] = true
BUSES["A2GAMEIO"] = true
BUSES["A7800"] = true
BUSES["A800"] = true
BUSES["ABCBUS"] = true
BUSES["ABCKB"] = true
BUSES["ACORN"] = true
BUSES["ADAM"] = true
BUSES["ADAMNET"] = true
BUSES["ADB"] = true
BUSES["AMIGA_KEYBOARD"] = true
BUSES["APF"] = true
BUSES["APRICOT_EXPANSION"] = true
BUSES["APRICOT_KEYBOARD"] = true
BUSES["APRICOT_VIDEO"] = true
BUSES["AQUARIUS"] = true
BUSES["ARCADIA"] = true
BUSES["ARCHIMEDES_ECONET"] = true
BUSES["ARCHIMEDES_PODULE"] = true
BUSES["ASTROCADE"] = true
BUSES["ATA"] = true
BUSES["BBC_1MHZBUS"] = true
BUSES["BBC_ANALOGUE"] = true
BUSES["BBC_CART"] = true
BUSES["BBC_EXP"] = true
BUSES["BBC_FDC"] = true
BUSES["BBC_INTERNAL"] = true
BUSES["BBC_JOYPORT"] = true
BUSES["BBC_MODEM"] = true
BUSES["BBC_ROM"] = true
BUSES["BBC_TUBE"] = true
BUSES["BBC_USERPORT"] = true
BUSES["BML3"] = true
BUSES["BW2"] = true
BUSES["C64"] = true
BUSES["CBM2"] = true
BUSES["CBMIEC"] = true
BUSES["CBUS"] = true
BUSES["CENTRONICS"] = true
BUSES["CGENIE_EXPANSION"] = true
BUSES["CGENIE_PARALLEL"] = true
BUSES["CHANNELF"] = true
BUSES["COCO"] = true
BUSES["COLECO_CART"] = true
BUSES["COLECO_CONTROLLER"] = true
BUSES["COMPIS_GRAPHICS"] = true
BUSES["COMPUCOLOR"] = true
BUSES["COMX35"] = true
BUSES["CPC"] = true
BUSES["CRVISION"] = true
BUSES["DMV"] = true
BUSES["ECBBUS"] = true
BUSES["ECONET"] = true
BUSES["EINSTEIN_USERPORT"] = true
BUSES["EKARA"] = true
BUSES["ELECTRON_CART"] = true
BUSES["ELECTRON"] = true
BUSES["EP64"] = true
BUSES["EPSON_SIO"] = true
BUSES["FMT_SCSI"] = true
BUSES["GAMATE"] = true
BUSES["GAMEBOY"] = true
BUSES["GAMEGEAR"] = true
BUSES["GBA"] = true
BUSES["GENERIC"] = true
BUSES["GIO64"] = true
BUSES["HEXBUS"] = true
BUSES["HP_IPC_IO"] = true
BUSES["HP80_IO"] = true
BUSES["HP9845_IO"] = true
BUSES["HPDIO"] = true
BUSES["HPHIL"] = true
BUSES["IEEE488"] = true
BUSES["IMI7000"] = true
BUSES["INTELLEC4"] = true
BUSES["INTERPRO_KEYBOARD"] = true
BUSES["INTERPRO_MOUSE"] = true
BUSES["INTERPRO_SR"] = true
BUSES["INTV_CTRL"] = true
BUSES["INTV"] = true
BUSES["IQ151"] = true
BUSES["ISA"] = true
BUSES["ISBX"] = true
BUSES["JAKKS_GAMEKEY"] = true
BUSES["KC"] = true
BUSES["LPCI"] = true
BUSES["M5"] = true
BUSES["MACKBD"] = true
BUSES["MACPDS"] = true
BUSES["MC10"] = true
BUSES["MEGADRIVE"] = true
BUSES["MIDI"] = true
BUSES["MSX_SLOT"] = true
BUSES["MTX"] = true
BUSES["MULTIBUS"] = true
BUSES["NASBUS"] = true
--BUSES["NEOGEO_CTRL"] = true
--BUSES["NEOGEO"] = true
BUSES["NES_CTRL"] = true
BUSES["NES"] = true
BUSES["NEWBRAIN"] = true
BUSES["NSCSI"] = true
BUSES["NUBUS"] = true
BUSES["O2"] = true
BUSES["ORICEXT"] = true
BUSES["P2000"] = true
BUSES["PASOPIA"] = true
BUSES["PC_JOY"] = true
BUSES["PC_KBD"] = true
BUSES["PC1512"] = true
BUSES["PCE"] = true
BUSES["PCE_CTRL"] = true
BUSES["PET"] = true
BUSES["PLUS4"] = true
BUSES["POFO"] = true
BUSES["PSI_KEYBOARD"] = true
BUSES["PSX_CONTROLLER"] = true
BUSES["PSX_PARALLEL"] = true
BUSES["QBUS"] = true
BUSES["QL"] = true
BUSES["RS232"] = true
BUSES["RTPC_KBD"] = true
BUSES["S100"] = true
BUSES["SAITEK_OSA"] = true
BUSES["SAMCOUPE_DRIVE_PORT"] = true
BUSES["SAMCOUPE_EXPANSION"] = true
BUSES["SAMCOUPE_MOUSE_PORT"] = true
BUSES["SAT_CTRL"] = true
BUSES["SATURN"] = true
BUSES["SBUS"] = true
BUSES["SCSI"] = true
BUSES["SCV"] = true
BUSES["SDK85"] = true
BUSES["SEGA8"] = true
BUSES["SG1000_EXP"] = true
BUSES["SGIKBD"] = true
BUSES["SMS_CTRL"] = true
BUSES["SMS_EXP"] = true
BUSES["SNES_CTRL"] = true
BUSES["SNES"] = true
BUSES["SPC1000"] = true
BUSES["SPECTRUM"] = true
BUSES["SS50"] = true
BUSES["SUNKBD"] = true
BUSES["SUNMOUSE"] = true
BUSES["SVI_EXPANDER"] = true
BUSES["SVI_SLOT"] = true
BUSES["TANBUS"] = true
BUSES["TATUNG_PIPE"] = true
BUSES["THOMSON"] = true
BUSES["TI8X"] = true
BUSES["TI99"] = true
BUSES["TI99X"] = true
BUSES["TIKI100"] = true
BUSES["TMC600"] = true
BUSES["TVC"] = true
BUSES["UTS_KBD"] = true
BUSES["VBOY"] = true
BUSES["VC4000"] = true
BUSES["VCS"] = true
BUSES["VCS_CTRL"] = true
BUSES["VECTREX"] = true
BUSES["VIC10"] = true
BUSES["VIC20"] = true
BUSES["VIDBRAIN"] = true
BUSES["VIP"] = true
BUSES["VME"] = true
BUSES["VSMILE"] = true
BUSES["VTECH_IOEXP"] = true
BUSES["VTECH_MEMEXP"] = true
BUSES["WANGPC"] = true
BUSES["WSWAN"] = true
BUSES["X68K"] = true
BUSES["Z29_KBD"] = true
BUSES["Z88"] = true
BUSES["ZORRO"] = true

--------------------------------------------------
-- specify used file formats
--------------------------------------------------

FORMATS["2D_DSK"] = true
FORMATS["A26_CAS"] = true
FORMATS["A5105_DSK"] = true
FORMATS["ABC800_DSK"] = true
FORMATS["ABCFD2_DSK"] = true
FORMATS["ACE_TAP"] = true
FORMATS["ACORN_DSK"] = true
FORMATS["ADAM_CAS"] = true
FORMATS["ADAM_DSK"] = true
FORMATS["AFS_DSK"] = true
FORMATS["AGAT840K_HLE_DSK"] = true
FORMATS["AIM_DSK"] = true
FORMATS["AMI_DSK"] = true
FORMATS["AP2_DSK"] = true
FORMATS["APD_DSK"] = true
FORMATS["APF_APT"] = true
FORMATS["APOLLO_DSK"] = true
FORMATS["APPLIX_DSK"] = true
FORMATS["APRIDISK"] = true
FORMATS["AP_DSK35"] = true
FORMATS["AQUARIUS_CAQ"] = true
FORMATS["ASST128_DSK"] = true
FORMATS["ASTROCADE_WAV"] = true
FORMATS["ATARI_DSK"] = true
FORMATS["ATOM_DSK"] = true
FORMATS["ATOM_TAP"] = true
FORMATS["BASICDSK"] = true
FORMATS["BW12_DSK"] = true
FORMATS["BW2_DSK"] = true
FORMATS["C3040_DSK"] = true
FORMATS["C4040_DSK"] = true
FORMATS["C8280_DSK"] = true
FORMATS["CAMPLYNX_CAS"] = true
FORMATS["CAMPLYNX_DSK"] = true
FORMATS["CBM_CRT"] = true
FORMATS["CBM_TAP"] = true
FORMATS["CCVF_DSK"] = true
FORMATS["CD90_640_DSK"] = true
FORMATS["CGENIE_DSK"] = true
FORMATS["CGEN_CAS"] = true
FORMATS["COCO_CAS"] = true
FORMATS["COMX35_DSK"] = true
FORMATS["CONCEPT_DSK"] = true
FORMATS["COUPEDSK"] = true
FORMATS["CPIS_DSK"] = true
FORMATS["CSW_CAS"] = true
FORMATS["D64_DSK"] = true
FORMATS["D71_DSK"] = true
FORMATS["D80_DSK"] = true
FORMATS["D81_DSK"] = true
FORMATS["D82_DSK"] = true
FORMATS["DCP_DSK"] = true
FORMATS["DIM_DSK"] = true
FORMATS["DIP_DSK"] = true
FORMATS["DMK_DSK"] = true
FORMATS["DS9_DSK"] = true
FORMATS["SDF_DSK"] = true
FORMATS["EP64_DSK"] = true
FORMATS["DMV_DSK"] = true
FORMATS["ESQ16_DSK"] = true
FORMATS["ESQ8_DSK"] = true
FORMATS["EXCALI64_DSK"] = true
FORMATS["FC100_CAS"] = true
FORMATS["FDD_DSK"] = true
FORMATS["FL1_DSK"] = true
FORMATS["FLEX_DSK"] = true
FORMATS["FM7_CAS"] = true
FORMATS["FMSX_CAS"] = true
FORMATS["FMTOWNS_DSK"] = true
FORMATS["FSD_DSK"] = true
FORMATS["G64_DSK"] = true
FORMATS["GTP_CAS"] = true
FORMATS["H8_CAS"] = true
FORMATS["HECTOR_MINIDISC"] = true
FORMATS["HECT_DSK"] = true
FORMATS["HECT_TAP"] = true
FORMATS["HPI_DSK"] = true
FORMATS["HP_IPC_DSK"] = true
FORMATS["HTI_TAP"] = true
FORMATS["IBMXDF_DSK"] = true
FORMATS["IMG_DSK"] = true
FORMATS["IPF_DSK"] = true
FORMATS["IQ151_DSK"] = true
FORMATS["ITT3030_DSK"] = true
FORMATS["JFD_DSK"] = true
FORMATS["JUKU_DSK"] = true
FORMATS["JVC_DSK"] = true
FORMATS["KAYPRO_DSK"] = true
FORMATS["KC85_DSK"] = true
FORMATS["KC_CAS"] = true
FORMATS["KIM1_CAS"] = true
FORMATS["LVIV_LVT"] = true
FORMATS["M20_DSK"] = true
FORMATS["M5_DSK"] = true
FORMATS["MBEE_CAS"] = true
FORMATS["MDOS_DSK"] = true
FORMATS["MFM_HD"] = true
FORMATS["MM_DSK"] = true
FORMATS["MS0515_DSK"] = true
FORMATS["MSX_DSK"] = true
FORMATS["MTX_DSK"] = true
FORMATS["MZ_CAS"] = true
FORMATS["NANOS_DSK"] = true
FORMATS["NASCOM_DSK"] = true
FORMATS["NASLITE_DSK"] = true
FORMATS["NES_DSK"] = true
FORMATS["NFD_DSK"] = true
FORMATS["OPD_DSK"] = true
FORMATS["ORAO_CAS"] = true
FORMATS["ORIC_DSK"] = true
FORMATS["ORIC_TAP"] = true
FORMATS["OS9_DSK"] = true
FORMATS["P2000T_CAS"] = true
FORMATS["P6001_CAS"] = true
FORMATS["PASTI_DSK"] = true
FORMATS["PC98FDI_DSK"] = true
FORMATS["PC98_DSK"] = true
FORMATS["PHC25_CAS"] = true
FORMATS["PK8020_DSK"] = true
FORMATS["PMD_CAS"] = true
FORMATS["POLY_DSK"] = true
FORMATS["PPG_DSK"] = true
FORMATS["PRIMOPTP"] = true
FORMATS["PYLDIN_DSK"] = true
FORMATS["QL_DSK"] = true
FORMATS["RC759_DSK"] = true
FORMATS["RK_CAS"] = true
FORMATS["RX50_DSK"] = true
FORMATS["SC3000_BIT"] = true
FORMATS["SDD_DSK"] = true
FORMATS["SF7000_DSK"] = true
FORMATS["SMX_DSK"] = true
FORMATS["SOL_CAS"] = true
FORMATS["SORC_CAS"] = true
FORMATS["SORC_DSK"] = true
FORMATS["SORD_CAS"] = true
FORMATS["SPC1000_CAS"] = true
FORMATS["ST_DSK"] = true
FORMATS["SVI_CAS"] = true
FORMATS["SVI_DSK"] = true
FORMATS["SWD_DSK"] = true
FORMATS["TANDY2K_DSK"] = true
FORMATS["THOM_CAS"] = true
FORMATS["THOM_DSK"] = true
FORMATS["TI99_DSK"] = true
FORMATS["TIKI100_DSK"] = true
FORMATS["TRD_DSK"] = true
FORMATS["TRS80_DSK"] = true
FORMATS["TRS_CAS"] = true
FORMATS["TVC_CAS"] = true
FORMATS["TVC_DSK"] = true
FORMATS["TZX_CAS"] = true
FORMATS["UEF_CAS"] = true
FORMATS["UNIFLEX_DSK"] = true
FORMATS["VDK_DSK"] = true
FORMATS["VECTOR06_DSK"] = true
FORMATS["VG5K_CAS"] = true
FORMATS["VICTOR9K_DSK"] = true
FORMATS["VT_CAS"] = true
FORMATS["VT_DSK"] = true
FORMATS["FS_VTECH"] = true
FORMATS["WD177X_DSK"] = true
FORMATS["X07_CAS"] = true
FORMATS["X1_TAP"] = true
FORMATS["XDF_DSK"] = true
FORMATS["ZX81_P"] = true
FORMATS["FS_PRODOS"] = true
FORMATS["FS_ORIC_JASMIN"] = true
FORMATS["FS_COCO_RSDOS"] = true
FORMATS["FS_COCO_OS9"] = true
