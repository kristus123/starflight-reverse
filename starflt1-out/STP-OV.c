// ====== OVERLAY 'STP-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xefd6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'UNK_0xefd6'
//      UNK_0xefdb  codep:0x1d29 parp:0xefdb size:0x0002 C-string:'UNK_0xefdb'
//          SIC'EM  codep:0x224c parp:0xefe8 size:0x0048 C-string:'SIC_i_EM'
//      UNK_0xf032  codep:0x1d29 parp:0xf032 size:0x0002 C-string:'UNK_0xf032'
//      UNK_0xf036  codep:0x1d29 parp:0xf036 size:0x0002 C-string:'UNK_0xf036'
//      UNK_0xf03a  codep:0x1d29 parp:0xf03a size:0x0006 C-string:'UNK_0xf03a'
//      UNK_0xf042  codep:0x1d29 parp:0xf042 size:0x0004 C-string:'UNK_0xf042'
//      UNK_0xf048  codep:0x224c parp:0xf048 size:0x023d C-string:'UNK_0xf048'
//      UNK_0xf287  codep:0x1d29 parp:0xf287 size:0x0012 C-string:'UNK_0xf287'
//      UNK_0xf29b  codep:0x1d29 parp:0xf29b size:0x0030 C-string:'UNK_0xf29b'
//      UNK_0xf2cd  codep:0x1d29 parp:0xf2cd size:0x0018 C-string:'UNK_0xf2cd'
//      UNK_0xf2e7  codep:0x224c parp:0xf2e7 size:0x0044 C-string:'UNK_0xf2e7'
//      UNK_0xf32d  codep:0x224c parp:0xf32d size:0x001c C-string:'UNK_0xf32d'
//      UNK_0xf34b  codep:0x224c parp:0xf34b size:0x0053 C-string:'UNK_0xf34b'
//      UNK_0xf3a0  codep:0x224c parp:0xf3a0 size:0x0042 C-string:'UNK_0xf3a0'
//      UNK_0xf3e4  codep:0x224c parp:0xf3e4 size:0x005b C-string:'UNK_0xf3e4'
//      UNK_0xf441  codep:0x224c parp:0xf441 size:0x0017 C-string:'UNK_0xf441'
//      UNK_0xf45a  codep:0x224c parp:0xf45a size:0x0033 C-string:'UNK_0xf45a'
//      UNK_0xf48f  codep:0x224c parp:0xf48f size:0x0028 C-string:'UNK_0xf48f'
//             STP  codep:0x224c parp:0xf4bf size:0x002c C-string:'STP'
//            2NDS  codep:0x224c parp:0xf4f4 size:0x0000 C-string:'_2NDS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__9; // 9
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp__ask_AUTO; // ?AUTO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__ask_SECURE; // ?SECURE
void COUNT(); // COUNT
void MOD(); // MOD
void BEEP(); // BEEP
void D_dot_(); // D.
void MS(); // MS
void RRND(); // RRND
void C_ex_(); // C!
void _ex__3(); // !_3
void D_ex_(); // D!
void OFF(); // OFF
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void MODULE(); // MODULE
void CTERASE(); // CTERASE
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _dash_XTRAILING(); // -XTRAILING
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _st_(); // <
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xefdb = 0xefdb; // UNK_0xefdb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf032 = 0xf032; // UNK_0xf032 size: 2
// {0x15, 0x00}

const unsigned short int pp_UNK_0xf036 = 0xf036; // UNK_0xf036 size: 2
// {0x02, 0x00}

const unsigned short int pp_UNK_0xf03a = 0xf03a; // UNK_0xf03a size: 6
// {0x03, 0x00, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xf042 = 0xf042; // UNK_0xf042 size: 4
// {0x56, 0x3a, 0x20, 0x4f}

const unsigned short int pp_UNK_0xf287 = 0xf287; // UNK_0xf287 size: 18
// {0x88, 0xf0, 0x94, 0xf0, 0xa1, 0xf0, 0xae, 0xf0, 0xbc, 0xf0, 0xc9, 0xf0, 0xd9, 0xf0, 0xe5, 0xf0, 0xf5, 0xf0}

const unsigned short int pp_UNK_0xf29b = 0xf29b; // UNK_0xf29b size: 48
// {0x06, 0xf1, 0x11, 0xf1, 0x24, 0xf1, 0x3a, 0xf1, 0x47, 0xf1, 0x54, 0xf1, 0x60, 0xf1, 0x6f, 0xf1, 0x82, 0xf1, 0x90, 0xf1, 0x9d, 0xf1, 0xb5, 0xf1, 0xc0, 0xf1, 0xce, 0xf1, 0xdc, 0xf1, 0xec, 0xf1, 0xfc, 0xf1, 0x0d, 0xf2, 0x23, 0xf2, 0x31, 0xf2, 0x4c, 0xf2, 0x57, 0xf2, 0x6c, 0xf2, 0x77, 0xf2}

const unsigned short int pp_UNK_0xf2cd = 0xf2cd; // UNK_0xf2cd size: 24
// {0x0c, 0x0f, 0x1d, 0x01, 0x17, 0x06, 0x0b, 0x25, 0x2b, 0x2a, 0x2e, 0x07, 0x04, 0x12, 0x1e, 0x0e, 0x1b, 0x18, 0x03, 0x10, 0x0a, 0x05, 0x13, 0x02}




// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x744d parp=0xefd6
// ================================================
// 0xefd6: db 0x14 0x14 0x01 '   '

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x1d29 parp=0xefdb
// ================================================
// 0xefdb: db 0x3a 0x20 ': '

// ================================================
// 0xefdd: WORD 'SIC'EM' codep=0x224c parp=0xefe8
// ================================================
// entry

void SIC_i_EM() // SIC'EM
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6403); // IFIELD(UNK_0xefd6)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_UNK_0xefdb); // UNK_0xefdb
  _ex__3(); // !_3
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  Push(0x6403); // IFIELD(UNK_0xefd6)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
  Push2Words("*ARREST");
  Push(0xcc1a); // probable '>NEST'
  MODULE(); // MODULE
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf030: WORD 'UNK_0xf032' codep=0x1d29 parp=0xf032
// ================================================
// 0xf032: db 0x15 0x00 '  '

// ================================================
// 0xf034: WORD 'UNK_0xf036' codep=0x1d29 parp=0xf036
// ================================================
// 0xf036: db 0x02 0x00 '  '

// ================================================
// 0xf038: WORD 'UNK_0xf03a' codep=0x1d29 parp=0xf03a
// ================================================
// 0xf03a: db 0x03 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xf040: WORD 'UNK_0xf042' codep=0x1d29 parp=0xf042
// ================================================
// 0xf042: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  Push(pp_UNK_0xf032); // UNK_0xf032
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf036); // UNK_0xf036
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  _st_(); // <
  if (Pop() == 0) goto label1;
  _dash_(); // -
  Push(0x0018);
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  _dash_(); // -

  label2:
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0025);
  Push(Pop() + Pop()); // +
  Push(0x0133);
  MOD(); // MOD
}

// 0xf086: db 0x4c 0x22 0x39 0x3f 0x05 0x56 0x45 0x4c 0x4f 0x58 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x54 0x48 0x52 0x59 0x4e 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x45 0x4c 0x4f 0x57 0x41 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x4d 0x45 0x43 0x48 0x41 0x4e 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x53 0x50 0x45 0x4d 0x49 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x09 0x47 0x41 0x5a 0x55 0x52 0x54 0x4f 0x49 0x44 0x90 0x16 0x4c 0x22 0x39 0x3f 0x05 0x55 0x48 0x4c 0x45 0x4b 0x90 0x16 0x4c 0x22 0x39 0x3f 0x09 0x4d 0x49 0x4e 0x53 0x54 0x52 0x45 0x4c 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0a 0x4d 0x59 0x53 0x54 0x45 0x52 0x49 0x4f 0x4e 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x04 0x41 0x52 0x54 0x48 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0c 0x54 0x48 0x4f 0x53 0x53 0x2f 0x45 0x4c 0x45 0x52 0x41 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0f 0x48 0x41 0x52 0x52 0x49 0x53 0x4f 0x4e 0x27 0x53 0x20 0x42 0x41 0x53 0x45 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x53 0x50 0x48 0x45 0x58 0x49 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x53 0x50 0x45 0x57 0x54 0x41 0x90 0x16 0x4c 0x22 0x39 0x3f 0x05 0x45 0x41 0x52 0x54 0x48 0x90 0x16 0x4c 0x22 0x39 0x3f 0x08 0x4d 0x41 0x52 0x44 0x41 0x4e 0x20 0x32 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0c 0x4e 0x45 0x57 0x20 0x53 0x43 0x4f 0x54 0x4c 0x41 0x4e 0x44 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x4b 0x4f 0x41 0x4e 0x4e 0x20 0x33 0x90 0x16 0x4c 0x22 0x39 0x3f 0x06 0x48 0x45 0x41 0x56 0x45 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x11 0x55 0x48 0x4c 0x45 0x4b 0x20 0x42 0x52 0x41 0x49 0x4e 0x20 0x57 0x4f 0x52 0x4c 0x44 0x90 0x16 0x4c 0x22 0x39 0x3f 0x04 0x47 0x41 0x41 0x4c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x41 0x4b 0x54 0x45 0x52 0x4f 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x4e 0x49 0x52 0x56 0x41 0x4e 0x41 0x90 0x16 0x4c 0x22 0x39 0x3f 0x09 0x54 0x48 0x45 0x20 0x53 0x54 0x41 0x46 0x46 0x90 0x16 0x4c 0x22 0x39 0x3f 0x09 0x54 0x48 0x45 0x20 0x43 0x52 0x4f 0x53 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0a 0x50 0x59 0x54 0x48 0x41 0x47 0x4f 0x52 0x41 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0f 0x54 0x48 0x45 0x20 0x34 0x20 0x53 0x45 0x45 0x44 0x4c 0x49 0x4e 0x47 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x07 0x54 0x48 0x45 0x20 0x41 0x58 0x45 0x90 0x16 0x4c 0x22 0x39 0x3f 0x14 0x43 0x49 0x54 0x59 0x20 0x4f 0x46 0x20 0x54 0x48 0x45 0x20 0x41 0x4e 0x43 0x49 0x45 0x4e 0x54 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x04 0x4d 0x41 0x52 0x53 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0e 0x43 0x52 0x59 0x53 0x54 0x41 0x4c 0x20 0x50 0x4c 0x41 0x4e 0x45 0x54 0x90 0x16 0x4c 0x22 0x39 0x3f 0x04 0x45 0x4c 0x41 0x4e 0x90 0x16 0x4c 0x22 0x39 0x3f 0x09 0x56 0x4f 0x54 0x49 0x50 0x55 0x54 0x4f 0x58 0x90 0x16 'L"9? VELOX  L"9? THRYNN  L"9? ELOWAN  L"9? MECHANS  L"9? SPEMIN  L"9? GAZURTOID  L"9? UHLEK  L"9? MINSTRELS  L"9? MYSTERIONS  L"9? ARTH  L"9? THOSS/ELERAN  L"9? HARRISON'S BASE  L"9? SPHEXI  L"9? SPEWTA  L"9? EARTH  L"9? MARDAN 2  L"9? NEW SCOTLAND  L"9? KOANN 3  L"9? HEAVEN  L"9? UHLEK BRAIN WORLD  L"9? GAAL  L"9? AKTERON  L"9? NIRVANA  L"9? THE STAFF  L"9? THE CROSS  L"9? PYTHAGORAS  L"9? THE 4 SEEDLINGS  L"9? THE AXE  L"9? CITY OF THE ANCIENTS  L"9? MARS  L"9? CRYSTAL PLANET  L"9? ELAN  L"9? VOTIPUTOX  '

// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x88 0xf0 0x94 0xf0 0xa1 0xf0 0xae 0xf0 0xbc 0xf0 0xc9 0xf0 0xd9 0xf0 0xe5 0xf0 0xf5 0xf0 '                  '

// ================================================
// 0xf299: WORD 'UNK_0xf29b' codep=0x1d29 parp=0xf29b
// ================================================
// 0xf29b: db 0x06 0xf1 0x11 0xf1 0x24 0xf1 0x3a 0xf1 0x47 0xf1 0x54 0xf1 0x60 0xf1 0x6f 0xf1 0x82 0xf1 0x90 0xf1 0x9d 0xf1 0xb5 0xf1 0xc0 0xf1 0xce 0xf1 0xdc 0xf1 0xec 0xf1 0xfc 0xf1 0x0d 0xf2 0x23 0xf2 0x31 0xf2 0x4c 0xf2 0x57 0xf2 0x6c 0xf2 0x77 0xf2 '    $ : G T ` o                     # 1 L W l w '

// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x1d29 parp=0xf2cd
// ================================================
// 0xf2cd: db 0x0c 0x0f 0x1d 0x01 0x17 0x06 0x0b 0x25 0x2b 0x2a 0x2e 0x07 0x04 0x12 0x1e 0x0e 0x1b 0x18 0x03 0x10 0x0a 0x05 0x13 0x02 '       %+*.             '

// ================================================
// 0xf2e5: WORD 'UNK_0xf2e7' codep=0x224c parp=0xf2e7
// ================================================

void UNK_0xf2e7() // UNK_0xf2e7
{
  Push(pp_UNK_0xf032); // UNK_0xf032
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xf29b); // UNK_0xf29b
  Push(Pop() + Pop()); // +
  _at_EXECUTE(); // @EXECUTE
  _dot_TTY(); // .TTY
  Push(pp_UNK_0xf036); // UNK_0xf036
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf2cd); // UNK_0xf2cd
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  Push(0x001c);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  LoadData("ART-NAME"); // from 'ARTIFACT    '
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  _dot_TTY(); // .TTY
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xf287); // UNK_0xf287
  Push(Pop() + Pop()); // +
  _at_EXECUTE(); // @EXECUTE
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf32b: WORD 'UNK_0xf32d' codep=0x224c parp=0xf32d
// ================================================

void UNK_0xf32d() // UNK_0xf32d
{
  PRINT(" SECURITY CODE FOR:", 19); // (.")
  UNK_0xf2e7(); // UNK_0xf2e7
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf349: WORD 'UNK_0xf34b' codep=0x224c parp=0xf34b
// ================================================

void UNK_0xf34b() // UNK_0xf34b
{
  signed short int i, imax;

  UNK_0x3f3b("CODE: ");
  _dot_TTY(); // .TTY
  Push(Read16(cc__dash_1)); // -1
  Push(pp__dash_AIN); // -AIN
  _ex__3(); // !_3
  Push(0x000a);
  Push(0xbd5b); // probable 'OV#IN$'
  MODULE(); // MODULE
  Push2Words("NULL");
  ROT(); // ROT
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  Push(0x000a);
  U_star_(); // U*
  ROT(); // ROT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0030);
  _dash_(); // -
  Push(0); // 0
  D_plus_(); // D+
  i++;
  } while(i<imax); // (LOOP) 0xffde

  Push(pp_UNK_0xf042); // UNK_0xf042
  D_ex_(); // D!
}


// ================================================
// 0xf39e: WORD 'UNK_0xf3a0' codep=0x224c parp=0xf3a0
// ================================================

void UNK_0xf3a0() // UNK_0xf3a0
{
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_GLOBALSEED); // GLOBALSEED
  _ex__3(); // !_3
  Push(0); // 0
  Push(0x0018);
  RRND(); // RRND
  Push(pp_UNK_0xf032); // UNK_0xf032
  _ex__3(); // !_3
  Push(0); // 0
  Push(0x0018);
  RRND(); // RRND
  Push(pp_UNK_0xf036); // UNK_0xf036
  _ex__3(); // !_3
  Push(0); // 0
  Push(Read16(cc__9)); // 9
  RRND(); // RRND
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  _ex__3(); // !_3
  CTINIT(); // CTINIT

  UNK_0x3f3b("REQUEST");
  _dot_TTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf34b(); // UNK_0xf34b
}


// ================================================
// 0xf3e2: WORD 'UNK_0xf3e4' codep=0x224c parp=0xf3e4
// ================================================

void UNK_0xf3e4() // UNK_0xf3e4
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("VERIFYING");
  _dot_TTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d

  UNK_0x3f3b("CODE ENTERED: ");
  _dot_TTY(); // .TTY
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  D_dot_(); // D.

  UNK_0x3f3b("CONFIRM [N Y]");
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label2:
  XYSCAN(); // XYSCAN
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  BEEP(); // BEEP

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf43f: WORD 'UNK_0xf441' codep=0x224c parp=0xf441
// ================================================

void UNK_0xf441() // UNK_0xf441
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("RE-ENTER");
  _dot_TTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf34b(); // UNK_0xf34b
}


// ================================================
// 0xf458: WORD 'UNK_0xf45a' codep=0x224c parp=0xf45a
// ================================================

void UNK_0xf45a() // UNK_0xf45a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("ARE YOU SURE? BETTER DOUBLE CHECK!");
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xf48d: WORD 'UNK_0xf48f' codep=0x224c parp=0xf48f
// ================================================

void UNK_0xf48f() // UNK_0xf48f
{

  label2:
  UNK_0xf3e4(); // UNK_0xf3e4
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf441(); // UNK_0xf441
  goto label2;

  label1:
  UNK_0xf048(); // UNK_0xf048
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf4b7: WORD 'STP' codep=0x224c parp=0xf4bf
// ================================================
// entry

void STP() // STP
{
  UNK_0xf3a0(); // UNK_0xf3a0
  UNK_0xf48f(); // UNK_0xf48f
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf45a(); // UNK_0xf45a
  UNK_0xf48f(); // UNK_0xf48f
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(pp__ask_SECURE); // ?SECURE
  _ex__3(); // !_3
}


// ================================================
// 0xf4eb: WORD '2NDS' codep=0x224c parp=0xf4f4
// ================================================
// entry

void _2NDS() // 2NDS
{
  UNK_0xf3a0(); // UNK_0xf3a0
  UNK_0xf048(); // UNK_0xf048
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp__ask_SECURE); // ?SECURE
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(pp_UNK_0xefdb); // UNK_0xefdb
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6403); // IFIELD(UNK_0xefd6)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x6403); // IFIELD(UNK_0xefd6)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'STP-VOC_________________________ for STP---------- '
  