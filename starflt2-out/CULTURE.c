// ====== OVERLAY 'CULTURE' ======

#include"cpu.h"

// store offset = 0xef40
// overlay size   = 0x0620

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb04b C-string:'UNK_0x3f09'
// 1870:      UNK_0xef56  codep:0x224c parp:0xef56 size:0x0040 C-string:'UNK_0xef56'
// 1871:      UNK_0xef98  codep:0x7394 parp:0xef98 size:0x0006 C-string:'UNK_0xef98'
// 1872:      UNK_0xefa0  codep:0x7394 parp:0xefa0 size:0x0006 C-string:'UNK_0xefa0'
// 1873:      UNK_0xefa8  codep:0x7394 parp:0xefa8 size:0x0006 C-string:'UNK_0xefa8'
// 1874:      UNK_0xefb0  codep:0x7394 parp:0xefb0 size:0x0006 C-string:'UNK_0xefb0'
// 1875:        ATTITUDE  codep:0x7394 parp:0xefc3 size:0x0006 C-string:'ATTITUDE'
// 1876:      UNK_0xefcb  codep:0x7394 parp:0xefcb size:0x0006 C-string:'UNK_0xefcb'
// 1877:      UNK_0xefd3  codep:0x7394 parp:0xefd3 size:0x0006 C-string:'UNK_0xefd3'
// 1878:      UNK_0xefdb  codep:0x7394 parp:0xefdb size:0x0006 C-string:'UNK_0xefdb'
// 1879:      UNK_0xefe3  codep:0x7394 parp:0xefe3 size:0x0006 C-string:'UNK_0xefe3'
// 1880:      UNK_0xefeb  codep:0x7394 parp:0xefeb size:0x0006 C-string:'UNK_0xefeb'
// 1881:      UNK_0xeff3  codep:0x7394 parp:0xeff3 size:0x0006 C-string:'UNK_0xeff3'
// 1882:      UNK_0xeffb  codep:0x7394 parp:0xeffb size:0x000e C-string:'UNK_0xeffb'
// 1883:      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x000a C-string:'UNK_0xf00b'
// 1884:      UNK_0xf017  codep:0x224c parp:0xf017 size:0x000a C-string:'UNK_0xf017'
// 1885:      UNK_0xf023  codep:0x224c parp:0xf023 size:0x0044 C-string:'UNK_0xf023'
// 1886:            >ECO  codep:0x4b3b parp:0xf070 size:0x0010 C-string:'_gt_ECO'
// 1887:      UNK_0xf082  codep:0x224c parp:0xf082 size:0x001e C-string:'UNK_0xf082'
// 1888:      UNK_0xf0a2  codep:0x224c parp:0xf0a2 size:0x0006 C-string:'UNK_0xf0a2'
// 1889:      UNK_0xf0aa  codep:0x224c parp:0xf0aa size:0x0008 C-string:'UNK_0xf0aa'
// 1890:      UNK_0xf0b4  codep:0x224c parp:0xf0b4 size:0x0006 C-string:'UNK_0xf0b4'
// 1891:      UNK_0xf0bc  codep:0x224c parp:0xf0bc size:0x001e C-string:'UNK_0xf0bc'
// 1892:      UNK_0xf0dc  codep:0x224c parp:0xf0dc size:0x0030 C-string:'UNK_0xf0dc'
// 1893:      UNK_0xf10e  codep:0x224c parp:0xf10e size:0x0089 C-string:'UNK_0xf10e'
// 1894:      UNK_0xf199  codep:0x224c parp:0xf199 size:0x0020 C-string:'UNK_0xf199'
// 1895:      UNK_0xf1bb  codep:0x224c parp:0xf1bb size:0x0041 C-string:'UNK_0xf1bb'
// 1896:          >EXTRA  codep:0x4b3b parp:0xf207 size:0x000c C-string:'_gt_EXTRA'
// 1897:           .RACE  codep:0x224c parp:0xf21d size:0x00e9 C-string:'_dot_RACE'
// 1898:           >TECH  codep:0x4b3b parp:0xf310 size:0x0014 C-string:'_gt_TECH'
// 1899:      UNK_0xf326  codep:0x224c parp:0xf326 size:0x001f C-string:'UNK_0xf326'
// 1900:          >DENSE  codep:0x4b3b parp:0xf350 size:0x0014 C-string:'_gt_DENSE'
// 1901:      UNK_0xf366  codep:0x224c parp:0xf366 size:0x0027 C-string:'UNK_0xf366'
// 1902:            >ATT  codep:0x4b3b parp:0xf396 size:0x0014 C-string:'_gt_ATT'
// 1903:      UNK_0xf3ac  codep:0x224c parp:0xf3ac size:0x0022 C-string:'UNK_0xf3ac'
// 1904:      UNK_0xf3d0  codep:0x224c parp:0xf3d0 size:0x0040 C-string:'UNK_0xf3d0'
// 1905:      UNK_0xf412  codep:0x224c parp:0xf412 size:0x0030 C-string:'UNK_0xf412'
// 1906:      UNK_0xf444  codep:0x224c parp:0xf444 size:0x00a0 C-string:'UNK_0xf444'
// 1907:        .CULTURE  codep:0x224c parp:0xf4f1 size:0x006f C-string:'_dot_CULTURE'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xef52: db 0x61 0x00 'a '

// ================================================
// 0xef54: WORD 'UNK_0xef56' codep=0x224c parp=0xef56
// ================================================

void UNK_0xef56() // UNK_0xef56
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  if (Pop() == 0) goto label1;
  PINK(); // PINK
  goto label5;

  label1:
  BLUE(); // BLUE

  label5:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN

  label2:
  _i_KEY(); // 'KEY
  if (Pop() == 0) goto label2;
  R_gt_(); // R>
  if (Pop() == 0) goto label3;
  RED(); // RED
  goto label4;

  label3:
  DK_dash_BLUE(); // DK-BLUE

  label4:
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}

// 0xef92: db 0x14 0x22 0x15 0x00 ' "  '

// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x7394 parp=0xef98
// ================================================
// 0xef98: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x7394 parp=0xefa0
// ================================================
// 0xefa0: db 0x15 0x13 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefa6: WORD 'UNK_0xefa8' codep=0x7394 parp=0xefa8
// ================================================
// 0xefa8: db 0x15 0x14 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefae: WORD 'UNK_0xefb0' codep=0x7394 parp=0xefb0
// ================================================
// 0xefb0: db 0x15 0x15 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefb6: WORD 'ATTITUDE' codep=0x7394 parp=0xefc3
// ================================================
// 0xefc3: db 0x15 0x16 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x7394 parp=0xefcb
// ================================================
// 0xefcb: db 0x15 0x17 0x03 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefd1: WORD 'UNK_0xefd3' codep=0x7394 parp=0xefd3
// ================================================
// 0xefd3: db 0x15 0x1d 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x7394 parp=0xefdb
// ================================================
// 0xefdb: db 0x15 0x1f 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefe1: WORD 'UNK_0xefe3' codep=0x7394 parp=0xefe3
// ================================================
// 0xefe3: db 0x15 0x20 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x7394 parp=0xefeb
// ================================================
// 0xefeb: db 0x15 0x21 0x01 0x32 0xd1 0x6a ' ! 2 j'

// ================================================
// 0xeff1: WORD 'UNK_0xeff3' codep=0x7394 parp=0xeff3
// ================================================
// 0xeff3: db 0x15 0x22 0x01 0x32 0xd1 0x6a ' " 2 j'

// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x7394 parp=0xeffb
// ================================================
// 0xeffb: db 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x29 0x01 0x32 0xd1 0x6a ' # 2 j s ) 2 j'

// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf015: WORD 'UNK_0xf017' codep=0x224c parp=0xf017
// ================================================

void UNK_0xf017() // UNK_0xf017
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  LT_dash_BLUE(); // LT-BLUE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf021: WORD 'UNK_0xf023' codep=0x224c parp=0xf023
// ================================================

void UNK_0xf023() // UNK_0xf023
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}

// 0xf029: db 0x94 0x73 0x44 0x00 0x14 0x22 0x07 0x6f 0x4c 0x22 0x07 0x3f 0x09 0x44 0x45 0x50 0x52 0x45 0x53 0x53 0x45 0x44 0x90 0x16 0x4c 0x22 0x07 0x3f 0x05 0x4c 0x45 0x56 0x45 0x4c 0x90 0x16 0x4c 0x22 0x07 0x3f 0x08 0x49 0x4e 0x46 0x4c 0x41 0x54 0x45 0x44 0x90 0x16 0x4c 0x22 0x07 0x3f 0x04 0x4e 0x4f 0x4e 0x45 0x90 0x16 ' sD  " oL" ? DEPRESSED  L" ? LEVEL  L" ? INFLATED  L" ? NONE  '

// ================================================
// 0xf067: WORD '>ECO' codep=0x4b3b parp=0xf070
// ================================================
// 0xf070: db 0x03 0x00 0x5e 0xf0 0x01 0x00 0x33 0xf0 0x02 0x00 0x43 0xf0 0x03 0x00 0x4f 0xf0 '  ^   3   C   O '

// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex_(); // +!
  Push(pp_LINE_dash_CO); // LINE-CO
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xef56(); // UNK_0xef56
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xf0a0: WORD 'UNK_0xf0a2' codep=0x224c parp=0xf0a2
// ================================================

void UNK_0xf0a2() // UNK_0xf0a2
{
  UNK_0xf00b(); // UNK_0xf00b
  TYPE(); // TYPE
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  UNK_0xf082(); // UNK_0xf082
  _gt_BOTT(); // >BOTT
  WUP(); // WUP
}


// ================================================
// 0xf0b2: WORD 'UNK_0xf0b4' codep=0x224c parp=0xf0b4
// ================================================

void UNK_0xf0b4() // UNK_0xf0b4
{
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf0aa(); // UNK_0xf0aa
}


// ================================================
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc
// ================================================

void UNK_0xf0bc() // UNK_0xf0bc
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(0x001c);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  TYPE(); // TYPE
}


// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x224c parp=0xf0dc
// ================================================

void UNK_0xf0dc() // UNK_0xf0dc
{
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefeb(); // UNK_0xefeb
  C_at_(); // C@
  UNK_0xefa0(); // UNK_0xefa0
  C_at_(); // C@
  Push(2); // 2
  _gt_(); // >
  Push(Pop() | Pop()); // OR
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  Push(0x0044);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf10c: WORD 'UNK_0xf10e' codep=0x224c parp=0xf10e
// ================================================

void UNK_0xf10e() // UNK_0xf10e
{
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefd3(); // UNK_0xefd3
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  UNK_0xf0b4(); // UNK_0xf0b4
  UNK_0xf017(); // UNK_0xf017
  PRINT("WILL SELL (AT TRADING CENTER)", 29); // (.")
  UNK_0xf00b(); // UNK_0xf00b

  label1:
  UNK_0xefd3(); // UNK_0xefd3
  C_at_(); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xefdb(); // UNK_0xefdb
  C_at_(); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xefe3(); // UNK_0xefe3
  C_at_(); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xf0dc(); // UNK_0xf0dc
  if (Pop() == 0) goto label2;
  UNK_0xf0b4(); // UNK_0xf0b4
  UNK_0xf017(); // UNK_0xf017
  PRINT("WILL BUY (AT TRADING CENTER)", 28); // (.")
  UNK_0xf00b(); // UNK_0xf00b

  label2:
  UNK_0xefeb(); // UNK_0xefeb
  C_at_(); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xeff3(); // UNK_0xeff3
  C_at_(); // C@
  if (Pop() == 0) goto label3;
  PRINT("*", 1); // (.")

  label3:
  UNK_0xeffb(); // UNK_0xeffb
  C_at_(); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  UNK_0xf00b(); // UNK_0xf00b
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xefcb(); // UNK_0xefcb
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp__i__dot_HUFF); // '.HUFF
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xef56(); // UNK_0xef56
}


// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x224c parp=0xf1bb
// ================================================

void UNK_0xf1bb() // UNK_0xf1bb
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("ECONOMY: ", 9); // (.")
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefb0(); // UNK_0xefb0
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_ECO(); // >ECO
  UNK_0xf0a2(); // UNK_0xf0a2
}

// 0xf1d7: db 0x4c 0x22 0xdc 0x1b 0x0d 0x20 0x54 0x52 0x41 0x44 0x45 0x20 0x43 0x45 0x4e 0x54 0x45 0x52 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0a 0x20 0x44 0x57 0x45 0x4c 0x4c 0x49 0x4e 0x47 0x53 0x90 0x16 'L"    TRADE CENTER  L"    DWELLINGS  '

// ================================================
// 0xf1fc: WORD '>EXTRA' codep=0x4b3b parp=0xf207
// ================================================
// 0xf207: db 0x02 0x00 0x48 0x3a 0x1f 0x00 0xed 0xf1 0x21 0x00 0xd9 0xf1 '  H:    !   '

// ================================================
// 0xf213: WORD '.RACE' codep=0x224c parp=0xf21d
// ================================================

void _dot_RACE() // .RACE
{
  UNK_0xf023(); // UNK_0xf023
  UNK_0xef98(); // UNK_0xef98
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  UNK_0xf0a2(); // UNK_0xf0a2
  ICLOSE(); // ICLOSE
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  _at_INST_dash_C(); // @INST-C
  _gt_EXTRA(); // >EXTRA
}

// 0xf23b: db 0x4c 0x22 0x07 0x3f 0x06 0x53 0x50 0x41 0x52 0x53 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x05 0x44 0x45 0x4e 0x53 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0a 0x56 0x45 0x52 0x59 0x20 0x44 0x45 0x4e 0x53 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x09 0x53 0x54 0x4f 0x4e 0x45 0x20 0x41 0x47 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x09 0x4d 0x45 0x54 0x41 0x4c 0x20 0x45 0x52 0x41 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0a 0x49 0x4e 0x44 0x55 0x53 0x54 0x52 0x49 0x41 0x4c 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0b 0x53 0x50 0x41 0x43 0x45 0x46 0x41 0x52 0x49 0x4e 0x47 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0a 0x4e 0x4f 0x20 0x54 0x52 0x41 0x44 0x49 0x4e 0x47 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0c 0x4e 0x4f 0x20 0x42 0x41 0x52 0x54 0x45 0x52 0x49 0x4e 0x47 0x90 0x16 0x4c 0x22 0x07 0x3f 0x10 0x42 0x41 0x52 0x47 0x41 0x49 0x4e 0x20 0x41 0x20 0x4c 0x49 0x54 0x54 0x4c 0x45 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0d 0x42 0x41 0x52 0x47 0x41 0x49 0x4e 0x20 0x41 0x20 0x4c 0x4f 0x54 0x90 0x16 'L" ? SPARSE  L" ? MODERATE  L" ? DENSE  L" ? VERY DENSE  L" ? STONE AGE  L" ? METAL ERA  L" ? INDUSTRIAL  L" ? SPACEFARING  L" ? NO TRADING  L" ? NO BARTERING  L" ? BARGAIN A LITTLE  L" ? BARGAIN A LOT  '

// ================================================
// 0xf306: WORD '>TECH' codep=0x4b3b parp=0xf310
// ================================================
// 0xf310: db 0x04 0x00 0x5e 0xf0 0x01 0x00 0x76 0xf2 0x02 0x00 0x86 0xf2 0x03 0x00 0x96 0xf2 0x04 0x00 0xa7 0xf2 '  ^   v             '

// ================================================
// 0xf324: WORD 'UNK_0xf326' codep=0x224c parp=0xf326
// ================================================

void UNK_0xf326() // UNK_0xf326
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("TECH LEVEL: ", 12); // (.")
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefa0(); // UNK_0xefa0
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_TECH(); // >TECH
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf345: WORD '>DENSE' codep=0x4b3b parp=0xf350
// ================================================
// 0xf350: db 0x04 0x00 0x5e 0xf0 0x01 0x00 0x3d 0xf2 0x02 0x00 0x4a 0xf2 0x03 0x00 0x59 0xf2 0x04 0x00 0x65 0xf2 '  ^   =   J   Y   e '

// ================================================
// 0xf364: WORD 'UNK_0xf366' codep=0x224c parp=0xf366
// ================================================

void UNK_0xf366() // UNK_0xf366
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("POPULATION DENSITY: ", 20); // (.")
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefa8(); // UNK_0xefa8
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_DENSE(); // >DENSE
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf38d: WORD '>ATT' codep=0x4b3b parp=0xf396
// ================================================
// 0xf396: db 0x04 0x00 0x5e 0xf0 0x00 0x00 0xb9 0xf2 0x01 0x00 0xca 0xf2 0x02 0x00 0xdd 0xf2 0x03 0x00 0xf4 0xf2 '  ^                 '

// ================================================
// 0xf3aa: WORD 'UNK_0xf3ac' codep=0x224c parp=0xf3ac
// ================================================

void UNK_0xf3ac() // UNK_0xf3ac
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("TRADING STYLE: ", 15); // (.")
  UNK_0xf023(); // UNK_0xf023
  ATTITUDE(); // ATTITUDE
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_ATT(); // >ATT
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf3ce: WORD 'UNK_0xf3d0' codep=0x224c parp=0xf3d0
// ================================================

void UNK_0xf3d0() // UNK_0xf3d0
{
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  UNK_0x3f09("INHABITED BY ");
  goto label2;

  label1:

  UNK_0x3f09(" ");

  label2:
  _dot_TTY(); // .TTY
  Push(1); // 1
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex_(); // +!
  _dot_RACE(); // .RACE
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf326(); // UNK_0xf326
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf366(); // UNK_0xf366
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf1bb(); // UNK_0xf1bb
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf3ac(); // UNK_0xf3ac
}


// ================================================
// 0xf410: WORD 'UNK_0xf412' codep=0x224c parp=0xf412
// ================================================

void UNK_0xf412() // UNK_0xf412
{
  UNK_0xf0b4(); // UNK_0xf0b4
  UNK_0xf017(); // UNK_0xf017
  PRINT("CULTURAL ANALYSIS", 17); // (.")
  UNK_0xf199(); // UNK_0xf199
}

// 0xf42e: db 0x4c 0x22 0xa8 0xf0 0x29 0xf0 0x5d 0x17 0x14 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 'L"  ) ]   ] . %     '

// ================================================
// 0xf442: WORD 'UNK_0xf444' codep=0x224c parp=0xf444
// ================================================

void UNK_0xf444() // UNK_0xf444
{
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x0044);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(0x0044);
  Push(0); // 0
  Push(0x7d51);
  Push(0xf430);
  EACH(); // EACH
  Pop(); Pop();// 2DROP

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}

// 0xf470: db 0x4c 0x22 0xa8 0xf0 0x56 0xa9 0x5d 0x17 0x10 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 0x4c 0x22 0x9b 0x53 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x1a 0x00 0x20 0x0f 0x4c 0x7e 0xfa 0x15 0x16 0x00 0xa8 0xf0 0x5d 0x17 0x1a 0x00 0x20 0x0f 0x5d 0x17 0x51 0x7d 0x5d 0x17 0x72 0xf4 0xa9 0x7f 0xde 0x0d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x00 0x6a 0x2f 0x7a 0x9e 0xef 0x92 0x0c 0x3d 0x0f 0x2d 0x12 0xfa 0x15 0x16 0x00 0xa8 0xf0 0xa8 0xf0 0xdc 0x1b 0x0d 0x41 0x4e 0x59 0x20 0x41 0x52 0x54 0x49 0x46 0x41 0x43 0x54 0x53 0xdf 0x79 0xda 0xf0 0xfa 0x15 0x04 0x00 0x54 0xef 0x90 0x16 'L"  V ]   ] . %     L" S z?z]     L~      ]     ] Q}] r    =  z  L" j/z    = -            ANY ARTIFACTS y      T   '

// ================================================
// 0xf4e4: WORD '.CULTURE' codep=0x224c parp=0xf4f1
// ================================================

void _dot_CULTURE() // .CULTURE
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  WHITE(); // WHITE
  Push(pp_CTCOLOR); // CTCOLOR
  _ex_(); // !
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf023(); // UNK_0xf023
  UNK_0xefcb(); // UNK_0xefcb
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  _at_INST_dash_S(); // @INST-S
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf3d0(); // UNK_0xf3d0
  UNK_0xef56(); // UNK_0xef56
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf412(); // UNK_0xf412
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf023(); // UNK_0xf023
  ATTITUDE(); // ATTITUDE
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  UNK_0xf10e(); // UNK_0xf10e
  UNK_0xf444(); // UNK_0xf444

  label2:
  return;

  label1:
  _dot_RACE(); // .RACE
}

// 0xf549: db 0x43 0x55 0x4c 0x54 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CULTURE________________ '
  