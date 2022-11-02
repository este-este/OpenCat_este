#define BITTLE
//number of skills: 42

const int8_t bdF[] PROGMEM = { 
15, 0, 0, 1,
  56,  56,  72,  72, -21, -21, -35, -35,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   7,   7,   9,   9,
  46,  46,  52,  52,   5,   5,   9,   9,
  50,  50,  56,  56,  -4,  -4,  -1,  -1,
  53,  53,  60,  60, -12, -12,  -9,  -9,
  55,  55,  64,  64, -19, -19, -17, -17,
  58,  58,  67,  67, -26, -26, -25, -25,
  60,  60,  70,  70, -33, -33, -32, -32,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
  61,  61,  72,  72, -35, -35, -35, -35,
};
const int8_t bk[] PROGMEM = { 
22, 0, 0, 1,
  36,  40,  36,  62,   6,  -3,   6,   1,
  34,  47,  32,  63,   7,  -4,   7,   4,
  30,  53,  28,  59,   8,  -3,   9,   9,
  26,  58,  25,  57,  10,  -2,  10,  10,
  22,  57,  26,  55,  12,   2,   6,   8,
  18,  51,  29,  52,  14,   8,   2,   7,
  15,  51,  36,  50,  15,   6,  -2,   6,
  17,  48,  43,  47,   9,   5,  -3,   5,
  21,  45,  49,  44,   5,   5,  -4,   5,
  29,  43,  55,  42,   2,   5,  -3,   5,
  35,  39,  60,  38,  -1,   6,  -1,   6,
  42,  36,  63,  35,  -3,   6,   1,   6,
  49,  32,  62,  31,  -4,   7,   6,   8,
  54,  28,  58,  28,  -3,   9,  10,   9,
  57,  26,  57,  24,   0,  10,   9,  11,
  56,  21,  54,  26,   3,  12,   8,   4,
  51,  17,  52,  31,   8,  15,   6,   1,
  50,  15,  49,  38,   6,  14,   6,  -2,
  47,  18,  47,  44,   5,   8,   5,  -3,
  45,  24,  44,  51,   5,   4,   5,  -4,
  42,  30,  41,  56,   5,   1,   5,  -3,
  38,  37,  37,  60,   6,  -2,   6,  -1,
};
const int8_t bkL[] PROGMEM = { 
24, 0, 0, 1,
  45,  54,  45,  56,  -4, -13,   5, -10,
  44,  61,  43,  58,  -3, -12,   5, -10,
  43,  67,  39,  60,  -3, -10,   6,  -9,
  42,  72,  36,  62,  -3,  -6,   6,  -8,
  41,  70,  32,  62,  -3,   0,   7,  -4,
  40,  63,  30,  60,  -3,   8,   8,  -3,
  38,  58,  26,  58,  -2,  10,  10,  -2,
  37,  56,  21,  57,  -3,   9,  10,  -2,
  36,  54,  22,  56,  -4,   8,   2,  -3,
  39,  52,  28,  55,  -8,   6,  -6,  -3,
  41,  49,  37,  55,  -9,   6, -10,  -3,
  44,  47,  46,  54,  -9,   5, -12,  -3,
  48,  44,  54,  53, -10,   5, -13,  -3,
  49,  42,  61,  52, -10,   5, -12,  -3,
  52,  38,  67,  51, -10,   6, -10,  -4,
  55,  35,  72,  51, -10,   6,  -6,  -4,
  54,  31,  70,  49,  -7,   8,   0,  -4,
  53,  28,  63,  48,  -5,   9,   8,  -4,
  51,  25,  58,  46,  -4,  10,  10,  -4,
  50,  21,  56,  46,  -4,   9,   9,  -5,
  49,  23,  54,  48,  -4,  -1,   8,  -9,
  48,  30,  52,  48,  -4,  -7,   6, -10,
  47,  39,  49,  51,  -4, -11,   6, -10,
  46,  48,  47,  54,  -4, -13,   5, -10,
};
const int8_t crF[] PROGMEM = { 
34, 0, 2, 1,
  42,  73,  83,  75, -43, -42, -49, -41,
  37,  75,  78,  77, -41, -41, -50, -41,
  36,  78,  73,  80, -38, -41, -50, -41,
  37,  81,  68,  82, -36, -41, -50, -40,
  41,  83,  62,  85, -36, -40, -48, -40,
  42,  88,  57,  85, -36, -40, -47, -39,
  45,  92,  51,  88, -37, -44, -44, -38,
  48,  91,  50,  90, -38, -45, -41, -37,
  51,  89,  55,  91, -39, -48, -40, -36,
  53,  84,  55,  93, -40, -49, -40, -35,
  56,  80,  58,  99, -40, -50, -41, -37,
  59,  75,  61, 101, -41, -50, -41, -40,
  62,  69,  64, 101, -41, -50, -41, -42,
  64,  64,  65,  99, -41, -49, -41, -44,
  67,  58,  68,  95, -42, -48, -42, -46,
  70,  53,  71,  92, -42, -47, -42, -47,
  73,  48,  74,  88, -42, -45, -41, -48,
  74,  42,  75,  83, -41, -43, -41, -49,
  77,  37,  78,  78, -41, -41, -41, -50,
  80,  36,  81,  73, -41, -38, -41, -50,
  82,  37,  83,  68, -40, -36, -40, -50,
  85,  41,  85,  62, -40, -36, -40, -48,
  89,  42,  87,  57, -41, -36, -39, -47,
  93,  45,  89,  51, -45, -37, -38, -44,
  92,  48,  91,  50, -47, -38, -37, -41,
  88,  51,  93,  55, -48, -39, -36, -40,
  83,  53,  96,  55, -49, -40, -35, -40,
  78,  56, 100,  58, -50, -40, -38, -41,
  73,  59, 102,  61, -50, -41, -42, -41,
  68,  62,  99,  64, -50, -41, -43, -41,
  62,  64,  96,  65, -48, -41, -45, -41,
  57,  67,  93,  68, -47, -42, -47, -42,
  51,  70,  89,  71, -46, -42, -48, -42,
  46,  73,  84,  74, -45, -42, -49, -41,
};
const int8_t crL[] PROGMEM = { 
34, 0, 2, 1,
  63,  73,  83,  71, -46, -42, -49, -44,
  61,  75,  78,  73, -46, -41, -50, -44,
  61,  78,  73,  75, -46, -41, -50, -44,
  61,  81,  68,  75, -45, -41, -50, -44,
  60,  83,  62,  76, -43, -40, -48, -44,
  60,  88,  57,  76, -43, -40, -47, -44,
  62,  92,  51,  78, -44, -44, -44, -44,
  62,  91,  50,  79, -44, -45, -41, -44,
  64,  89,  55,  79, -44, -48, -40, -44,
  65,  84,  55,  81, -44, -49, -40, -43,
  65,  80,  58,  83, -44, -50, -41, -45,
  67,  75,  61,  84, -44, -50, -41, -46,
  67,  69,  64,  84, -44, -50, -41, -46,
  68,  64,  65,  82, -44, -49, -41, -46,
  70,  58,  68,  81, -44, -48, -42, -46,
  70,  53,  71,  79, -44, -47, -42, -46,
  71,  48,  74,  78, -44, -45, -41, -47,
  71,  42,  75,  76, -44, -43, -41, -47,
  73,  37,  78,  75, -44, -41, -41, -47,
  75,  36,  81,  73, -44, -38, -41, -47,
  75,  37,  83,  71, -44, -36, -40, -47,
  78,  41,  85,  70, -44, -36, -40, -47,
  78,  42,  87,  68, -45, -36, -39, -47,
  79,  45,  89,  66, -46, -37, -38, -46,
  79,  48,  91,  65, -46, -38, -37, -45,
  78,  51,  93,  65, -47, -39, -36, -44,
  76,  53,  96,  65, -47, -40, -35, -44,
  75,  56, 100,  65, -47, -40, -38, -44,
  73,  59, 102,  67, -47, -41, -42, -44,
  71,  62,  99,  68, -47, -41, -43, -44,
  70,  64,  96,  68, -47, -41, -45, -44,
  68,  67,  93,  70, -47, -42, -47, -44,
  66,  70,  89,  70, -46, -42, -48, -44,
  64,  73,  84,  71, -46, -42, -49, -44,
};
const int8_t hlw[] PROGMEM = { 
14, 0, 0, 1,
  10,  29,  51,  46,  33,  30,   4,  15,
  10,  32,  43,  48,  40,  29,   3,  16,
  15,  35,  34,  49,  35,  30,  13,  18,
  19,  44,  36,  52,  33,  17,  14,  19,
  22,  38,  39,  53,  31,  16,  14,  22,
  25,  30,  42,  61,  30,  17,  14,  11,
  28,  21,  44,  56,  30,  21,  15,   6,
  31,   8,  47,  49,  29,  40,  16,   3,
  33,  13,  48,  41,  30,  37,  17,   3,
  38,  16,  51,  33,  28,  34,  18,  17,
  42,  20,  52,  37,  16,  32,  20,  14,
  35,  23,  59,  40,  16,  31,  16,  14,
  26,  26,  59,  42,  19,  30,   8,  14,
  15,  28,  52,  45,  27,  30,   5,  15,
};
const int8_t mhF[] PROGMEM = { 
34, 0, 10, 1,
  41,  49,  65,  74,  16,   1,  12,   0,
  43,  44,  66,  71,  17,   1,  14,  -4,
  45,  39,  67,  68,  18,   2,  18,  -7,
  47,  33,  67,  63,  19,   4,  22,  -8,
  49,  27,  68,  59,  20,   7,  24, -10,
  51,  21,  68,  53,  22,  10,  30, -10,
  52,  14,  67,  48,  24,  17,  34,  -9,
  53,  11,  65,  44,  28,  26,  41,  -2,
  54,  12,  63,  45,  31,  29,  50,   3,
  54,  16,  60,  48,  36,  24,  60,   2,
  58,  20,  62,  51,  32,  22,  60,   2,
  65,  24,  72,  54,  21,  20,  45,   2,
  65,  26,  75,  56,  17,  19,  37,   3,
  64,  30,  77,  58,  12,  17,  26,   5,
  61,  33,  78,  60,   8,  17,  17,   7,
  58,  36,  77,  63,   5,  16,  12,   7,
  54,  39,  77,  64,   3,  16,   5,  10,
  50,  41,  76,  65,   1,  16,  -1,  12,
  45,  44,  72,  66,   1,  17,  -3,  15,
  40,  46,  69,  67,   2,  18,  -6,  19,
  34,  48,  64,  69,   3,  19,  -8,  20,
  28,  49,  59,  68,   6,  21,  -9,  26,
  21,  51,  54,  67,  10,  23, -10,  31,
  15,  52,  49,  67,  17,  26,  -9,  36,
  12,  53,  45,  65,  23,  29,  -4,  43,
  10,  54,  43,  62,  30,  32,   3,  52,
  14,  54,  46,  61,  27,  37,   3,  59,
  18,  61,  50,  65,  23,  28,   1,  55,
  23,  66,  53,  73,  20,  20,   2,  43,
  26,  65,  55,  75,  19,  16,   3,  34,
  29,  63,  58,  77,  18,  12,   5,  24,
  32,  61,  60,  78,  17,   8,   7,  16,
  35,  58,  62,  78,  16,   5,   6,  10,
  38,  54,  64,  77,  16,   2,   9,   5,
};
const int8_t mhL[] PROGMEM = { 
33, 0, 10, 1,
  46,  46,  65,  71,  11,   1,  12,  -2,
  47,  41,  66,  70,  11,   2,  15,  -3,
  47,  35,  67,  69,  11,   3,  18,  -4,
  48,  29,  69,  68,  12,   6,  20,  -5,
  48,  23,  68,  67,  12,   9,  26,  -6,
  50,  16,  68,  65,  12,  13,  30,  -7,
  50,   9,  67,  63,  13,  21,  36,  -6,
  51,   5,  65,  61,  13,  31,  43,  -3,
  52,   7,  62,  60,  13,  33,  52,  -1,
  52,  12,   0,  60,  14,  27,  90,  -1,
  54,  16,  65,  63,  13,  24,  55,  -2,
  56,  20,  73,  63,   9,  22,  43,  -1,
  55,  24,  76,  64,   8,  20,  31,  -1,
  54,  26,  78,  65,   7,  19,  22,   0,
  52,  30,  77,  65,   7,  17,  15,   1,
  51,  33,  77,  66,   6,  17,   9,   1,
  49,  37,  76,  66,   6,  16,   2,   2,
  48,  39,  73,  67,   5,  16,  -1,   3,
  47,  42,  70,  67,   5,  16,  -5,   4,
  45,  45,  67,  68,   5,  17,  -8,   5,
  44,  47,  62,  68,   5,  18,  -9,   5,
  42,  48,  57,  69,   5,  19, -10,   7,
  39,  50,  49,  69,   7,  21,  -9,   8,
  37,  52,  46,  70,   9,  24,  -5,   9,
  37,  53,  44,  70,  11,  27,   1,  10,
  38,  54,  46,  70,  11,  30,   3,  11,
  39,  57,  50,  72,  11,  29,   1,  11,
  39,  64,  53,  74,  11,  19,   2,   7,
  41,  64,  56,  74,  10,  13,   3,   7,
  42,  62,  58,  74,  10,   9,   5,   5,
  43,  59,  60,  73,  11,   6,   7,   3,
  44,  55,  63,  72,  11,   3,   7,   1,
  44,  51,  64,  72,  11,   2,   9,  -1,
};
const int8_t pcF[] PROGMEM = { 
15, 0, 0, 1,
  42,  60,  49,  70,   9, -25,  10, -24,
  49,  21,  55,  32,  10, -13,  13, -19,
  55,  -5,  59,   6,  14,  17,  19,   6,
  59,  -1,  60,  10,  20,  32,  29,  22,
  60,  11,  58,  21,  32,  22,  46,  15,
  77,  22,  74,  31,  22,  15,  37,  11,
  86,  33,  87,  41,  -9,  10,   0,   9,
  64,  41,  73,  48, -25,   9, -23,   9,
  25,  49,  36,  54, -15,  10, -21,  13,
  -5,  55,   6,  58,  16,  13,   5,  19,
  -1,  59,   9,  60,  31,  19,  21,  28,
  11,  59,  20,  56,  22,  33,  16,  47,
  22,  74,  31,  70,  15,  25,  11,  41,
  32,  87,  40,  87,  10,  -7,   9,   3,
  41,  66,  47,  74,   9, -25,   9, -22,
};
const int8_t phF[] PROGMEM = { 
22, 0, 15, 1,
 -44, -46,  53,  45,  11,   9,  -5,   9,
 -44, -46,  44,  48,  11,   9,  -8,  12,
 -44, -46,  32,  49,  11,   9,  -6,  15,
 -44, -47,  22,  52,  11,  11,  -2,  19,
 -44, -46,  18,  52,  11,  13,   7,  24,
 -44, -44,  20,  52,  11,  11,   9,  32,
 -42, -44,  26,  52,   7,  11,   6,  37,
 -43, -44,  31,  58,   5,  11,   5,  32,
 -44, -44,  35,  64,   7,  11,   5,  20,
 -44, -44,  40,  63,   7,  11,   5,   7,
 -44, -44,  43,  58,   7,  11,   7,  -2,
 -46, -44,  47,  51,   9,  11,   9,  -7,
 -46, -44,  49,  40,   9,  11,  12,  -8,
 -46, -44,  51,  28,   9,  11,  16,  -6,
 -47, -44,  52,  19,  12,  11,  20,   1,
 -45, -44,  53,  18,  11,  11,  27,   8,
 -44, -43,  51,  21,  11,   9,  37,   9,
 -44, -43,  54,  27,  11,   7,  38,   7,
 -44, -44,  61,  32,  11,   7,  27,   6,
 -44, -44,  64,  36,  11,   7,  13,   6,
 -44, -44,  61,  41,  11,   7,   2,   7,
 -44, -44,  55,  44,  11,   7,  -5,   9,
};
const int8_t phL[] PROGMEM = { 
16, 5, 15, 1,
 -45, -44,  53,  43,   9,   7,  -5,   3,
 -45, -44,  40,  45,   9,   7,  -8,   3,
 -45, -46,  23,  47,   9,   9,  -3,   3,
 -45, -46,  18,  48,   9,  11,   7,   5,
 -45, -45,  21,  49,   9,  11,   9,   6,
 -45, -45,  29,  52,   9,  11,   6,   6,
 -45, -45,  35,  54,   9,  11,   5,   2,
 -45, -45,  41,  51,   9,  11,   7,  -2,
 -45, -45,  45,  47,   9,  11,   9,  -2,
 -45, -45,  49,  43,   9,  11,  12,  -3,
 -45, -45,  51,  38,   9,  11,  19,  -3,
 -45, -45,  52,  35,   9,  11,  26,   0,
 -45, -44,  51,  36,   9,   9,  37,   1,
 -45, -43,  57,  39,   9,   6,  35,   1,
 -45, -44,  64,  40,   9,   7,  18,   2,
 -45, -44,  61,  42,   9,   7,   2,   1,
};
const int8_t trF[] PROGMEM = { 
21, 0, 0, 1,
  41,  47,  52,  59,   9,   0,  11,   3,
  46,  35,  55,  49,  11,   2,  16,   0,
  51,  21,  57,  38,  13,   9,  22,   1,
  54,  11,  58,  30,  16,  16,  29,   3,
  57,   9,  58,  26,  21,  20,  39,   8,
  57,   9,  54,  26,  28,  22,  51,  11,
  58,  11,  56,  28,  28,  22,  51,  12,
  62,  17,  61,  34,  22,  18,  43,  10,
  65,  25,  64,  40,  16,  13,  36,   9,
  60,  32,  65,  46,   7,  10,  18,   9,
  52,  39,  61,  51,   2,   9,   8,  10,
  42,  44,  55,  54,   0,  11,   1,  16,
  28,  49,  44,  57,   5,  12,   0,  20,
  13,  53,  31,  58,  14,  15,   3,  27,
   9,  56,  27,  58,  18,  19,   7,  35,
   8,  57,  26,  55,  22,  27,  10,  49,
   9,  58,  27,  56,  24,  27,  12,  49,
  12,  61,  30,  59,  21,  24,  11,  45,
  21,  64,  37,  63,  15,  19,   9,  39,
  28,  62,  43,  65,  12,  10,   9,  24,
  36,  55,  49,  63,   9,   3,  10,  12,
};
const int8_t trL[] PROGMEM = { 
21, 0, 0, 1,
  48,  47,  52,  54,   5,   0,  11,   5,
  50,  35,  55,  50,   6,   2,  16,   4,
  52,  21,  57,  47,   6,   9,  22,   3,
  54,  11,  58,  44,   7,  16,  29,   3,
  56,   9,  58,  43,   8,  20,  39,   3,
  55,   9,  54,  44,  10,  22,  51,   5,
  55,  11,  56,  44,  11,  22,  51,   5,
  57,  17,  61,  45,   9,  18,  43,   5,
  57,  25,  64,  47,   9,  13,  36,   5,
  55,  32,  65,  49,   5,  10,  18,   6,
  52,  39,  61,  50,   4,   9,   8,   6,
  49,  44,  55,  52,   3,  11,   1,   7,
  45,  49,  44,  54,   3,  12,   0,   7,
  42,  53,  31,  56,   3,  15,   3,   8,
  40,  56,  27,  57,   3,  19,   7,  10,
  39,  57,  26,  57,   6,  27,  10,  12,
  40,  58,  27,  57,   5,  27,  12,  13,
  40,  61,  30,  58,   5,  24,  11,  11,
  43,  64,  37,  58,   5,  19,   9,  11,
  45,  62,  43,  58,   5,  10,   9,   8,
  47,  55,  49,  56,   5,   3,  10,   6,
};
const int8_t vtF[] PROGMEM = { 
15, 0, 0, 1,
  48,  39,  63,  52, -10,   7,  -8,   9,
  41,  39,  55,  52,   3,   7,   5,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  46,  52,  61,   7,  -6,   9,  -5,
  39,  52,  52,  69,   7, -19,   9, -17,
  39,  53,  52,  72,   7, -22,   9, -20,
  39,  48,  52,  63,   7, -10,   9,  -8,
  39,  41,  52,  55,   7,   3,   9,   5,
  39,  39,  52,  52,   7,   7,   9,   9,
  39,  39,  52,  52,   7,   7,   9,   9,
  43,  39,  57,  52,   0,   7,   2,   9,
  49,  39,  65,  52, -13,   7, -11,   9,
  53,  39,  72,  52, -22,   7, -20,   9,
  51,  39,  67,  52, -16,   7, -14,   9,
};
const int8_t vtL[] PROGMEM = { 
36, 0, 0, 1,
  29,  26,  29,  26,  27,  22,  27,  22,
  27,  26,  31,  25,  28,  22,  28,  25,
  26,  25,  33,  23,  30,  24,  30,  27,
  25,  25,  36,  23,  31,  24,  31,  27,
  23,  25,  38,  24,  33,  22,  28,  26,
  20,  23,  41,  29,  35,  21,  24,  20,
  17,  17,  43,  34,  39,  27,  24,  14,
  16,  11,  46,  39,  41,  35,  24,  13,
  13,  10,  46,  42,  42,  38,  24,  16,
  10,  10,  44,  45,  40,  40,  20,  23,
  10,  13,  42,  46,  38,  42,  16,  24,
  11,  16,  37,  44,  35,  41,  12,  24,
  17,  17,  31,  43,  27,  39,  17,  24,
  23,  20,  26,  39,  21,  35,  24,  26,
  25,  23,  24,  37,  22,  33,  26,  30,
  25,  25,  23,  35,  24,  31,  27,  31,
  25,  26,  24,  33,  24,  30,  26,  30,
  26,  27,  26,  30,  22,  28,  24,  27,
  26,  29,  26,  28,  22,  27,  21,  27,
  25,  31,  26,  26,  25,  28,  23,  29,
  23,  33,  25,  26,  27,  30,  25,  30,
  23,  36,  25,  24,  27,  31,  22,  32,
  24,  38,  25,  22,  26,  28,  20,  34,
  29,  41,  20,  19,  20,  24,  23,  37,
  34,  43,  13,  17,  14,  24,  31,  39,
  39,  46,  10,  14,  13,  24,  38,  42,
  42,  46,  10,  11,  16,  24,  39,  41,
  45,  44,  11,  10,  23,  20,  41,  39,
  46,  42,  14,  10,  24,  16,  42,  38,
  44,  37,  17,  13,  24,  12,  39,  31,
  43,  31,  19,  20,  24,  17,  37,  23,
  39,  26,  22,  25,  26,  24,  34,  20,
  37,  24,  24,  25,  30,  26,  32,  22,
  35,  23,  26,  25,  31,  27,  30,  25,
  33,  24,  26,  26,  30,  26,  29,  23,
  30,  26,  28,  26,  27,  24,  27,  21,
};
const int8_t wkF[] PROGMEM = { 
39, 0, 0, 1,
  18,  54,  58,  52,   7,  13,  -2,   9,
  14,  56,  52,  54,  12,  14,  -3,  10,
  15,  57,  46,  55,  17,  15,  -4,  11,
  16,  58,  38,  57,  16,  17,  -2,  12,
  19,  59,  31,  58,  13,  19,   1,  14,
  22,  59,  24,  60,  12,  22,   6,  14,
  26,  60,  21,  61,  10,  24,  12,  16,
  28,  58,  23,  62,   9,  30,  16,  18,
  31,  61,  25,  63,   8,  30,  13,  20,
  34,  67,  28,  63,   7,  23,  12,  24,
  36,  69,  31,  63,   6,  15,  11,  27,
  38,  68,  34,  63,   7,   8,  10,  31,
  41,  65,  36,  62,   7,   3,   9,  35,
  43,  60,  39,  65,   7,  -1,   9,  37,
  46,  55,  41,  70,   7,  -3,   9,  27,
  47,  50,  43,  71,   7,  -5,   9,  23,
  49,  43,  47,  71,   8,  -5,   7,  14,
  51,  35,  48,  69,   8,  -3,   8,   8,
  53,  28,  51,  66,   9,   1,   8,   2,
  54,  18,  52,  63,  12,   7,   9,  -2,
  55,  15,  54,  56,  14,  10,  10,  -3,
  56,  13,  55,  51,  15,  16,  11,  -4,
  57,  16,  57,  43,  17,  16,  12,  -3,
  58,  18,  58,  36,  19,  14,  14,  -2,
  59,  21,  60,  28,  21,  12,  14,   2,
  60,  25,  61,  23,  24,  10,  16,   9,
  60,  28,  62,  22,  27,   9,  18,  15,
  60,  31,  63,  23,  30,   8,  20,  16,
  66,  32,  63,  26,  24,   7,  24,  13,
  68,  35,  63,  29,  19,   6,  27,  11,
  68,  38,  63,  32,  10,   6,  31,  10,
  66,  40,  62,  35,   4,   7,  35,  10,
  62,  42,  65,  37,   0,   7,  37,   9,
  57,  45,  70,  39,  -2,   7,  27,   9,
  52,  47,  71,  41,  -5,   7,  23,   9,
  45,  48,  71,  44,  -5,   8,  14,   9,
  38,  51,  69,  47,  -3,   8,   8,   7,
  30,  52,  66,  49,  -1,   9,   2,   8,
  22,  53,  63,  51,   4,  12,  -2,   8,
};
const int8_t wkL[] PROGMEM = { 
39, 0, 0, 1,
  47,  54,  58,  51,  -2,  13,  -2,   2,
  45,  56,  52,  52,   0,  14,  -3,   2,
  45,  57,  46,  52,   1,  15,  -4,   2,
  45,  58,  38,  53,   1,  17,  -2,   2,
  46,  59,  31,  54,   1,  19,   1,   2,
  47,  59,  24,  54,   1,  22,   6,   3,
  48,  60,  21,  55,   2,  24,  12,   3,
  49,  58,  23,  56,   1,  30,  16,   3,
  49,  61,  25,  57,   1,  30,  13,   3,
  50,  67,  28,  57,   1,  23,  12,   4,
  51,  69,  31,  58,   2,  15,  11,   5,
  52,  68,  34,  58,   2,   8,  10,   5,
  52,  65,  36,  59,   2,   3,   9,   6,
  53,  60,  39,  61,   2,  -1,   9,   5,
  54,  55,  41,  62,   2,  -3,   9,   3,
  54,  50,  43,  62,   2,  -5,   9,   2,
  54,  43,  47,  60,   3,  -5,   7,   1,
  55,  35,  48,  58,   3,  -3,   8,   1,
  56,  28,  51,  57,   3,   1,   8,  -1,
  57,  18,  52,  55,   3,   7,   9,  -1,
  57,  15,  54,  53,   4,  10,  10,  -2,
  58,  13,  55,  50,   5,  16,  11,  -2,
  58,  16,  57,  49,   5,  16,  12,  -2,
  59,  18,  58,  46,   6,  14,  14,  -2,
  59,  21,  60,  44,   6,  12,  14,  -2,
  60,  25,  61,  43,   7,  10,  16,   0,
  60,  28,  62,  42,   7,   9,  18,   1,
  60,  31,  63,  42,  10,   8,  20,   3,
  62,  32,  63,  42,   6,   7,  24,   3,
  62,  35,  63,  44,   6,   6,  27,   1,
  63,  38,  63,  44,   3,   6,  31,   1,
  61,  40,  62,  45,   2,   7,  35,   1,
  60,  42,  65,  46,   1,   7,  37,   1,
  58,  45,  70,  47,   0,   7,  27,   1,
  57,  47,  71,  48,  -1,   7,  23,   2,
  54,  48,  71,  49,  -1,   8,  14,   1,
  53,  51,  69,  49,  -2,   8,   8,   1,
  50,  52,  66,  50,  -2,   9,   2,   1,
  49,  53,  63,  51,  -2,  12,  -2,   2,
};

const int8_t balance[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,};
const int8_t buttUp[] PROGMEM = { 
1, 0, 15, 1,
   20,  40,   0,   0,   5,   5,   3,   3,  90,  90,  45,  45, -60, -60,   5,   5,};
const int8_t calib[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};
const int8_t dropped[] PROGMEM = { 
1, 0, -75, 1,
    0,  30,   0,   0,  -5,  -5,  15,  15, -75, -75,  45,  45,  60,  60, -30, -30,};
const int8_t lifted[] PROGMEM = { 
1, 0, 75, 1,
    0, -20,   0,   0,   0,   0,   0,   0,  60,  60,  75,  75,  45,  45,  75,  75,};
const int8_t rest[] PROGMEM = { 
1, 0, 0, 1,
  -30, -80, -45,   0,  -3,  -3,   3,   3,  75,  75,  75,  75, -55, -55, -55, -55,};
const int8_t sit[] PROGMEM = { 
1, 0, -30, 1,
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,};
const int8_t str[] PROGMEM = { 
1, 0, 20, 1,
    0,  30,   0,   0,  -5,  -5,   0,   0, -75, -75,  30,  30,  60,  60,   0,   0,};
const int8_t zero[] PROGMEM = { 
1, 0, 0, 1,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,};

const int8_t bf[] PROGMEM = { 
-5, 0, 0, 1,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  54,  54,  54,  54, -18, -18, -18, -18,	 8, 2, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  10,  10, -44, -44, 100, 100,  50,  50,	48, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -16, -16,  52,  52, -56, -56, 125, 125,	 0, 1, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  54,  54,  82,  82, -44, -44, -50, -50,	48, 4, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 2, 0, 0,
};
const int8_t ck[] PROGMEM = { 
-3, 0, 0, 1,
 0, 1, 2, 
   45,   0,   0,   0,   0,   0,   0,   0,  45,  35,  38,  50, -30, -10,   0, -20,	 6, 1, 0, 0,
  -45,   0,   0,   0,   0,   0,   0,   0,  35,  45,  50,  38, -10, -30, -20,   0,	 6, 1, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t climbCeil[] PROGMEM = { 
-22, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  22,  22,  52,  52,  22,  22, -23, -23,	 8, 4, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -45,  10,  52,  37,  22,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -50,  10,  52,  37,  15,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64,  10,  52,  37,  15,  45, -23, -15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64,  10,  52,  37,  42,  45, -23, -15,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -50,  52,  37,  42,  45, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -50,  52,  37,  42,  22, -23, -15,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -64, -64,  35,  37,  42,  42, -10, -10,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -40, -40,  63,  63,   5,   5, -40, -40,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -40, -40,  -8,  -8,   5,   5,  35,  35,	 8, 3, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10, -35, -35,  15,  15,  -5,  -5,  35,  35,	 8, 1, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63,  63, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  20,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25,  63, -10, -25, -25,   0,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25, -10, -10, -25, -25,   0,  45,	 8, 2, 0, 0,
    0,   0, -23,   0,  -3,  -3,  10,  10,  25,  25, -10, -10, -25, -25,  45,  45,	 8, 2, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 4, 0, 0,
  -40,  10,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 4, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t fd[] PROGMEM = { 
-3, 0, 0, 1,
 0, 0, 0, 
  -30, -80, -45,   0,  -3,  -3,   3,   3,  70,  70,  70,  70, -55, -55, -55, -55,	 5, 0, 0, 0,
  -30, -80, -45,   0, -90, -90,   3,   3,  60,  60, -80, -80, -65, -65,  70,  70,	 5, 0, 0, 0,
    0,   0,   0,   0, -90, -90, -90, -90,  60,  60, -63, -63, -68, -68,  30,  30,	 4,10, 0, 0,
};
const int8_t ff[] PROGMEM = { 
-6, 0, 0, 1,
 0, 0, 0, 
  -80,   0,   0,   0,   0,   0,   0,   0,  22,  22,  30,  30,  86,  86,  30,  30,	 8, 0, 0, 0,
  -80,   0,   0,   0,   0,   0,   0,   0,  48,  48,  30,  30, 102, 102,  30,  30,	 8, 0, 0, 0,
  -80,   0,   0,   0,   0,   0,   0,   0, -20, -20,  40,  40,  42,  42, -12, -12,	48, 0, 0, 0,
  -80,   0,   0,   0,   0,   0,   0,   0,  12,  12, -22, -22,  -3,  -3,  31,  31,	48, 0, 0, 0,
   10, -80, -45,   0,  -3,  -3,   3,   3,  70,  70,  70,  70, -55, -55, -55, -55,	32, 0, 0, 0,
    0, -80, -45,   0,  -3,  -3,   3,   3,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t hi[] PROGMEM = { 
-4, 0, 0, 1,
 1, 2, 3, 
    0, -20, -60,   0,   0,   0,   0,   0,  35,  30, 120, 105,  75,  60, -40, -30,	 4, 2, 0, 0,
   35,  -5, -60,   0,   0,   0,   0,   0, -75,  30, 125,  95,  40,  75, -45, -30,	10, 0, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0, -60,  30, 125,  95,  60,  75, -45, -30,	10, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t jy[] PROGMEM = { 
-4, 0, 0, 1,
 1, 2, 2, 
    0, -20, -60,   0,   0,   0,   0,   0,  30,  30, 110, 125,  60,  60, -40, -50,	 4, 1, 0, 0,
   40,   0, -35,   0,   0,   0,   0,   0,  30, -60, 110, 125,  60, -10, -30, -45,	16, 0, 0, 0,
   65,  -5, -60,   0,   0,   0,   0,   0,  30,  10, 110, 125,  60, -60, -30, -40,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pd[] PROGMEM = { 
-8, 0, 0, 1,
 4, 5, 2, 
    0,   0, -45,   0,  -5,  -5,  20,  20,  45,  45, 105, 105,  45,  45, -45, -45,	 8, 0, 0, 0,
    0,   0,   0,   0,  -5,  -5,  20,  20,  30, -80, 105,  15,  45,  80, -45,  80,	 8, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  30,   6,   6,   6, -60,  79,  79,  56,	16, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,   6, -60,   0, -60,  56,	 8,20, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  30,	30, 0, 0, 0,
   45,   0,   0,   0,   0,   0,   0,   0,  45, -75,  90,  25, -60,   0, -60,  45,	16,20, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pee[] PROGMEM = { 
-5, 0, 0, 1,
 2, 3, 3, 
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  60,  70,  45,	 6, 0, 0, 0,
   45,  20,   0,   0,  15, -10,  60, -10,  60,  53, 115,  60, -30,  40,  50,  21,	 2,10, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40,  90,  45,  10,  50,  70,  45,	16, 0, 0, 0,
   30,  20,   0,   0,  15, -10,  60, -10,  40,  40, 103,  45,  10,  50,  80,  45,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pu[] PROGMEM = { 
-10, 0, 0, 1,
 7, 8, 3, 
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  21,  50,  15,  15,  41,	12, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  30,  50,  15,  15,  14,	16, 0, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  27,  35,  40,  60,  50,  15,  20,  45,	16, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  42,  35,  40,  60,  25,  20,  20,  60,	12, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  48,  45,  75,  60,  20,  37,  20,  60,	12, 0, 0, 0,
  -15,   0,   0,   0,   0,   0,   0,   0,  60,  60,  70,  70,  15,  15,  60,  60,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30, 110, 110,  60,  60,  60,  60,	 8, 1, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  75,  70,  85,  85, -50, -50,  60,  60,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t pu1[] PROGMEM = { 
-13, 0, 0, 1,
 8, 9, 3, 
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  40,  24,  50,  15,  15,  41,	12, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  30,  35,  41,  30,  50,  15,  15,  16,	12, 0, 0, 0,
   30,   0,   0,   0,   0,   0,   0,   0,  27,  35,  41,  60,  50,  15,  20,  45,	12, 0, 0, 0,
   15,   0,   0,   0,   0,   0,   0,   0,  45,  35,  33,  60,  25,  20,  28,  60,	12, 0, 0, 0,
  -45,   0,   0,   0,   0,   0,   0,   0,  68,  32,  75, 100,   6, 108, -18,  89,	 8, 4, 0, 0,
  -45,   0,   0,   0,   0,   0,   0,   0,  68,  80,  75, 100,   6, -15, -18,  89,	16, 0, 0, 0,
   58,   0,   0,   0,   0,   0,   0,   0,  68, -73,  75, 100,   6,  -5, -18,  89,	16, 0, 0, 0,
   58,   0,   0,   0,   0,   0,   0,   0,  74,-125,  42, 100, -34,  60, -24,  62,	12, 2, 0, 0,
    8,   0,   0,   0,   0,   0,   0,   0,  58, -67,  55, 110,  10,  11, -17,  80,	 4, 2, 0, 0,
    8,   0,   0,   0,   0,   0,   0,   0,  58,  85,  55, 110,  10,  -6, -17,  80,	16, 0, 0, 0,
  -21,   0,   0,   0,   0,   0,   0,   0,  49,  34,  93,  83,  21,  51, -17,  89,	12, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t rc[] PROGMEM = { 
-4, 0, 0, 2,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0, -88, -43,  67, 100,  42, -35,  42,  42,	32, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -83, -88, 100,  60,  42,  42,  42,  50,	32, 0, 0, 0,
   -8, -20, -11,   0,  -1,  -1,   0,   0,  18,  18,  18,  18, -14, -14, -14, -14,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t rlL[] PROGMEM = { 
-6, 0, 0, 2,
 0, 4, 0, 
  -15,   0,   0,   0,  15,  -8,  -8,  15,  32,   1,  -2,  35, -25,  47,  45, -23,	32, 2, 0, 0,
   15, -40,  22,   0,  -2,  -2,   1,   1,   3, -48,  51,   1,  42,  46,  40,  42,	16, 1, 0, 0,
   15, -40,  22,   0,  -2,  -2,   1,   1, -84, -48,  55,  90,  42, -28,  60,  42,	48, 0, 0, 0,
   15, -40,  22,   0,  -2,  -2,   1,   1, -84, -76,  60,  90,  42,  19,  60,  42,	48, 0, 0, 0,
   15, -40,  22,   0,  -2,  -2,   1,   1,  35,  35,  35,  35, -28, -28, -28, -28,	16, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  15,  15,  15,  15,  15,  15,  15,  15,	 8, 0, 0, 0,
};
const int8_t rt[] PROGMEM = { 
-6, 0, 0, 1,
 0, 5, 3, 
  -30, -80, -45,   0,  30, -30,  10, -30,  38,  20, -30,  43,  25,  10,  65,  17,	 1, 0, 0, 0,
  -30, -80, -45,   0, -30,  30, -30,  10,  20,  38,  43, -30,  10,  25,  17,  65,	 1, 0, 0, 0,
  -30, -80, -45,   0,  30, -30, -30,  30,  30,  40,  40,  30,  30,  10,  10,  30,	 1, 0, 0, 0,
  -30, -80, -45,   0,   0,   0,   0,   0,  45,  45,  45,  45,  30,  30,  30,  30,	 1, 0, 0, 0,
  -30, -80, -45,   0, -30,  30,  30, -30,  40,  30,  30,  40,  10,  30,  30,  10,	 1, 0, 0, 0,
  -30, -80, -45,   0,   0,   0,   0,   0,  15,  15,  15,  15,  30,  30,  30,  30,	 1, 0, 0, 0,
};
const int8_t stp[] PROGMEM = { 
-23, 0, 0, 1,
 0, 0, 0, 
    0,   0,   0,   0,   0,   0,   0,   0,  25,  40,  30,  40,  40,  20,  30,  20,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  25,  35,  35,  -5,  40,  25,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  45,  25,  35,  -5, -70,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -70,  25,  35,  -5,  45,  35,  25,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  25,  30,  30,  70,  35,  30,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -50,  45,  25,  30,  70,   0,  35,  30,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -40,  60,  20,  25,  70, -75,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -60,  35,  35,  50,  35,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -45, -40,  35,  35,  50,  65,  50,  35,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  40,  50,  50,  60,  60,  90,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  50,  65,  15,  60,  30,  40,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  40,  60,  80,  10,  60,  20,  60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  60,  80,  15,  60,  30,  65,  80,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0, -15,  60,  80,  35,  50,  70,  65,  55,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 125,  40,  30,  55,  65,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 115,  40,  30,  55, -85,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  55,  60,  40,  35,  55, -60,  60,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5,  70,  60,  35,  35, -30, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   5, -15,  60,  35,  35,  35, -20,  75,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  80,  90,  35,  30, -60,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70, 125,  45,  30, -45,  90,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  65, -10,  70,  60,  45,  30, -45, -45,	 8, 0, 0, 0,
    0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  30,  30,  30,  30,  30,  30,	 8, 0, 0, 0,
};
const int8_t ts[] PROGMEM = { 
-2, 0, 0, 1,
 0, 0, 0, 
   30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,	32, 0, 0, 0,
   75,  75,  75,  75,  75,  75,  75,  75,  75,  75,  75,  75, -55, -55, -55, -55,	32, 0, 0, 0,
};
  const char* skillNameWithType[]={"bdFI","bkI","bkLI","crFI","crLI","hlwI","mhFI","mhLI","pcFI","phFI","phLI","trFI","trLI","vtFI","vtLI","wkFI","wkLI","balanceI","buttUpI","calibI","droppedI","liftedI","restI","sitI","strI","zeroN","bfI","ckI","climbCeilI","fdI","ffI","hiI","jyI","pdI","peeI","puI","pu1I","rcI","rlLI","rtI","stpI","tsI",};
#if !defined(MAIN_SKETCH) || !defined(I2C_EEPROM)
		//if it's not the main sketch to save data or there's no external EEPROM, 
		//the list should always contain all information.
  const int8_t* progmemPointer[] = {bdF, bk, bkL, crF, crL, hlw, mhF, mhL, pcF, phF, phL, trF, trL, vtF, vtL, wkF, wkL, balance, buttUp, calib, dropped, lifted, rest, sit, str, zero, bf, ck, climbCeil, fd, ff, hi, jy, pd, pee, pu, pu1, rc, rlL, rt, stp, ts, };
#else	//only need to know the pointers to newbilities, because the intuitions have been saved onto external EEPROM,
	//while the newbilities on progmem are assigned to new addresses
  const int8_t* progmemPointer[] = {zero, };
#endif
//the total byte of instincts is 6312
//the maximal array size is 317 bytes of wkF. 
//Make sure to leave enough memory for SRAM to work properly. Any single skill should be smaller than 400 bytes for safety.
