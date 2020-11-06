// Original: rank_ss.png
// Format: 16-bit RGBA (5-5-5-1)
struct {
  u32 width;
  u32 height;
  u32 size;
  u32 chunk_height;
  u32 chunk_count;
  u16 pixels[494] __attribute__((__aligned__(8)));
} rank_ss_img __attribute__((__aligned__(8))) = {
  26,
  19,
  494,
  78,
  1,
  {
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x2101, 0xBD81, 0xEF41, 0xFFC1, 0xF781, 0xC601, 0x8C41, 0x2101, 0x1, 0x1, 0x1, 0x1, 0x7BC1, 0xD641, 0xFF81, 0xFF81, 0xDE81, 0xAD01, 0x5A81, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x4201, 0xF781, 0xFFC1, 0xFFC1, 0xFFC1, 0xFFC1, 0xFFC1, 0xFFC1, 0xBD81, 0x1, 0x1, 0x1, 0xACC1, 0xFF41, 0xFF41, 0xFF41, 0xFF01, 0xFF01, 0xFF01, 0xFEC1, 0x4181, 0x1, 0x1,
    0x0, 0x1, 0x1, 0xC5C1, 0xFF81, 0xFF81, 0xFF81, 0xFF81, 0xFF41, 0xFF41, 0xFF41, 0x41C1, 0x1, 0x1, 0x5A41, 0xFEC1, 0xFEC1, 0xFEC1, 0xFE81, 0xFE81, 0xFE81, 0xFE81, 0xBC81, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0xFF41, 0xFF41, 0xFF01, 0xE601, 0x2101, 0x1, 0x8BC1, 0xAC81, 0x1, 0x1, 0x1, 0x9BC1, 0xFE41, 0xFE41, 0xFE01, 0x9341, 0x1, 0x4141, 0xCC81, 0x4141, 0x1, 0x1, 0x0,
    0x1, 0x1, 0x4181, 0xFEC1, 0xFE81, 0xFE81, 0xCD01, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xBC01, 0xFDC1, 0xFD81, 0xFD81, 0x59C1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x1, 0x1, 0xFE01, 0xFE01, 0xFE01, 0xFE01, 0xE501, 0xA381, 0x4141, 0x1, 0x1, 0x1, 0x1, 0xA301, 0xFD41, 0xFD01, 0xFD01, 0xFCC1, 0xBB81, 0x8241, 0x1, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0xBC01, 0xFD81, 0xFD81, 0xFD41, 0xFD41, 0xFD41, 0xFD01, 0xB341, 0x2881, 0x1, 0x1, 0x4101, 0xFC85, 0xFC87, 0xFC87, 0xFC89, 0xFC49, 0xFC4B, 0xF3CB, 0x7183, 0x1, 0x1, 0x1,
    0x0, 0x1, 0x1, 0x2881, 0xB341, 0xFCC1, 0xFCC1, 0xFCC3, 0xFC85, 0xFC87, 0xFC87, 0xDB87, 0x1, 0x1, 0x1, 0x7183, 0xF3CB, 0xFC0D, 0xFB93, 0xFB17, 0xFB17, 0xFB19, 0xFB19, 0x7109, 0x1, 0x1,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x4101, 0xA285, 0xE389, 0xFC4B, 0xFC0D, 0xFC0D, 0xFB93, 0x58C7, 0x1, 0x1, 0x1, 0x1, 0x814B, 0xC213, 0xFAD9, 0xFADB, 0xFADB, 0xFADB, 0xCA15, 0x1, 0x1,
    0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xB1CF, 0xFB19, 0xFB19, 0xFB19, 0x7109, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2803, 0xFADD, 0xFA9D, 0xFA9F, 0xDA19, 0x1, 0x1,
    0x0, 0x1, 0x1, 0xA1CF, 0xA18F, 0x1, 0x1, 0x1, 0xA18F, 0xFADB, 0xFADD, 0xFADD, 0x710B, 0x1, 0x2803, 0xDA19, 0x4087, 0x1, 0x1, 0x2803, 0xFA5F, 0xFAA1, 0xFA61, 0xE1DB, 0x1, 0x1,
    0x1, 0x1, 0x2803, 0xFA9B, 0xFADD, 0xF25B, 0xC1D5, 0xD217, 0xFA9F, 0xFA9F, 0xFA9F, 0xFA9F, 0x2803, 0x1, 0xA153, 0xFA61, 0xFA61, 0xE1DB, 0xB157, 0xFA1F, 0xFA63, 0xFA63, 0xFA63, 0xB157, 0x1, 0x1,
    0x1, 0x1, 0xA193, 0xFA9F, 0xFA9F, 0xFA9F, 0xFAA1, 0xFAA1, 0xFA61, 0xFA61, 0xFA61, 0xA155, 0x1, 0x2805, 0xFA21, 0xFA63, 0xFA23, 0xFA23, 0xFA23, 0xFA25, 0xFA25, 0xFA25, 0xF9E3, 0x2805, 0x1, 0x1,
    0x1, 0x1, 0x2803, 0xA153, 0xFA61, 0xFA63, 0xFA63, 0xFA63, 0xFA63, 0xFA23, 0xA155, 0x1, 0x1, 0x1, 0x708F, 0xE19D, 0xFA25, 0xFA25, 0xF9E5, 0xF9E5, 0xF9E5, 0xE19F, 0x584B, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x1, 0x708F, 0x80D1, 0x80D1, 0x708F, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x4049, 0x708F, 0x90D3, 0x708F, 0x4049, 0x1, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0
  }
};
