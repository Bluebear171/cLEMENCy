//
//  disassembler_opcodes.h
//  cLEMENCy disassembler opcodes
//
//  Created by Lightning on 2016/10/24.
//  Copyright (c) 2017 Lightning. All rights reserved.
//
{0x0000000, 0x7f0001e, "ad", 0x00, 27, 1},
{0x0100000, 0x7f0001e, "adf", 0x00, 27, 1},
{0x0300000, 0x7f0001e, "adfm", 0x00, 27, 1},
{0x0000002, 0x7f00006, "adi", 0x00, 27, 15},
{0x0200002, 0x7f00006, "adim", 0x00, 27, 15},
{0x0200000, 0x7f0001e, "adm", 0x00, 27, 1},
{0x0400000, 0x7f0001e, "sb", 0x01, 27, 1},
{0x0500000, 0x7f0001e, "sbf", 0x01, 27, 1},
{0x0700000, 0x7f0001e, "sbfm", 0x01, 27, 1},
{0x0400002, 0x7f00006, "sbi", 0x01, 27, 15},
{0x0600002, 0x7f00006, "sbim", 0x01, 27, 15},
{0x0600000, 0x7f0001e, "sbm", 0x01, 27, 1},
{0x0800000, 0x7f0001e, "mu", 0x02, 27, 1},
{0x0900000, 0x7f0001e, "muf", 0x02, 27, 1},
{0x0b00000, 0x7f0001e, "mufm", 0x02, 27, 1},
{0x0800002, 0x7f00006, "mui", 0x02, 27, 15},
{0x0a00002, 0x7f00006, "muim", 0x02, 27, 15},
{0x0800006, 0x7f00006, "muis", 0x02, 27, 15},
{0x0a00006, 0x7f00006, "muism", 0x02, 27, 15},
{0x0a00000, 0x7f0001e, "mum", 0x02, 27, 1},
{0x0800004, 0x7f0001e, "mus", 0x02, 27, 1},
{0x0a00004, 0x7f0001e, "musm", 0x02, 27, 1},
{0x0c00000, 0x7f0001e, "dv", 0x03, 27, 1},
{0x0d00000, 0x7f0001e, "dvf", 0x03, 27, 1},
{0x0f00000, 0x7f0001e, "dvfm", 0x03, 27, 1},
{0x0c00002, 0x7f00006, "dvi", 0x03, 27, 15},
{0x0e00002, 0x7f00006, "dvim", 0x03, 27, 15},
{0x0c00006, 0x7f00006, "dvis", 0x03, 27, 15},
{0x0e00006, 0x7f00006, "dvism", 0x03, 27, 15},
{0x0e00000, 0x7f0001e, "dvm", 0x03, 27, 1},
{0x0c00004, 0x7f0001e, "dvs", 0x03, 27, 1},
{0x0e00004, 0x7f0001e, "dvsm", 0x03, 27, 1},
{0x1000000, 0x7f0001e, "md", 0x04, 27, 1},
{0x1100000, 0x7f0001e, "mdf", 0x04, 27, 1},
{0x1300000, 0x7f0001e, "mdfm", 0x04, 27, 1},
{0x1000002, 0x7f00006, "mdi", 0x04, 27, 15},
{0x1200002, 0x7f00006, "mdim", 0x04, 27, 15},
{0x1000006, 0x7f00006, "mdis", 0x04, 27, 15},
{0x1200006, 0x7f00006, "mdism", 0x04, 27, 15},
{0x1200000, 0x7f0001e, "mdm", 0x04, 27, 1},
{0x1000004, 0x7f0001e, "mds", 0x04, 27, 1},
{0x1200004, 0x7f0001e, "mdsm", 0x04, 27, 1},
{0x1400000, 0x7f0001e, "an", 0x05, 27, 1},
{0x1400002, 0x7f00006, "ani", 0x05, 27, 15},
{0x1600000, 0x7f0001e, "anm", 0x05, 27, 1},
{0x1800000, 0x7f0001e, "or", 0x06, 27, 1},
{0x1800002, 0x7f00006, "ori", 0x06, 27, 15},
{0x1a00000, 0x7f0001e, "orm", 0x06, 27, 1},
{0x1c00000, 0x7f0001e, "xr", 0x07, 27, 1},
{0x1c00002, 0x7f00006, "xri", 0x07, 27, 15},
{0x1e00000, 0x7f0001e, "xrm", 0x07, 27, 1},
{0x2000000, 0x7f0001e, "adc", 0x08, 27, 1},
{0x2000002, 0x7f00006, "adci", 0x08, 27, 15},
{0x2200002, 0x7f00006, "adcim", 0x08, 27, 15},
{0x2200000, 0x7f0001e, "adcm", 0x08, 27, 1},
{0x2400000, 0x7f0001e, "sbc", 0x09, 27, 1},
{0x2400002, 0x7f00006, "sbci", 0x09, 27, 15},
{0x2600002, 0x7f00006, "sbcim", 0x09, 27, 15},
{0x2600000, 0x7f0001e, "sbcm", 0x09, 27, 1},
{0x2800000, 0x7f0001e, "sl", 0x0a, 27, 14},
{0x2a00000, 0x7f0001e, "slm", 0x0a, 27, 14},
{0x2900000, 0x7f0001e, "sr", 0x0a, 27, 14},
{0x2b00000, 0x7f0001e, "srm", 0x0a, 27, 14},
{0x2d00000, 0x7f0001e, "sa", 0x0b, 27, 14},
{0x2f00000, 0x7f0001e, "sam", 0x0b, 27, 14},
{0x3000000, 0x7f0001e, "rl", 0x0c, 27, 14},
{0x3200000, 0x7f0001e, "rlm", 0x0c, 27, 14},
{0x3100000, 0x7f0001e, "rr", 0x0c, 27, 14},
{0x3300000, 0x7f0001e, "rrm", 0x0c, 27, 14},
{0x3400000, 0x7f0001f, "dmt", 0x0d, 27, 14},
{0x3800000, 0x7f00006, "sli", 0x0e, 27, 2},
{0x3a00000, 0x7f00006, "slim", 0x0e, 27, 2},
{0x3900000, 0x7f00006, "sri", 0x0e, 27, 2},
{0x3b00000, 0x7f00006, "srim", 0x0e, 27, 2},
{0x3d00000, 0x7f00006, "sai", 0x0f, 27, 2},
{0x3f00000, 0x7f00006, "saim", 0x0f, 27, 2},
{0x4000000, 0x7f00006, "rli", 0x10, 27, 2},
{0x4200000, 0x7f00006, "rlim", 0x10, 27, 2},
{0x4100000, 0x7f00006, "rri", 0x10, 27, 2},
{0x4300000, 0x7f00006, "rrim", 0x10, 27, 2},
{0x4400000, 0x7c00000, "mh", 0x11, 27, 8},
{0x4800000, 0x7c00000, "ml", 0x12, 27, 8},
{0x4c00000, 0x7c00000, "ms", 0x13, 27, 8},
{0x5300080, 0x7fc00fe, "bf", 0x14, 27, 4},
{0x5380080, 0x7fc00fe, "bfm", 0x14, 27, 4},
{0x0028140, 0x003ffc1, "di", 0x14, 18, 16},
{0x0028100, 0x003ffc1, "ei", 0x14, 18, 16},
{0x5140000, 0x7fc00ff, "fti", 0x14, 27, 12},
{0x51c0000, 0x7fc00ff, "ftim", 0x14, 27, 12},
{0x00280c0, 0x003ffff, "ht", 0x14, 18, 0},
{0x0028040, 0x003ffff, "ir", 0x14, 18, 0},
{0x5100000, 0x7fc00ff, "itf", 0x14, 27, 12},
{0x5180000, 0x7fc00ff, "itfm", 0x14, 27, 12},
{0x5300000, 0x7fc00fe, "ng", 0x14, 27, 4},
{0x5340000, 0x7fc00fe, "ngf", 0x14, 27, 4},
{0x53c0000, 0x7fc00fe, "ngfm", 0x14, 27, 4},
{0x5380000, 0x7fc00fe, "ngm", 0x14, 27, 4},
{0x5300040, 0x7fc00fe, "nt", 0x14, 27, 4},
{0x5380040, 0x7fc00fe, "ntm", 0x14, 27, 4},
{0x0028000, 0x003ffff, "re", 0x14, 18, 0},
{0x0028300, 0x003ffc1, "rf", 0x14, 18, 16},
{0x5200000, 0x7f003ff, "rmp", 0x14, 27, 10},
{0x53000c0, 0x7fc1ffe, "rnd", 0x14, 27, 4},
{0x53800c0, 0x7fc1ffe, "rndm", 0x14, 27, 4},
{0x5038000, 0x7ff801f, "ses", 0x14, 27, 13},
{0x5040000, 0x7ff801f, "sew", 0x14, 27, 13},
{0x00282c0, 0x003ffc1, "sf", 0x14, 18, 16},
{0x5200200, 0x7f0027f, "smp", 0x14, 27, 10},
{0x0028080, 0x003ffff, "wt", 0x14, 18, 0},
{0x5048000, 0x7ff801f, "zes", 0x14, 27, 13},
{0x5050000, 0x7ff801f, "zew", 0x14, 27, 13},
{0x2a000000000000, 0x3f8000c0000007, "lds", 0x15, 54, 3},
{0x2a000040000000, 0x3f8000c0000007, "ldsi", 0x15, 54, 3},
{0x2a000080000000, 0x3f8000c0000007, "ldsd", 0x15, 54, 3},
{0x2b000000000000, 0x3f8000c0000007, "ldt", 0x15, 54, 3},
{0x2b000040000000, 0x3f8000c0000007, "ldti", 0x15, 54, 3},
{0x2b000080000000, 0x3f8000c0000007, "ldtd", 0x15, 54, 3},
{0x2a800000000000, 0x3f8000c0000007, "ldw", 0x15, 54, 3},
{0x2a800040000000, 0x3f8000c0000007, "ldwi", 0x15, 54, 3},
{0x2a800080000000, 0x3f8000c0000007, "ldwd", 0x15, 54, 3},
{0x2c000000000000, 0x3f8000c0000007, "sts", 0x16, 54, 3},
{0x2c000040000000, 0x3f8000c0000007, "stsi", 0x16, 54, 3},
{0x2c000080000000, 0x3f8000c0000007, "stsd", 0x16, 54, 3},
{0x2d000000000000, 0x3f8000c0000007, "stt", 0x16, 54, 3},
{0x2d000040000000, 0x3f8000c0000007, "stti", 0x16, 54, 3},
{0x2d000080000000, 0x3f8000c0000007, "sttd", 0x16, 54, 3},
{0x2c800000000000, 0x3f8000c0000007, "stw", 0x16, 54, 3},
{0x2c800040000000, 0x3f8000c0000007, "stwi", 0x16, 54, 3},
{0x2c800080000000, 0x3f8000c0000007, "stwd", 0x16, 54, 3},
{0x002e000, 0x003fc00, "cm", 0x17, 18, 5},
{0x002e800, 0x003fc00, "cmf", 0x17, 18, 5},
{0x002f800, 0x003fc00, "cmfm", 0x17, 18, 5},
{0x5c80000, 0x7f80000, "cmi", 0x17, 27, 11},
{0x5e80000, 0x7f80000, "cmim", 0x17, 27, 11},
{0x002f000, 0x003fc00, "cmm", 0x17, 18, 5},
{0x6000000, 0x7fe0000, "bn", 0x18, 27, 6},
{0x6020000, 0x7fe0000, "be", 0x18, 27, 6},
{0x6040000, 0x7fe0000, "bl", 0x18, 27, 6},
{0x6060000, 0x7fe0000, "ble", 0x18, 27, 6},
{0x6080000, 0x7fe0000, "bg", 0x18, 27, 6},
{0x60a0000, 0x7fe0000, "bge", 0x18, 27, 6},
{0x60c0000, 0x7fe0000, "bno", 0x18, 27, 6},
{0x60e0000, 0x7fe0000, "bo", 0x18, 27, 6},
{0x6100000, 0x7fe0000, "bns", 0x18, 27, 6},
{0x6120000, 0x7fe0000, "bs", 0x18, 27, 6},
{0x6140000, 0x7fe0000, "bsl", 0x18, 27, 6},
{0x6160000, 0x7fe0000, "bsle", 0x18, 27, 6},
{0x6180000, 0x7fe0000, "bsg", 0x18, 27, 6},
{0x61a0000, 0x7fe0000, "bsge", 0x18, 27, 6},
{0x61e0000, 0x7fe0000, "b", 0x18, 27, 6},
{0x0032000, 0x003ff07, "brn", 0x19, 18, 9},
{0x0032100, 0x003ff07, "bre", 0x19, 18, 9},
{0x0032200, 0x003ff07, "brl", 0x19, 18, 9},
{0x0032300, 0x003ff07, "brle", 0x19, 18, 9},
{0x0032400, 0x003ff07, "brg", 0x19, 18, 9},
{0x0032500, 0x003ff07, "brge", 0x19, 18, 9},
{0x0032600, 0x003ff07, "brno", 0x19, 18, 9},
{0x0032700, 0x003ff07, "bro", 0x19, 18, 9},
{0x0032800, 0x003ff07, "brns", 0x19, 18, 9},
{0x0032900, 0x003ff07, "brs", 0x19, 18, 9},
{0x0032a00, 0x003ff07, "brsl", 0x19, 18, 9},
{0x0032b00, 0x003ff07, "brsle", 0x19, 18, 9},
{0x0032c00, 0x003ff07, "brsg", 0x19, 18, 9},
{0x0032d00, 0x003ff07, "brsge", 0x19, 18, 9},
{0x0032f00, 0x003ff07, "br", 0x19, 18, 9},
{0x6a00000, 0x7fe0000, "cn", 0x1a, 27, 6},
{0x6a20000, 0x7fe0000, "ce", 0x1a, 27, 6},
{0x6a40000, 0x7fe0000, "cl", 0x1a, 27, 6},
{0x6a60000, 0x7fe0000, "cle", 0x1a, 27, 6},
{0x6a80000, 0x7fe0000, "cg", 0x1a, 27, 6},
{0x6aa0000, 0x7fe0000, "cge", 0x1a, 27, 6},
{0x6ac0000, 0x7fe0000, "cno", 0x1a, 27, 6},
{0x6ae0000, 0x7fe0000, "co", 0x1a, 27, 6},
{0x6b00000, 0x7fe0000, "cns", 0x1a, 27, 6},
{0x6b20000, 0x7fe0000, "cs", 0x1a, 27, 6},
{0x6b40000, 0x7fe0000, "csl", 0x1a, 27, 6},
{0x6b60000, 0x7fe0000, "csle", 0x1a, 27, 6},
{0x6b80000, 0x7fe0000, "csg", 0x1a, 27, 6},
{0x6ba0000, 0x7fe0000, "csge", 0x1a, 27, 6},
{0x6be0000, 0x7fe0000, "c", 0x1a, 27, 6},
{0x0037000, 0x003ff07, "crn", 0x1b, 18, 9},
{0x0037100, 0x003ff07, "cre", 0x1b, 18, 9},
{0x0037200, 0x003ff07, "crl", 0x1b, 18, 9},
{0x0037300, 0x003ff07, "crle", 0x1b, 18, 9},
{0x0037400, 0x003ff07, "crg", 0x1b, 18, 9},
{0x0037500, 0x003ff07, "crge", 0x1b, 18, 9},
{0x0037600, 0x003ff07, "crno", 0x1b, 18, 9},
{0x0037700, 0x003ff07, "cro", 0x1b, 18, 9},
{0x0037800, 0x003ff07, "crns", 0x1b, 18, 9},
{0x0037900, 0x003ff07, "crs", 0x1b, 18, 9},
{0x0037a00, 0x003ff07, "crsl", 0x1b, 18, 9},
{0x0037b00, 0x003ff07, "crsle", 0x1b, 18, 9},
{0x0037c00, 0x003ff07, "crsg", 0x1b, 18, 9},
{0x0037d00, 0x003ff07, "crsge", 0x1b, 18, 9},
{0x0037f00, 0x003ff07, "cr", 0x1b, 18, 9},
{0xe20000000, 0xff8000000, "bra", 0x1c, 36, 17},
{0xe00000000, 0xff8000000, "brr", 0x1c, 36, 7},
{0xe60000000, 0xff8000000, "caa", 0x1c, 36, 17},
{0xe40000000, 0xff8000000, "car", 0x1c, 36, 7},
{0x003ffff, 0x003ffff, "dbrk", 0x1f, 18, 0},
