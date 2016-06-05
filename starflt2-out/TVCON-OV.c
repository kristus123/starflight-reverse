// ====== OVERLAY 'TVCON-OV' ======

#include"cpu.h"

// store offset = 0xed50
// overlay size   = 0x0810

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xed9e  codep:0x224c parp:0xed9e size:0x0006 C-string:'UNK_0xed9e'
// 1870:      UNK_0xeda6  codep:0x224c parp:0xeda6 size:0x0006 C-string:'UNK_0xeda6'
// 1871:      UNK_0xedae  codep:0x224c parp:0xedae size:0x000a C-string:'UNK_0xedae'
// 1872:      UNK_0xedba  codep:0x224c parp:0xedba size:0x0008 C-string:'UNK_0xedba'
// 1873:      UNK_0xedc4  codep:0x7420 parp:0xedc4 size:0x0003 C-string:'UNK_0xedc4'
// 1874:      UNK_0xedc9  codep:0x7394 parp:0xedc9 size:0x0006 C-string:'UNK_0xedc9'
// 1875:      UNK_0xedd1  codep:0x7420 parp:0xedd1 size:0x0003 C-string:'UNK_0xedd1'
// 1876:      UNK_0xedd6  codep:0x7420 parp:0xedd6 size:0x000d C-string:'UNK_0xedd6'
// 1877:          ?ETIME  codep:0x224c parp:0xedee size:0x002a C-string:'_ask_ETIME'
// 1878:      UNK_0xee1a  codep:0x224c parp:0xee1a size:0x003c C-string:'UNK_0xee1a'
// 1879:      UNK_0xee58  codep:0x224c parp:0xee58 size:0x0040 C-string:'UNK_0xee58'
// 1880:      UNK_0xee9a  codep:0x224c parp:0xee9a size:0x002a C-string:'UNK_0xee9a'
// 1881:          %STORM  codep:0x1d29 parp:0xeecf size:0x0005 C-string:'_pe_STORM'
// 1882:         ?.STORM  codep:0x224c parp:0xeee0 size:0x001c C-string:'_ask__dot_STORM'
// 1883:      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x0028 C-string:'UNK_0xeefe'
// 1884:        DO-STORM  codep:0x224c parp:0xef33 size:0x006e C-string:'DO_dash_STORM'
// 1885:      UNK_0xefa3  codep:0x224c parp:0xefa3 size:0x0004 C-string:'UNK_0xefa3'
// 1886:      UNK_0xefa9  codep:0x224c parp:0xefa9 size:0x0006 C-string:'UNK_0xefa9'
// 1887:      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x0008 C-string:'UNK_0xefb1'
// 1888:      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x0014 C-string:'UNK_0xefbb'
// 1889:      UNK_0xefd1  codep:0x224c parp:0xefd1 size:0x0030 C-string:'UNK_0xefd1'
// 1890:      UNK_0xf003  codep:0x224c parp:0xf003 size:0x0008 C-string:'UNK_0xf003'
// 1891:      UNK_0xf00d  codep:0x224c parp:0xf00d size:0x0060 C-string:'UNK_0xf00d'
// 1892:      UNK_0xf06f  codep:0x224c parp:0xf06f size:0x003e C-string:'UNK_0xf06f'
// 1893:            FADE  codep:0x224c parp:0xf0b6 size:0x002a C-string:'FADE'
// 1894:      UNK_0xf0e2  codep:0x224c parp:0xf0e2 size:0x002a C-string:'UNK_0xf0e2'
// 1895:       .STARDATE  codep:0x224c parp:0xf11a size:0x0090 C-string:'_dot_STARDATE'
// 1896:      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x0016 C-string:'UNK_0xf1ac'
// 1897:      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0018 C-string:'UNK_0xf1c4'
// 1898:      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x0008 C-string:'UNK_0xf1de'
// 1899:      UNK_0xf1e8  codep:0x224c parp:0xf1e8 size:0x00e4 C-string:'UNK_0xf1e8'
// 1900:      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0026 C-string:'UNK_0xf2ce'
// 1901:      UNK_0xf2f6  codep:0x224c parp:0xf2f6 size:0x0034 C-string:'UNK_0xf2f6'
// 1902:      UNK_0xf32c  codep:0x224c parp:0xf32c size:0x002c C-string:'UNK_0xf32c'
// 1903:         .ENERGY  codep:0x224c parp:0xf364 size:0x00a5 C-string:'_dot_ENERGY'
// 1904:          .CARGO  codep:0x224c parp:0xf414 size:0x003b C-string:'_dot_CARGO'
// 1905:      UNK_0xf451  codep:0x224c parp:0xf451 size:0x0026 C-string:'UNK_0xf451'
// 1906:      UNK_0xf479  codep:0x224c parp:0xf479 size:0x0022 C-string:'UNK_0xf479'
// 1907:      UNK_0xf49d  codep:0x224c parp:0xf49d size:0x0022 C-string:'UNK_0xf49d'
// 1908:          .WHERE  codep:0x224c parp:0xf4ca size:0x0044 C-string:'_dot_WHERE'
// 1909:       .DISTANCE  codep:0x224c parp:0xf51c size:0x0006 C-string:'_dot_DISTANCE'
// 1910:          .STATS  codep:0x224c parp:0xf52d size:0x0033 C-string:'_dot_STATS'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char _pe_STORM[5] = {0x00, 0x14, 0x28, 0x3c, 0x55}; // %STORM



// 0xed62: db 0x81 0x00 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x4c 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x7f 0x3b 0x8c 0x21 0x32 0x6d 0x90 0x16 0x4c 0x22 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x90 0x16 '  L"  >         L"  L~  L" "; !2m  L"  =  K  L"  ] d  K  '

// ================================================
// 0xed9c: WORD 'UNK_0xed9e' codep=0x224c parp=0xed9e
// ================================================

void UNK_0xed9e() // UNK_0xed9e
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xeda4: WORD 'UNK_0xeda6' codep=0x224c parp=0xeda6
// ================================================

void UNK_0xeda6() // UNK_0xeda6
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xedac: WORD 'UNK_0xedae' codep=0x224c parp=0xedae
// ================================================

void UNK_0xedae() // UNK_0xedae
{
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
}


// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x224c parp=0xedba
// ================================================

void UNK_0xedba() // UNK_0xedba
{
  UNK_0xeda6(); // UNK_0xeda6
  UNK_0xedae(); // UNK_0xedae
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x7420 parp=0xedc4
// ================================================
// 0xedc4: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xedc7: WORD 'UNK_0xedc9' codep=0x7394 parp=0xedc9
// ================================================
// 0xedc9: db 0x20 0x11 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedcf: WORD 'UNK_0xedd1' codep=0x7420 parp=0xedd1
// ================================================
// 0xedd1: db 0x11 0x17 0x03 '   '

// ================================================
// 0xedd4: WORD 'UNK_0xedd6' codep=0x7420 parp=0xedd6
// ================================================
// 0xedd6: db 0x10 0x1b 0x01 0x20 0x74 0x10 0x20 0x02 0x20 0x74 0x10 0x1f 0x01 '    t    t   '

// ================================================
// 0xede3: WORD '?ETIME' codep=0x224c parp=0xedee
// ================================================

void _ask_ETIME() // ?ETIME
{
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  Push(0x03e8);
  M_star_(); // M*
  D_plus_(); // D+
  D_gt_(); // D>
  if (Pop() == 0) return;
  Push(0xceb6);
  MODULE(); // MODULE
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x224c parp=0xee1a
// ================================================

void UNK_0xee1a() // UNK_0xee1a
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(0); // 0
  Push(0); // 0
  return;

  label1:
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  DUP(); // DUP
  if (Pop() == 0) goto label2;
  DUP(); // DUP
  ABS(); // ABS
  _slash_(); // /

  label2:
  _gt_R(); // >R
  _dash_(); // -
  DUP(); // DUP
  if (Pop() == 0) goto label3;
  DUP(); // DUP
  ABS(); // ABS
  _slash_(); // /

  label3:
  R_gt_(); // R>
}


// ================================================
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58
// ================================================

void UNK_0xee58() // UNK_0xee58
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  DUP(); // DUP
  Push(cc__7); // 7
  Push(0x000a);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(cc__7); // 7
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0xc014);
  MODULE(); // MODULE

  label2:
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee98: WORD 'UNK_0xee9a' codep=0x224c parp=0xee9a
// ================================================

void UNK_0xee9a() // UNK_0xee9a
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(pp__i_INJURE); // 'INJURE
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xeec4: WORD '%STORM' codep=0x1d29 parp=0xeecf
// ================================================
// 0xeecf: db 0x00 0x14 0x28 0x3c 0x55 '  (<U'

// ================================================
// 0xeed4: WORD '?.STORM' codep=0x224c parp=0xeee0
// ================================================

void _ask__dot_STORM() // ?.STORM
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _gt_(); // >
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  UNK_0xed9e(); // UNK_0xed9e
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdc0);
  MODULE(); // MODULE
}


// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe
// ================================================

void UNK_0xeefe() // UNK_0xeefe
{
  Push(1); // 1
  UNK_0xedc9(); // UNK_0xedc9
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Push(pp_STORM); // STORM
  _ex_(); // !
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef26: WORD 'DO-STORM' codep=0x224c parp=0xef33
// ================================================

void DO_dash_STORM() // DO-STORM
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(cc__dash_1); // -1
  Push(pp_STORM); // STORM
  _plus__ex_(); // +!
  _ask__dot_STORM(); // ?.STORM
  goto label5;

  label2:
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xedc9(); // UNK_0xedc9
  Push(Read16(Pop())); // @
  Push(pp__pe_STORM); // %STORM
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  if (Pop() == 0) goto label3;
  Push(pp__i_STORM); // 'STORM
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  goto label4;

  label3:
  Push(1); // 1
  Push(cc__4); // 4
  RRND(); // RRND
  Push(pp__n_STORM); // #STORM
  _ex_(); // !
  Push(0xcdc0);
  MODULE(); // MODULE
  UNK_0xeefe(); // UNK_0xeefe

  label4:
  ICLOSE(); // ICLOSE

  label5:
  UNK_0xee9a(); // UNK_0xee9a
  return;

  label1:
  Push(pp__n_STORM); // #STORM
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xefa1: WORD 'UNK_0xefa3' codep=0x224c parp=0xefa3
// ================================================

void UNK_0xefa3() // UNK_0xefa3
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xefa7: WORD 'UNK_0xefa9' codep=0x224c parp=0xefa9
// ================================================

void UNK_0xefa9() // UNK_0xefa9
{
  Push(pp_STAGES); // STAGES
  Push(Pop()+2); // 2+
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  Push(pp_STAGES); // STAGES
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(pp_STAGES); // STAGES
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
}

// 0xefc3: db 0x4c 0x22 0x5a 0x62 0x5d 0x17 0x0a 0x00 0x72 0x0f 0x90 0x16 'L"Zb]   r   '

// ================================================
// 0xefcf: WORD 'UNK_0xefd1' codep=0x224c parp=0xefd1
// ================================================

void UNK_0xefd1() // UNK_0xefd1
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  ON(); // ON
  SAVE_dash_OV(); // SAVE-OV

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf001: WORD 'UNK_0xf003' codep=0x224c parp=0xf003
// ================================================

void UNK_0xf003() // UNK_0xf003
{
  Push(0xc5da);
  MODULE(); // MODULE
}


// ================================================
// 0xf00b: WORD 'UNK_0xf00d' codep=0x224c parp=0xf00d
// ================================================

void UNK_0xf00d() // UNK_0xf00d
{
  UNK_0xefa3(); // UNK_0xefa3
  _0_dot_(); // 0.
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() == 0) goto label1;
  Push(1); // 1
  UNK_0xf003(); // UNK_0xf003

  label1:
  UNK_0xefa9(); // UNK_0xefa9
  Push(0xbff4); Pust(0x0000);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() == 0) goto label2;
  Push(2); // 2
  UNK_0xf003(); // UNK_0xf003

  label2:
  UNK_0xefb1(); // UNK_0xefb1
  Push(0x7fe8); Pust(0x0001);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() == 0) goto label3;
  Push(cc__4); // 4
  UNK_0xf003(); // UNK_0xf003

  label3:
  UNK_0xefbb(); // UNK_0xefbb
  Push(0xffe0); Pust(0x0001);
  UNK_0xefd1(); // UNK_0xefd1
  if (Pop() == 0) return;
  Push(cc__5); // 5
  UNK_0xf003(); // UNK_0xf003
}

// 0xf053: db 0x4c 0x22 0x34 0x75 0x89 0x12 0xd9 0xed 0xae 0x0b 0x2e 0x0f 0xf5 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x53 0xf0 0x3e 0x13 0x90 0x16 'L"4u      .       L"S >   '

// ================================================
// 0xf06d: WORD 'UNK_0xf06f' codep=0x224c parp=0xf06f
// ================================================

void UNK_0xf06f() // UNK_0xf06f
{
  Push(0); // 0
  _star_PERSON(); // *PERSON
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf067);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xf083: db 0x4c 0x22 0x53 0xf0 0xfa 0x15 0x22 0x00 0x5d 0x17 0x10 0x00 0xd9 0xed 0x16 0x6d 0x20 0x0f 0xde 0xed 0x0a 0x6d 0x5d 0x17 0x8b 0xc1 0xd9 0x84 0x5d 0x17 0xb8 0xc1 0xd9 0x84 0x20 0x0f 0xd9 0xed 0x16 0x6d 0x90 0x16 'L"S   " ]      m     m]     ]          m  '

// ================================================
// 0xf0ad: WORD 'FADE' codep=0x224c parp=0xf0b6
// ================================================

void FADE() // FADE
{
  _gt_TVCT(); // >TVCT
  Push(cc__6); // 6
  Push(0xc5da);
  MODULE(); // MODULE
  NULL(); // NULL
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!
  Push(0x0fa0);
  MS(); // MS
  _star_PERSON(); // *PERSON
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf085);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  _dot_VIT(); // .VIT
}


// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x224c parp=0xf0e2
// ================================================

void UNK_0xf0e2() // UNK_0xf0e2
{
  UNK_0xf06f(); // UNK_0xf06f
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x3fdc); Pust(0x0002);
  D_gt_(); // D>
  if (Pop() == 0) return;
  FADE(); // FADE
}


// ================================================
// 0xf10c: WORD '.STARDATE' codep=0x224c parp=0xf11a
// ================================================

void _dot_STARDATE() // .STARDATE
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x121f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  DUP(); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label2;
  PRINT("0", 1); // (.")

  label2:
  Push(0); // 0
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  DUP(); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label3;
  PRINT("0", 1); // (.")

  label3:
  Push(0); // 0
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  goto label4;

  label1:
  PRINT(" ????", 5); // (.")

  label4:
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  UNK_0xee58(); // UNK_0xee58
  _ask_ETIME(); // ?ETIME
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(cc__4); // 4
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xedd1(); // UNK_0xedd1
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xedd6(); // UNK_0xedd6
  C_at_(); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  UNK_0xf1ac(); // UNK_0xf1ac
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1e6: WORD 'UNK_0xf1e8' codep=0x224c parp=0xf1e8
// ================================================

void UNK_0xf1e8() // UNK_0xf1e8
{
  Push(0); // 0
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  PRINT("NORTH", 5); // (.")
  return;

  label1:
  Push(1); // 1
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
  PRINT("NORTHEAST", 9); // (.")
  return;

  label2:
  Push(1); // 1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  PRINT("EAST", 4); // (.")
  return;

  label3:
  Push(1); // 1
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label4;
  Pop(); Pop();// 2DROP
  PRINT("SOUTHEAST", 9); // (.")
  return;

  label4:
  Push(0); // 0
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label5;
  Pop(); Pop();// 2DROP
  PRINT("SOUTH", 5); // (.")
  return;

  label5:
  Push(cc__dash_1); // -1
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label6;
  Pop(); Pop();// 2DROP
  PRINT("SOUTHWEST", 9); // (.")
  return;

  label6:
  Push(cc__dash_1); // -1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label7;
  Pop(); Pop();// 2DROP
  PRINT("WEST", 4); // (.")
  return;

  label7:
  Push(cc__dash_1); // -1
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label8;
  Pop(); Pop();// 2DROP
  PRINT("NORTHWEST", 9); // (.")
  return;

  label8:
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xedba(); // UNK_0xedba
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  DUP(); // DUP
  U_star_(); // U*
  ROT(); // ROT
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  DUP(); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf2f4: WORD 'UNK_0xf2f6' codep=0x224c parp=0xf2f6
// ================================================

void UNK_0xf2f6() // UNK_0xf2f6
{
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(cc__8); // 8
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() == 0) goto label1;
  UNK_0xf2ce(); // UNK_0xf2ce
  Push(cc__5); // 5
  _dot_R(); // .R
  PRINT("KM.", 3); // (.")
  return;

  label1:
  PRINT("LOST!", 5); // (.")
}


// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c() // UNK_0xf32c
{
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(0x0009);
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() == 0) return;
  UNK_0xedba(); // UNK_0xedba
  UNK_0xedae(); // UNK_0xedae
  ICLOSE(); // ICLOSE
  UNK_0xee1a(); // UNK_0xee1a
  _2SWAP(); // 2SWAP
  Pop(); Pop();// 2DROP
  UNK_0xf1e8(); // UNK_0xf1e8
}


// ================================================
// 0xf358: WORD '.ENERGY' codep=0x224c parp=0xf364
// ================================================

void _dot_ENERGY() // .ENERGY
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(cc__7); // 7
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  UNK_0xeda6(); // UNK_0xeda6
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _ask_DUP(); // ?DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  YELLOW(); // YELLOW
  _ex_COLOR(); // !COLOR
  PRINT("NONE", 4); // (.")
  return;

  label1:
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0x07d0);
  _dash_(); // -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  DUP(); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  PINK(); // PINK
  _ex_COLOR(); // !COLOR
  PRINT("RESERVE", 7); // (.")
  _ex_COLOR(); // !COLOR
  goto label3;

  label2:
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")

  label3:
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf409: WORD '.CARGO' codep=0x224c parp=0xf414
// ================================================

void _dot_CARGO() // .CARGO
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xedc4(); // UNK_0xedc4
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  MAX(); // MAX
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf44f: WORD 'UNK_0xf451' codep=0x224c parp=0xf451
// ================================================

void UNK_0xf451() // UNK_0xf451
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xf477: WORD 'UNK_0xf479' codep=0x224c parp=0xf479
// ================================================

void UNK_0xf479() // UNK_0xf479
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("W", 1); // (.")
  goto label3;

  label2:
  PRINT("E", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf49b: WORD 'UNK_0xf49d' codep=0x224c parp=0xf49d
// ================================================

void UNK_0xf49d() // UNK_0xf49d
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("S", 1); // (.")
  goto label3;

  label2:
  PRINT("N", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf4bf: WORD '.WHERE' codep=0x224c parp=0xf4ca
// ================================================

void _dot_WHERE() // .WHERE
{
  UNK_0xf1de(); // UNK_0xf1de
  if (Pop() == 0) return;
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  UNK_0xedba(); // UNK_0xedba
  UNK_0xf451(); // UNK_0xf451
  DUP(); // DUP
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Push(-Pop()); // NEGATE

  label1:
  Push(cc__4); // 4
  _dot_R(); // .R
  UNK_0xf49d(); // UNK_0xf49d
  PRINT(" * ", 3); // (.")
  DUP(); // DUP
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  Push(0); // 0
  _dot_R(); // .R
  UNK_0xf479(); // UNK_0xf479
}


// ================================================
// 0xf50e: WORD '.DISTANCE' codep=0x224c parp=0xf51c
// ================================================

void _dot_DISTANCE() // .DISTANCE
{
  UNK_0xf2f6(); // UNK_0xf2f6
  UNK_0xf32c(); // UNK_0xf32c
}


// ================================================
// 0xf522: WORD '.STATS' codep=0x224c parp=0xf52d
// ================================================

void _dot_STATS() // .STATS
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xf0e2(); // UNK_0xf0e2
  UNK_0xf00d(); // UNK_0xf00d

  label1:
  _dot_STARDATE(); // .STARDATE
  _dot_WHERE(); // .WHERE
  _dot_ENERGY(); // .ENERGY
  _dot_CARGO(); // .CARGO
  _dot_DISTANCE(); // .DISTANCE
  R_gt_(); // R>
  Push(pp_XORMODE); // XORMODE
  _ex_(); // !
}

// 0xf557: db 0x54 0x56 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x00 'TVCON-V__ '
  