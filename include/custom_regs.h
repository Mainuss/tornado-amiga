#ifndef CUSTOM_REGS_H
#define CUSTOM_REGS_H

// Hit register 
#define WR(REG,VAL)  *(volatile unsigned short*)(REG) = VAL
#define WRL(REG,VAL) *(volatile unsigned int*)(REG) = VAL
#define WRB(REG,VAL) *(volatile unsigned char*)(REG) = VAL

// Read register 
#define RR(REG)  *(volatile unsigned short*)(REG)
#define RRL(REG) *(volatile unsigned int*)(REG)
#define RRB(REG) *(volatile unsigned char*)(REG)

#define BLTDDAT_OFFS    0x000
#define DMACONR_OFFS    0x002
#define VPOSR_OFFS    0x004
#define VHPOSR_OFFS    0x006
#define DSKDATR_OFFS    0x008
#define JOY0DAT_OFFS    0x00A
#define JOY1DAT_OFFS    0x00C
#define CLXDAT_OFFS    0x00E
#define ADKCONR_OFFS    0x010
#define POT0DAT_OFFS    0x012
#define POT1DAT_OFFS    0x014
#define POTINP_OFFS    0x016
#define SERDATR_OFFS    0x018
#define DSKBYTR_OFFS    0x01A
#define INTENAR_OFFS    0x01C
#define INTREQR_OFFS    0x01E
#define DSKPTH_OFFS    0x020
#define DSKPTL_OFFS    0x022
#define DSKLEN_OFFS    0x024
#define DSKDAT_OFFS    0x026
#define REFPTR_OFFS    0x028
#define VPOSW_OFFS    0x02A
#define VHPOSW_OFFS    0x02C
#define COPCON_OFFS    0x02E
#define SERDAT_OFFS    0x030
#define SERPER_OFFS    0x032
#define POTGO_OFFS    0x034
#define JOYTEST_OFFS    0x036
#define STREQU_OFFS    0x038
#define STRVBL_OFFS    0x03A
#define STRHOR_OFFS    0x03C
#define STRLONG_OFFS    0x03E
#define BLTCON0_OFFS    0x040
#define BLTCON1_OFFS    0x042
#define BLTAFWM_OFFS    0x044
#define BLTALWM_OFFS    0x046
#define BLTCPTH_OFFS    0x048
#define BLTCPTL_OFFS    0x04A
#define BLTBPTH_OFFS    0x04C
#define BLTBPTL_OFFS    0x04E
#define BLTAPTH_OFFS    0x050
#define BLTAPTL_OFFS    0x052
#define BLTDPTH_OFFS    0x054
#define BLTDPTL_OFFS    0x056
#define BLTSIZE_OFFS    0x058
#define BLTCON0L_OFFS    0x05A
#define BLTSIZV_OFFS    0x05C
#define BLTSIZH_OFFS    0x05E
#define BLTCMOD_OFFS    0x060
#define BLTBMOD_OFFS    0x062
#define BLTAMOD_OFFS    0x064
#define BLTDMOD_OFFS    0x066
#define BLTCDAT_OFFS    0x070
#define BLTBDAT_OFFS    0x072
#define BLTADAT_OFFS    0x074
#define SPRHDAT_OFFS    0x078
#define BPLHDAT_OFFS    0x07A
#define DENISEID_OFFS    0x07C
#define DSKSYNC_OFFS    0x07E
#define COP1LCH_OFFS    0x080
#define COP1LCL_OFFS    0x082
#define COP2LCH_OFFS    0x084
#define COP2LCL_OFFS    0x086
#define COPJMP1_OFFS    0x088
#define COPJMP2_OFFS    0x08A
#define COPINS_OFFS    0x08C
#define DIWSTRT_OFFS    0x08E
#define DIWSTOP_OFFS    0x090
#define DDFSTRT_OFFS    0x092
#define DDFSTOP_OFFS    0x094
#define DMACON_OFFS    0x096
#define CLXCON_OFFS    0x098
#define INTENA_OFFS    0x09A
#define INTREQ_OFFS    0x09C
#define ADKCON_OFFS    0x09E
#define AUD0LCH_OFFS    0x0A0
#define AUD0LCL_OFFS    0x0A2
#define AUD0LEN_OFFS    0x0A4
#define AUD0PER_OFFS    0x0A6
#define AUD0VOL_OFFS    0x0A8
#define AUD0DAT_OFFS    0x0AA
#define AUD1LCH_OFFS    0x0B0
#define AUD1LCL_OFFS    0x0B2
#define AUD1LEN_OFFS    0x0B4
#define AUD1PER_OFFS    0x0B6
#define AUD1VOL_OFFS    0x0B8
#define AUD1DAT_OFFS    0x0BA
#define AUD2LCH_OFFS    0x0C0
#define AUD2LCL_OFFS    0x0C2
#define AUD2LEN_OFFS    0x0C4
#define AUD2PER_OFFS    0x0C6
#define AUD2VOL_OFFS    0x0C8
#define AUD2DAT_OFFS    0x0CA
#define AUD3LCH_OFFS    0x0D0
#define AUD3LCL_OFFS    0x0D2
#define AUD3LEN_OFFS    0x0D4
#define AUD3PER_OFFS    0x0D6
#define AUD3VOL_OFFS    0x0D8
#define AUD3DAT_OFFS    0x0DA
#define BPL1PTH_OFFS    0x0E0
#define BPL1PTL_OFFS    0x0E2
#define BPL2PTH_OFFS    0x0E4
#define BPL2PTL_OFFS    0x0E6
#define BPL3PTH_OFFS    0x0E8
#define BPL3PTL_OFFS    0x0EA
#define BPL4PTH_OFFS    0x0EC
#define BPL4PTL_OFFS    0x0EE
#define BPL5PTH_OFFS    0x0F0
#define BPL5PTL_OFFS    0x0F2
#define BPL6PTH_OFFS    0x0F4
#define BPL6PTL_OFFS    0x0F6
#define BPL7PTH_OFFS    0x0F8
#define BPL7PTL_OFFS    0x0FA
#define BPL8PTH_OFFS    0x0FC
#define BPL8PTL_OFFS    0x0FE
#define BPLCON0_OFFS    0x100
#define BPLCON1_OFFS    0x102
#define BPLCON2_OFFS    0x104
#define BPLCON3_OFFS    0x106
#define BPL1MOD_OFFS    0x108
#define BPL2MOD_OFFS    0x10A
#define BPLCON4_OFFS    0x10C
#define CLXCON2_OFFS    0x10E
#define BPL1DAT_OFFS    0x110
#define BPL2DAT_OFFS    0x112
#define BPL3DAT_OFFS    0x114
#define BPL4DAT_OFFS    0x116
#define BPL5DAT_OFFS    0x118
#define BPL6DAT_OFFS    0x11A
#define BPL7DAT_OFFS    0x11C
#define BPL8DAT_OFFS    0x11E
#define SPR0PTH_OFFS    0x120
#define SPR0PTL_OFFS    0x122
#define SPR1PTH_OFFS    0x124
#define SPR1PTL_OFFS    0x126
#define SPR2PTH_OFFS    0x128
#define SPR2PTL_OFFS    0x12A
#define SPR3PTH_OFFS    0x12C
#define SPR3PTL_OFFS    0x12E
#define SPR4PTH_OFFS    0x130
#define SPR4PTL_OFFS    0x132
#define SPR5PTH_OFFS    0x134
#define SPR5PTL_OFFS    0x136
#define SPR6PTH_OFFS    0x138
#define SPR6PTL_OFFS    0x13A
#define SPR7PTH_OFFS    0x13C
#define SPR7PTL_OFFS    0x13E
#define SPR0POS_OFFS    0x140
#define SPR0CTL_OFFS    0x142
#define SPR0DATA_OFFS    0x144
#define SPR0DATB_OFFS    0x146
#define SPR1POS_OFFS    0x148
#define SPR1CTL_OFFS    0x14A
#define SPR1DATA_OFFS    0x14C
#define SPR1DATB_OFFS    0x14E
#define SPR2POS_OFFS    0x150
#define SPR2CTL_OFFS    0x152
#define SPR2DATA_OFFS    0x154
#define SPR2DATB_OFFS    0x156
#define SPR3POS_OFFS    0x158
#define SPR3CTL_OFFS    0x15A
#define SPR3DATA_OFFS    0x15C
#define SPR3DATB_OFFS    0x15E
#define SPR4POS_OFFS    0x160
#define SPR4CTL_OFFS    0x162
#define SPR4DATA_OFFS    0x164
#define SPR4DATB_OFFS    0x166
#define SPR5POS_OFFS    0x168
#define SPR5CTL_OFFS    0x16A
#define SPR5DATA_OFFS    0x16C
#define SPR5DATB_OFFS    0x16E
#define SPR6POS_OFFS    0x170
#define SPR6CTL_OFFS    0x172
#define SPR6DATA_OFFS    0x174
#define SPR6DATB_OFFS    0x176
#define SPR7POS_OFFS    0x178
#define SPR7CTL_OFFS    0x17A
#define SPR7DATA_OFFS    0x17C
#define SPR7DATB_OFFS    0x17E
#define COLOR00_OFFS    0x180
#define COLOR01_OFFS    0x182
#define COLOR02_OFFS    0x184
#define COLOR03_OFFS    0x186
#define COLOR04_OFFS    0x188
#define COLOR05_OFFS    0x18A
#define COLOR06_OFFS    0x18C
#define COLOR07_OFFS    0x18E
#define COLOR08_OFFS    0x190
#define COLOR09_OFFS    0x192
#define COLOR10_OFFS    0x194
#define COLOR11_OFFS    0x196
#define COLOR12_OFFS    0x198
#define COLOR13_OFFS    0x19A
#define COLOR14_OFFS    0x19C
#define COLOR15_OFFS    0x19E
#define COLOR16_OFFS    0x1A0
#define COLOR17_OFFS    0x1A2
#define COLOR18_OFFS    0x1A4
#define COLOR19_OFFS    0x1A6
#define COLOR20_OFFS    0x1A8
#define COLOR21_OFFS    0x1AA
#define COLOR22_OFFS    0x1AC
#define COLOR23_OFFS    0x1AE
#define COLOR24_OFFS    0x1B0
#define COLOR25_OFFS    0x1B2
#define COLOR26_OFFS    0x1B4
#define COLOR27_OFFS    0x1B6
#define COLOR28_OFFS    0x1B8
#define COLOR29_OFFS    0x1BA
#define COLOR30_OFFS    0x1BC
#define COLOR31_OFFS    0x1BE
#define HTOTAL_OFFS    0x1C0
#define HSSTOP_OFFS    0x1C2
#define HBSTRT_OFFS    0x1C4
#define HBSTOP_OFFS    0x1C6
#define VTOTAL_OFFS    0x1C8
#define VSSTOP_OFFS    0x1CA
#define VBSTRT_OFFS    0x1CC
#define VBSTOP_OFFS    0x1CE
#define SPRHSTRT_OFFS    0x1D0
#define SPRHSTOP_OFFS    0x1D2
#define BPLHSTRT_OFFS    0x1D4
#define BPLHSTOP_OFFS    0x1D6
#define HHPOSW_OFFS    0x1D8
#define HHPOSR_OFFS    0x1DA
#define BEAMCON0_OFFS    0x1DC
#define HSSTRT_OFFS    0x1DE
#define VSSTRT_OFFS    0x1E0
#define HCENTER_OFFS    0x1E2
#define DIWHIGH_OFFS    0x1E4
#define BPLHMOD_OFFS    0x1E6
#define SPRHPTH_OFFS    0x1E8
#define SPRHPTL_OFFS    0x1EA
#define BPLHPTH_OFFS    0x1EC
#define BPLHPTL_OFFS    0x1EE
#define FMODE_OFFS    0x1FC
#define NOOP_OFFS     0x1FE

#define BASE_REGS 0xDFF000

#define BLTDDAT_ADDR    (BASE_REGS +  0x000)
#define DMACONR_ADDR    (BASE_REGS +  0x002)
#define VPOSR_ADDR    (BASE_REGS +  0x004)
#define VHPOSR_ADDR    (BASE_REGS +  0x006)
#define DSKDATR_ADDR    (BASE_REGS +  0x008)
#define JOY0DAT_ADDR    (BASE_REGS +  0x00A)
#define JOY1DAT_ADDR    (BASE_REGS +  0x00C)
#define CLXDAT_ADDR    (BASE_REGS +  0x00E)
#define ADKCONR_ADDR    (BASE_REGS +  0x010)
#define POT0DAT_ADDR    (BASE_REGS +  0x012)
#define POT1DAT_ADDR    (BASE_REGS +  0x014)
#define POTINP_ADDR    (BASE_REGS +  0x016)
#define SERDATR_ADDR    (BASE_REGS +  0x018)
#define DSKBYTR_ADDR    (BASE_REGS +  0x01A)
#define INTENAR_ADDR    (BASE_REGS +  0x01C)
#define INTREQR_ADDR    (BASE_REGS +  0x01E)
#define DSKPTH_ADDR    (BASE_REGS +  0x020)
#define DSKPTL_ADDR    (BASE_REGS +  0x022)
#define DSKLEN_ADDR    (BASE_REGS +  0x024)
#define DSKDAT_ADDR    (BASE_REGS +  0x026)
#define REFPTR_ADDR    (BASE_REGS +  0x028)
#define VPOSW_ADDR    (BASE_REGS +  0x02A)
#define VHPOSW_ADDR    (BASE_REGS +  0x02C)
#define COPCON_ADDR    (BASE_REGS +  0x02E)
#define SERDAT_ADDR    (BASE_REGS +  0x030)
#define SERPER_ADDR    (BASE_REGS +  0x032)
#define POTGO_ADDR    (BASE_REGS +  0x034)
#define JOYTEST_ADDR    (BASE_REGS +  0x036)
#define STREQU_ADDR    (BASE_REGS +  0x038)
#define STRVBL_ADDR    (BASE_REGS +  0x03A)
#define STRHOR_ADDR    (BASE_REGS +  0x03C)
#define STRLONG_ADDR    (BASE_REGS +  0x03E)
#define BLTCON0_ADDR    (BASE_REGS +  0x040)
#define BLTCON1_ADDR    (BASE_REGS +  0x042)
#define BLTAFWM_ADDR    (BASE_REGS +  0x044)
#define BLTALWM_ADDR    (BASE_REGS +  0x046)
#define BLTCPTH_ADDR    (BASE_REGS +  0x048)
#define BLTCPTL_ADDR    (BASE_REGS +  0x04A)
#define BLTBPTH_ADDR    (BASE_REGS +  0x04C)
#define BLTBPTL_ADDR    (BASE_REGS +  0x04E)
#define BLTAPTH_ADDR    (BASE_REGS +  0x050)
#define BLTAPTL_ADDR    (BASE_REGS +  0x052)
#define BLTDPTH_ADDR    (BASE_REGS +  0x054)
#define BLTDPTL_ADDR    (BASE_REGS +  0x056)
#define BLTSIZE_ADDR    (BASE_REGS +  0x058)
#define BLTCON0L_ADDR    (BASE_REGS +  0x05A)
#define BLTSIZV_ADDR    (BASE_REGS +  0x05C)
#define BLTSIZH_ADDR    (BASE_REGS +  0x05E)
#define BLTCMOD_ADDR    (BASE_REGS +  0x060)
#define BLTBMOD_ADDR    (BASE_REGS +  0x062)
#define BLTAMOD_ADDR    (BASE_REGS +  0x064)
#define BLTDMOD_ADDR    (BASE_REGS +  0x066)
#define BLTCDAT_ADDR    (BASE_REGS +  0x070)
#define BLTBDAT_ADDR    (BASE_REGS +  0x072)
#define BLTADAT_ADDR    (BASE_REGS +  0x074)
#define SPRHDAT_ADDR    (BASE_REGS +  0x078)
#define BPLHDAT_ADDR    (BASE_REGS +  0x07A)
#define DENISEID_ADDR    (BASE_REGS +  0x07C)
#define DSKSYNC_ADDR    (BASE_REGS +  0x07E)
#define COP1LCH_ADDR    (BASE_REGS +  0x080)
#define COP1LCL_ADDR    (BASE_REGS +  0x082)
#define COP2LCH_ADDR    (BASE_REGS +  0x084)
#define COP2LCL_ADDR    (BASE_REGS +  0x086)
#define COPJMP1_ADDR    (BASE_REGS +  0x088)
#define COPJMP2_ADDR    (BASE_REGS +  0x08A)
#define COPINS_ADDR    (BASE_REGS +  0x08C)
#define DIWSTRT_ADDR    (BASE_REGS +  0x08E)
#define DIWSTOP_ADDR    (BASE_REGS +  0x090)
#define DDFSTRT_ADDR    (BASE_REGS +  0x092)
#define DDFSTOP_ADDR    (BASE_REGS +  0x094)
#define DMACON_ADDR    (BASE_REGS +  0x096)
#define CLXCON_ADDR    (BASE_REGS +  0x098)
#define INTENA_ADDR    (BASE_REGS +  0x09A)
#define INTREQ_ADDR    (BASE_REGS +  0x09C)
#define ADKCON_ADDR    (BASE_REGS +  0x09E)
#define AUD0LCH_ADDR    (BASE_REGS +  0x0A0)
#define AUD0LCL_ADDR    (BASE_REGS +  0x0A2)
#define AUD0LEN_ADDR    (BASE_REGS +  0x0A4)
#define AUD0PER_ADDR    (BASE_REGS +  0x0A6)
#define AUD0VOL_ADDR    (BASE_REGS +  0x0A8)
#define AUD0DAT_ADDR    (BASE_REGS +  0x0AA)
#define AUD1LCH_ADDR    (BASE_REGS +  0x0B0)
#define AUD1LCL_ADDR    (BASE_REGS +  0x0B2)
#define AUD1LEN_ADDR    (BASE_REGS +  0x0B4)
#define AUD1PER_ADDR    (BASE_REGS +  0x0B6)
#define AUD1VOL_ADDR    (BASE_REGS +  0x0B8)
#define AUD1DAT_ADDR    (BASE_REGS +  0x0BA)
#define AUD2LCH_ADDR    (BASE_REGS +  0x0C0)
#define AUD2LCL_ADDR    (BASE_REGS +  0x0C2)
#define AUD2LEN_ADDR    (BASE_REGS +  0x0C4)
#define AUD2PER_ADDR    (BASE_REGS +  0x0C6)
#define AUD2VOL_ADDR    (BASE_REGS +  0x0C8)
#define AUD2DAT_ADDR    (BASE_REGS +  0x0CA)
#define AUD3LCH_ADDR    (BASE_REGS +  0x0D0)
#define AUD3LCL_ADDR    (BASE_REGS +  0x0D2)
#define AUD3LEN_ADDR    (BASE_REGS +  0x0D4)
#define AUD3PER_ADDR    (BASE_REGS +  0x0D6)
#define AUD3VOL_ADDR    (BASE_REGS +  0x0D8)
#define AUD3DAT_ADDR    (BASE_REGS +  0x0DA)
#define BPL1PTH_ADDR    (BASE_REGS +  0x0E0)
#define BPL1PTL_ADDR    (BASE_REGS +  0x0E2)
#define BPL2PTH_ADDR    (BASE_REGS +  0x0E4)
#define BPL2PTL_ADDR    (BASE_REGS +  0x0E6)
#define BPL3PTH_ADDR    (BASE_REGS +  0x0E8)
#define BPL3PTL_ADDR    (BASE_REGS +  0x0EA)
#define BPL4PTH_ADDR    (BASE_REGS +  0x0EC)
#define BPL4PTL_ADDR    (BASE_REGS +  0x0EE)
#define BPL5PTH_ADDR    (BASE_REGS +  0x0F0)
#define BPL5PTL_ADDR    (BASE_REGS +  0x0F2)
#define BPL6PTH_ADDR    (BASE_REGS +  0x0F4)
#define BPL6PTL_ADDR    (BASE_REGS +  0x0F6)
#define BPL7PTH_ADDR    (BASE_REGS +  0x0F8)
#define BPL7PTL_ADDR    (BASE_REGS +  0x0FA)
#define BPL8PTH_ADDR    (BASE_REGS +  0x0FC)
#define BPL8PTL_ADDR    (BASE_REGS +  0x0FE)
#define BPLCON0_ADDR    (BASE_REGS +  0x100)
#define BPLCON1_ADDR    (BASE_REGS +  0x102)
#define BPLCON2_ADDR    (BASE_REGS +  0x104)
#define BPLCON3_ADDR    (BASE_REGS +  0x106)
#define BPL1MOD_ADDR    (BASE_REGS +  0x108)
#define BPL2MOD_ADDR    (BASE_REGS +  0x10A)
#define BPLCON4_ADDR    (BASE_REGS +  0x10C)
#define CLXCON2_ADDR    (BASE_REGS +  0x10E)
#define BPL1DAT_ADDR    (BASE_REGS +  0x110)
#define BPL2DAT_ADDR    (BASE_REGS +  0x112)
#define BPL3DAT_ADDR    (BASE_REGS +  0x114)
#define BPL4DAT_ADDR    (BASE_REGS +  0x116)
#define BPL5DAT_ADDR    (BASE_REGS +  0x118)
#define BPL6DAT_ADDR    (BASE_REGS +  0x11A)
#define BPL7DAT_ADDR    (BASE_REGS +  0x11C)
#define BPL8DAT_ADDR    (BASE_REGS +  0x11E)
#define SPR0PTH_ADDR    (BASE_REGS +  0x120)
#define SPR0PTL_ADDR    (BASE_REGS +  0x122)
#define SPR1PTH_ADDR    (BASE_REGS +  0x124)
#define SPR1PTL_ADDR    (BASE_REGS +  0x126)
#define SPR2PTH_ADDR    (BASE_REGS +  0x128)
#define SPR2PTL_ADDR    (BASE_REGS +  0x12A)
#define SPR3PTH_ADDR    (BASE_REGS +  0x12C)
#define SPR3PTL_ADDR    (BASE_REGS +  0x12E)
#define SPR4PTH_ADDR    (BASE_REGS +  0x130)
#define SPR4PTL_ADDR    (BASE_REGS +  0x132)
#define SPR5PTH_ADDR    (BASE_REGS +  0x134)
#define SPR5PTL_ADDR    (BASE_REGS +  0x136)
#define SPR6PTH_ADDR    (BASE_REGS +  0x138)
#define SPR6PTL_ADDR    (BASE_REGS +  0x13A)
#define SPR7PTH_ADDR    (BASE_REGS +  0x13C)
#define SPR7PTL_ADDR    (BASE_REGS +  0x13E)
#define SPR0POS_ADDR    (BASE_REGS +  0x140)
#define SPR0CTL_ADDR    (BASE_REGS +  0x142)
#define SPR0DATA_ADDR    (BASE_REGS +  0x144)
#define SPR0DATB_ADDR    (BASE_REGS +  0x146)
#define SPR1POS_ADDR    (BASE_REGS +  0x148)
#define SPR1CTL_ADDR    (BASE_REGS +  0x14A)
#define SPR1DATA_ADDR    (BASE_REGS +  0x14C)
#define SPR1DATB_ADDR    (BASE_REGS +  0x14E)
#define SPR2POS_ADDR    (BASE_REGS +  0x150)
#define SPR2CTL_ADDR    (BASE_REGS +  0x152)
#define SPR2DATA_ADDR    (BASE_REGS +  0x154)
#define SPR2DATB_ADDR    (BASE_REGS +  0x156)
#define SPR3POS_ADDR    (BASE_REGS +  0x158)
#define SPR3CTL_ADDR    (BASE_REGS +  0x15A)
#define SPR3DATA_ADDR    (BASE_REGS +  0x15C)
#define SPR3DATB_ADDR    (BASE_REGS +  0x15E)
#define SPR4POS_ADDR    (BASE_REGS +  0x160)
#define SPR4CTL_ADDR    (BASE_REGS +  0x162)
#define SPR4DATA_ADDR    (BASE_REGS +  0x164)
#define SPR4DATB_ADDR    (BASE_REGS +  0x166)
#define SPR5POS_ADDR    (BASE_REGS +  0x168)
#define SPR5CTL_ADDR    (BASE_REGS +  0x16A)
#define SPR5DATA_ADDR    (BASE_REGS +  0x16C)
#define SPR5DATB_ADDR    (BASE_REGS +  0x16E)
#define SPR6POS_ADDR    (BASE_REGS +  0x170)
#define SPR6CTL_ADDR    (BASE_REGS +  0x172)
#define SPR6DATA_ADDR    (BASE_REGS +  0x174)
#define SPR6DATB_ADDR    (BASE_REGS +  0x176)
#define SPR7POS_ADDR    (BASE_REGS +  0x178)
#define SPR7CTL_ADDR    (BASE_REGS +  0x17A)
#define SPR7DATA_ADDR    (BASE_REGS +  0x17C)
#define SPR7DATB_ADDR    (BASE_REGS +  0x17E)
#define COLOR00_ADDR    (BASE_REGS +  0x180)
#define COLOR01_ADDR    (BASE_REGS +  0x182)
#define COLOR02_ADDR    (BASE_REGS +  0x184)
#define COLOR03_ADDR    (BASE_REGS +  0x186)
#define COLOR04_ADDR    (BASE_REGS +  0x188)
#define COLOR05_ADDR    (BASE_REGS +  0x18A)
#define COLOR06_ADDR    (BASE_REGS +  0x18C)
#define COLOR07_ADDR    (BASE_REGS +  0x18E)
#define COLOR08_ADDR    (BASE_REGS +  0x190)
#define COLOR09_ADDR    (BASE_REGS +  0x192)
#define COLOR10_ADDR    (BASE_REGS +  0x194)
#define COLOR11_ADDR    (BASE_REGS +  0x196)
#define COLOR12_ADDR    (BASE_REGS +  0x198)
#define COLOR13_ADDR    (BASE_REGS +  0x19A)
#define COLOR14_ADDR    (BASE_REGS +  0x19C)
#define COLOR15_ADDR    (BASE_REGS +  0x19E)
#define COLOR16_ADDR    (BASE_REGS +  0x1A0)
#define COLOR17_ADDR    (BASE_REGS +  0x1A2)
#define COLOR18_ADDR    (BASE_REGS +  0x1A4)
#define COLOR19_ADDR    (BASE_REGS +  0x1A6)
#define COLOR20_ADDR    (BASE_REGS +  0x1A8)
#define COLOR21_ADDR    (BASE_REGS +  0x1AA)
#define COLOR22_ADDR    (BASE_REGS +  0x1AC)
#define COLOR23_ADDR    (BASE_REGS +  0x1AE)
#define COLOR24_ADDR    (BASE_REGS +  0x1B0)
#define COLOR25_ADDR    (BASE_REGS +  0x1B2)
#define COLOR26_ADDR    (BASE_REGS +  0x1B4)
#define COLOR27_ADDR    (BASE_REGS +  0x1B6)
#define COLOR28_ADDR    (BASE_REGS +  0x1B8)
#define COLOR29_ADDR    (BASE_REGS +  0x1BA)
#define COLOR30_ADDR    (BASE_REGS +  0x1BC)
#define COLOR31_ADDR    (BASE_REGS +  0x1BE)
#define HTOTAL_ADDR    (BASE_REGS +  0x1C0)
#define HSSTOP_ADDR    (BASE_REGS +  0x1C2)
#define HBSTRT_ADDR    (BASE_REGS +  0x1C4)
#define HBSTOP_ADDR    (BASE_REGS +  0x1C6)
#define VTOTAL_ADDR    (BASE_REGS +  0x1C8)
#define VSSTOP_ADDR    (BASE_REGS +  0x1CA)
#define VBSTRT_ADDR    (BASE_REGS +  0x1CC)
#define VBSTOP_ADDR    (BASE_REGS +  0x1CE)
#define SPRHSTRT_ADDR    (BASE_REGS +  0x1D0)
#define SPRHSTOP_ADDR    (BASE_REGS +  0x1D2)
#define BPLHSTRT_ADDR    (BASE_REGS +  0x1D4)
#define BPLHSTOP_ADDR    (BASE_REGS +  0x1D6)
#define HHPOSW_ADDR    (BASE_REGS +  0x1D8)
#define HHPOSR_ADDR    (BASE_REGS +  0x1DA)
#define BEAMCON0_ADDR    (BASE_REGS +  0x1DC)
#define HSSTRT_ADDR    (BASE_REGS +  0x1DE)
#define VSSTRT_ADDR    (BASE_REGS +  0x1E0)
#define HCENTER_ADDR    (BASE_REGS +  0x1E2)
#define DIWHIGH_ADDR    (BASE_REGS +  0x1E4)
#define BPLHMOD_ADDR    (BASE_REGS +  0x1E6)
#define SPRHPTH_ADDR    (BASE_REGS +  0x1E8)
#define SPRHPTL_ADDR    (BASE_REGS +  0x1EA)
#define BPLHPTH_ADDR    (BASE_REGS +  0x1EC)
#define BPLHPTL_ADDR    (BASE_REGS +  0x1EE)
#define FMODE_ADDR    (BASE_REGS +  0x1FC)
#define NOOP_ADDR     (BASE_REGS + 0x1FE)

// DMA control bits
#define DMAEN  (1 << 9)  // Enables all those below
#define BPLEN  (1 << 8)
#define COPEN  (1 << 7)
#define BLTEN  (1 << 6)
#define SPREN  (1 << 5)
#define DSKEN  (1 << 4)
#define AUD3EN (1 << 3)
#define AUD2EN (1 << 2)
#define AUD1EN (1 << 1)
#define AUD0EN (1 << 0)


#define CIAA_PRA_ADDR (0xBFE001) // /FIR1 /FIR0 /RDY /TK0 /WPRO /CHNG /LED OVL
#define CIAA_PRB_ADDR (0xBFE101) // Parallel port
#define CIAA_DDRA_ADDR (0xBFE201) // Direction for port A (BFE001);1 output (set to 0x03)
#define CIAA_DDRB_ADDR (0xBFE301) // Direction for port B (BFE101);1 output (can be in/out)
#define CIAA_TALO_ADDR (0xBFE401) //CIAA timer A low byte (.715909 Mhz NTSC; .709379 Mhz PAL)
#define CIAA_TAHI_ADDR (0xBFE501) //CIAA timer A high byte
#define CIAA_TBLO_ADDR (0xBFE601) // CIAA timer B low byte (.715909 Mhz NTSC; .709379 Mhz PAL)
#define CIAA_TBHI_ADDR (0xBFE701) // CIAA timer B high byte
#define CIAA_TODLO_ADDR (0xBFE801) //50/60 Hz event counter bits 7-0 (VSync or line tick)
#define CIAA_TODMID_ADDR (0xBFE901) // 50/60 Hz event counter bits 15-8
#define CIAA_TODHI_ADDR (0xBFEA01) // 50/60 Hz event counter bits 23-16
#define CIAA_SDR_ADDR (0xBFEC01) // CIAA serial data register (connected to keyboard)
#define CIAA_ICR_ADDR (0xBFED01)  //CIAA interrupt control register
#define CIAA_CRS _ADDR (0xBFEE01) //CIAA control register A
#define CIAA_CRB_ADDR (0xBFEF01) //CIAA control register B


#define CIAB_PRA_ADDR (0xBFD000) // /DTR /RTS /CD /CTS /DSR SEL POUT BUSY
#define CIAB_PRB_ADDR (0xBFD100) // /MTR /SEL3 /SEL2 /SEL1 /SEL0 /SIDE DIR /STEP
#define CIAB_DDRA _ADDR (0xBFD200) // Direction for Port A (BFD000);1 = output (set to
#define CIAB_DDRB_ADDR (0xBFD300) // Direction for Port B (BFD100);1 - output (set to
#define CIAB_TALO_ADDR (0xBFD400) // CIAB timer A low byte (.715909 Mhz NTSC; .709379
#define CIAB_TAHI_ADDR (0xBFD500) // CIAB timer A high byte
#define CIAB_TBLO_ADDR (0xBFD600) // CIAB timer B low byte (.715909 Mhz NTSC; .709379
#define CIAB_TBHI_ADDR (0xBFD700) // CIAB timer B high byte
#define CIAB_TODLO_ADDR (0xBFD800) // Horizontal sync event counter bits 7-0
#define CIAB_TODMID_ADDR (0xBFD900) // Horizontal sync event counter bits 15-8
#define CIAB_TODHI_ADDR (0xBFDA00) //Horizontal sync event counter bits 23-16
#define CIAB_SDR_ADDR (0xBFDC00) // CIAB serial data register (unused)
#define CIAB_ICR_ADDR (0xBFDD00) // CIAB interrupt control register
#define CIAB_CRA_ADDR (0xBFDE00) // CIAB Control register A
#define CIAB_CRB_ADDR (0xBFDF00) // CIAB Control register B



// DMA control bits
#define CIAAPRA_OVL  0x01
#define CIAAPRA_LED  0x02
#define CIAAPRA_CHNG 0x04
#define CIAAPRA_WPRO 0x08
#define CIAAPRA_TK0  0x10
#define CIAAPRA_RDY  0x20
#define CIAAPRA_FIR0 0x40
#define CIAAPRA_FIR1 0x80

#define CIABPRB_STEP 0x01
#define CIABPRB_DIR  0x02
#define CIABPRB_SIDE 0x04
#define CIABPRB_SEL0 0x08
#define CIABPRB_SEL1 0x10
#define CIABPRB_SEL2 0x20
#define CIABPRB_SEL3 0x40
#define CIABPRB_MTR  0x80

#define CIAICR_TIMER_A 0x01
#define CIAICR_TIMER_B 0x02
#define CIAICR_TOD     0x04
#define CIAICR_SERIAL  0x08
#define CIAICR_FLAG    0x10
#define CIAICR_SETCLR  0x80

#define CIACRA_START   0x01
#define CIACRA_PBON    0x02
#define CIACRA_OUTMODE 0x04
#define CIACRA_RUNMODE 0x08
#define CIACRA_LOAD    0x10
#define CIACRA_INMODE  0x20
#define CIACRA_SPMODE  0x40

#define CIACRB_START   0x01
#define CIACRB_PBON    0x02
#define CIACRB_OUTMODE 0x04
#define CIACRB_RUNMODE 0x08
#define CIACRB_LOAD    0x10
#define CIACRB_INMODE  0x60
#define CIACRB_ALARM   0x80

#endif // CUSTOM_REGS_H



