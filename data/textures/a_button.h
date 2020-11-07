// Original: a_button.png
// Format: 16-bit RGBA (5-5-5-1)
struct {
  u32 width;
  u32 height;
  u32 size;
  u32 chunk_height;
  u32 chunk_count;
  u16 pixels[728] __attribute__((__aligned__(8)));
} a_button_img __attribute__((__aligned__(8))) = {
  26,
  28,
  728,
  78,
  1,
  {
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x5, 0x47, 0x47, 0x47, 0x47, 0x5, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x3, 0xCF, 0x1A1, 0x2AF, 0x12F1, 0x1AF1, 0x1B31, 0x1AF1, 0x12F1, 0x26F, 0x115, 0x3, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x8B, 0x1A1, 0xAB1, 0x2373, 0x3BB3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BB3, 0x2373, 0xAAF, 0xCF, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0xCF, 0x229, 0x1B31, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1B31, 0x15B, 0x1, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x8F, 0x229, 0x2333, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x2333, 0x159, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x47, 0x1A1, 0x1B31, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1B31, 0x8B, 0x1, 0x1, 0x0,
    0x1, 0x1, 0x1, 0x115, 0xAB1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x336F, 0x2B2B, 0x336D, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0xA6B, 0x1, 0x1, 0x1,
    0x1, 0x1, 0x47, 0x1E3, 0x2373, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1A1, 0x1A1, 0x1A1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x2373, 0x8B, 0x1, 0x1,
    0x1, 0x1, 0xCF, 0x2B1, 0x3BB3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BB1, 0x1E3, 0x1E3, 0x1E3, 0x3BB1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BB3, 0x1A1, 0x1, 0x1,
    0x1, 0x1, 0x115, 0x12F1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x22EB, 0x1E3, 0x1E3, 0x1E3, 0x22EB, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x12AD, 0x1, 0x1,
    0x1, 0x1, 0x117, 0x1AF1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1265, 0x1E3, 0x1E3, 0x1E3, 0x1265, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1AF1, 0x1, 0x1,
    0x1, 0x1, 0x117, 0x1B31, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x9E3, 0x1E3, 0x1AA9, 0x1E3, 0x1E3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1B31, 0x1, 0x1,
    0x1, 0x1, 0x117, 0x1AF1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x1E3, 0x1E3, 0x2B2B, 0x1E3, 0x1E3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x12F1, 0x1, 0x1,
    0x1, 0x1, 0x117, 0xAF1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BB3, 0x1E3, 0x1E3, 0x1A1, 0x1E3, 0x1E3, 0x3BB3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0xA6D, 0x1, 0x1,
    0x1, 0x1, 0x117, 0x26F, 0x33B3, 0x3BF3, 0x3BF3, 0x2B2D, 0x1E3, 0x1E3, 0x1A67, 0x1E3, 0x1E3, 0x2B2B, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x33B3, 0x1E3, 0x1, 0x1,
    0x1, 0x1, 0xD3, 0x19F, 0x2331, 0x3BF3, 0x3BF3, 0x1A67, 0x1E3, 0x1267, 0x3BF3, 0x1AA7, 0x1E3, 0x1A67, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x2331, 0x115, 0x1, 0x1,
    0x1, 0x1, 0x8B, 0x117, 0x2B1, 0x33B3, 0x3BF3, 0x2B2D, 0x1A67, 0x33B1, 0x3BF3, 0x33B1, 0x1A67, 0x2B2D, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x33B3, 0x229, 0x8B, 0x1, 0x1,
    0x1, 0x1, 0x3, 0x117, 0x15B, 0x12F1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0xAB1, 0x159, 0x3, 0x1, 0x1,
    0x0, 0x1, 0x1, 0x8F, 0x117, 0x1A1, 0x1AF1, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x12F1, 0x15B, 0x8F, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x115, 0x117, 0x1A1, 0x12F1, 0x33B3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BF3, 0x33B3, 0xAAF, 0x15B, 0x115, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x45, 0x117, 0x117, 0x117, 0x26D, 0x1AF1, 0x2B73, 0x3BB3, 0x3BF3, 0x3BF3, 0x3BF3, 0x3BB3, 0x2B73, 0x12F1, 0x229, 0x117, 0x117, 0x45, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x5, 0x115, 0x117, 0x117, 0x117, 0x1E5, 0x26F, 0x2B1, 0x2B1, 0x2B1, 0x26F, 0x1A1, 0x117, 0x117, 0x115, 0x5, 0x1, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x8D, 0x117, 0x117, 0x117, 0x117, 0x117, 0x117, 0x117, 0x117, 0x117, 0x117, 0x8D, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x3, 0x8B, 0xD1, 0x117, 0x117, 0x117, 0x117, 0xD1, 0x8B, 0x3, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
  }
};