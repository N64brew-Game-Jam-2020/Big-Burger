// Original: good.png
// Format: 16-bit RGBA (5-5-5-1)
struct {
  u32 width;
  u32 height;
  u32 size;
  u32 chunk_height;
  u32 chunk_count;
  u16 pixels[4092];
} good_img = {
  124,
  33,
  4092,
  16,
  3,
  {
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x40F, 0x555, 0x699, 0x699, 0x7DF, 0x7DF, 0x699, 0x699, 0x555, 0x40F, 0x105, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x209, 0x513, 0x5D5, 0x699, 0x71B, 0x7DF, 0x75B, 0x699, 0x657, 0x513, 0x2CB, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x207, 0x511, 0x5D5, 0x697, 0x719, 0x7DD, 0x75B, 0x697, 0x657, 0x511, 0x2C9, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x105, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x34B, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x209, 0x5D5, 0x7DD, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DD, 0x5D5, 0x209, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x491, 0x699, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x75B, 0x513, 0x105, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x48F, 0x697, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DB, 0x7DB, 0x7DB, 0x759, 0x4D1, 0x105, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x34B, 0x7DB, 0x7DB, 0x7DB, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x693, 0x4CF, 0x103, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x513, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DD, 0x513, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x2CB, 0x699, 0x7DF, 0x7DF, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DB, 0x40D, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x2C9, 0x697, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7D9, 0x7D9, 0x3CB, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x349, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D5, 0x4CD, 0x103, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x105, 0x71B, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x5D5, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x48F, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x5D3, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x48D, 0x7DB, 0x7DB, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x5D1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x349, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D5, 0x7D7, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x753, 0x2C7, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x1, 0x105, 0x71B, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DF, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x5D5, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x48F, 0x7DD, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7D9, 0x5D3, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x48D, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D5, 0x7D5, 0x5CF, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x347, 0x7D5, 0x7D5, 0x7D5, 0x7D3, 0x7D5, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D1, 0x7D1, 0x449, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x657, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x3CD, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x3CD, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x5D1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x3CB, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D5, 0x7D7, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D3, 0x7D5, 0x7D3, 0x7D3, 0x5CD, 0x1, 0x1, 0x1, 0x1, 0x1, 0x347, 0x7D3, 0x7D3, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x345, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x40D, 0x7DD, 0x7DD, 0x7DD, 0x7DD, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x655, 0x48F, 0x34B, 0x34B, 0x48F, 0x655, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7D9, 0x103, 0x1, 0x1, 0x1, 0x1, 0x103, 0x7D7, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D5, 0x3C9, 0x1, 0x1, 0x0, 0x1, 0x1, 0x103, 0x7D3, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D3, 0x7D5, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x3C7, 0x1, 0x1, 0x1, 0x1, 0x345, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x68B, 0x68B, 0x74B, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CB, 0x7CB, 0x7CB, 0x78B, 0x201, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x759, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x7DB, 0x717, 0x2C9, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x349, 0x7D7, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x3CB, 0x1, 0x1, 0x1, 0x1, 0x5D1, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x5CF, 0x349, 0x1, 0x1, 0x1, 0x2C7, 0x4CD, 0x753, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D3, 0x7D5, 0x751, 0x103, 0x1, 0x1, 0x1, 0x1, 0x5CD, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x5CB, 0x345, 0x1, 0x1, 0x1, 0x2C5, 0x4C9, 0x74D, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x74B, 0x101, 0x1, 0x1, 0x1, 0x345, 0x7CD, 0x7CD, 0x7CB, 0x7CD, 0x7CB, 0x7CB, 0x7CB, 0x1, 0x1, 0x1, 0x1, 0x3C3, 0x687, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C7, 0x7C7, 0x685, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x3CB, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x7D9, 0x755, 0x103, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2C7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x755, 0x4CD, 0x205, 0x1, 0x1, 0x1, 0x1, 0x205, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x711, 0x205, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x101, 0x5CD, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x4C9, 0x1, 0x1, 0x1, 0x203, 0x7D1, 0x7CF, 0x7D1, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x70D, 0x203, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x101, 0x5C9, 0x7CD, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x4C5, 0x1, 0x1, 0x1, 0x341, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C7, 0x7C7, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x443, 0x7C5, 0x7C5, 0x7C3, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x341, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x651, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x7D7, 0x349, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x4CD, 0x7D5, 0x691, 0x3C9, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x54D, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x70F, 0x101, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x5CB, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x7CF, 0x74D, 0x1, 0x1, 0x1, 0x549, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CB, 0x7CD, 0x70B, 0x101, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x5C5, 0x7C9, 0x7C9, 0x7C7, 0x7C7, 0x7C7, 0x7C7, 0x7C7, 0x747, 0x1, 0x1, 0x1, 0x341, 0x7C5, 0x7C3, 0x7C3, 0x7C1, 0x7C3, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x441, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x601, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x7D5, 0x691, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x101, 0x203, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x74F, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7CF, 0x7D1, 0x7CF, 0x203, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x70B, 0x7CD, 0x7CD, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x2C3, 0x1, 0x1, 0x749, 0x7CB, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x201, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x701, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x2C1, 0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x681, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x101, 0x1, 0x1,
    0x1, 0x1, 0x2C5, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x7D3, 0x4CB, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x203, 0x7CF, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x5C9, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x3C3, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C7, 0x7C7, 0x7C7, 0x443, 0x1, 0x201, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x7C3, 0x7C3, 0x5C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x3C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x441, 0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x3C1, 0x1, 0x1,
    0x1, 0x1, 0x345, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7D1, 0x7CF, 0x2C5, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x345, 0x343, 0x343, 0x343, 0x1, 0x343, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7C9, 0x7C9, 0x341, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x785, 0x7C3, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x4C1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x341, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x781, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x4C1, 0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x781, 0x7C1, 0x7C1, 0x7C1, 0x7C7, 0x37CB, 0x4FCD, 0x34C9, 0x1, 0x1,
    0x1, 0x1, 0x3C7, 0x7CF, 0x7CF, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x7CD, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C9, 0x7C7, 0x1, 0x341, 0x7C7, 0x7C7, 0x7C7, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x681, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x681, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x681, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x681, 0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C5, 0x17C9, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x664F, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x554B, 0x1, 0x1,
    0x1, 0x1, 0x4C5, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7CB, 0x7C9, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x7C7, 0x7C7, 0x7C7, 0x7C7, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x7C5, 0x7C3, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x441, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x681, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x681, 0x1, 0x441, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x681, 0x7C1, 0x7C7, 0x37CB, 0x4FCD, 0x5FCF, 0x77D1, 0x664D, 0x1, 0x1, 0x3347, 0x7FD3, 0x7FD3, 0x7FD3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x6E4F, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x97D5, 0x7691, 0x1, 0x1,
    0x1, 0x1, 0x341, 0x7C7, 0x7C7, 0x7C7, 0x7C7, 0x7C5, 0x7C5, 0x7C5, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x101, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x681, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x601, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x101, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x664F, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x660D, 0x1, 0x1, 0x3347, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x7E8F, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x9FD3, 0x9FD3, 0x5CCB, 0x1, 0x1,
    0x1, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x2C1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x781, 0x1, 0x341, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x3C1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C7, 0x37CB, 0x2CC7, 0x1, 0x2B45, 0x7FD1, 0x7FD1, 0x7FD3, 0x7FD3, 0x7FD3, 0x7FD3, 0x7FD3, 0x3BC7, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x97D5, 0x97D5, 0x97D5, 0x5CCB, 0x1, 0x1, 0x3B47, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x9FD3, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x9FD3, 0x9FD3, 0x9FD3, 0xA7D3, 0xA7D1, 0xA7D1, 0xA7D1, 0x64CB, 0x1, 0x1,
    0x1, 0x1, 0x201, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x441, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x681, 0x1, 0x101, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x5C1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x4449, 0x7FD3, 0x7FD3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x4449, 0x1, 0x901, 0x87D3, 0x87D3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x658D, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x5449, 0x97D3, 0x97D3, 0x97D3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x5449, 0x1, 0x1, 0x3B47, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0xA7D3, 0xA7D1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x4BC7, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0x4345, 0x1, 0x1,
    0x0, 0x1, 0x1, 0x741, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x601, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x341, 0x341, 0x341, 0x341, 0x341, 0x4C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x541, 0x1, 0x1, 0x46CB, 0x5FCF, 0x77D1, 0x7FD1, 0x7FD1, 0x7FD3, 0x7FD3, 0x7FD3, 0x2A85, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x901, 0x7F11, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x2203, 0x1, 0x1, 0x7ED1, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x3285, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1101, 0x9711, 0x9FD3, 0xA7D3, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0x2203, 0x1, 0x1, 0x4345, 0xA7D1, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x8E8D, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x1, 0x1, 0x1,
    0x0, 0x1, 0x1, 0x5C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x7C1, 0x2C1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x4CCB, 0x7FD1, 0x7FD3, 0x7FD3, 0x7FD3, 0x7FD3, 0x87D3, 0x87D3, 0x3BC7, 0x1, 0x1, 0x4CCB, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x8FD3, 0x8FD3, 0x8FD3, 0x7F11, 0x901, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x6D8D, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x86D1, 0x1, 0x1, 0x1, 0x5CCB, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9711, 0x1101, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x758B, 0xA7D1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0x96CF, 0x1, 0x1, 0x1, 0x4345, 0xAFD1, 0xAFCF, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x6CC9, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0xBFCF, 0x85C9, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0xB43, 0x4FCD, 0x5FCF, 0x77D1, 0x7FD1, 0x7FD1, 0x7FD3, 0x7FD3, 0x6ECF, 0x901, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x901, 0x8793, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8FD3, 0x8793, 0x1, 0x1, 0x1, 0x1101, 0x97D5, 0x97D5, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x8F93, 0x3B47, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2203, 0x7E8F, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0xA7D3, 0xA7D1, 0x5449, 0x1, 0x1, 0x1, 0x1101, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0xA791, 0x4345, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2A03, 0x8E8D, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x6447, 0x1, 0x1, 0x1, 0x4B45, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x74C7, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0x2A01, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x6E4F, 0x87D3, 0x87D3, 0x87D3, 0x87D3, 0x8FD3, 0x8FD3, 0x8FD3, 0x7ED1, 0x3347, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2203, 0x7ED1, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x5CCB, 0x1, 0x1, 0x1, 0x1, 0x5CCB, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x864F, 0x5449, 0x32C5, 0x1, 0x2203, 0x4BC7, 0x758D, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0x9F4F, 0x1, 0x1, 0x1, 0x1, 0x1, 0x6CC9, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFCF, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x968D, 0x6447, 0x3A83, 0x1, 0x2A03, 0x53C7, 0x85CB, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xAF4D, 0x1, 0x1, 0x1, 0x1, 0x4B45, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0x1, 0x1, 0x1, 0x42C3, 0x74C7, 0xB74B, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0x8DC7, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x3B47, 0x97D5, 0x97D5, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x97D3, 0x86D1, 0x5CCB, 0x5CCB, 0x5449, 0x5CCB, 0x760F, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9791, 0x1101, 0x1, 0x1, 0x1, 0x1, 0x1101, 0x9751, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFCF, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0x4345, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1901, 0xA74D, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0x4B45, 0x1, 0x1, 0x1, 0x1, 0x5343, 0xC7CD, 0xC7CD, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xBF49, 0x1901, 0x1, 0x1, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x1, 0x1, 0x5CCB, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0x9FD3, 0xA7D3, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0x4BC7, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x3A85, 0xA78F, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFCF, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x74C7, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x42C3, 0xB78D, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0x7CC7, 0x1, 0x1, 0x1, 0x1, 0x1, 0x5343, 0xCFCB, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xCF87, 0x42C1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x758D, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFCF, 0x5C47, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x6447, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0x8DC9, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x6C45, 0xC7CD, 0xC7CD, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0x95C7, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x5343, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xCF85, 0x42C1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x7D8B, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFD1, 0xAFCF, 0xAFCF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0x6447, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x42C3, 0xB78D, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CB, 0x74C7, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x42C3, 0xC789, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0x7CC3, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x5B41, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xAE83, 0x3201, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x53C7, 0xAF8F, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xB7CF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCF, 0xBFCD, 0xBFCD, 0xA6CB, 0x4B45, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1901, 0x8DC9, 0xC7CD, 0xC7CD, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xC7CB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xCFCB, 0xA687, 0x42C1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1901, 0x95C5, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C9, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xAE85, 0x42C1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x5B41, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xC743, 0x7441, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1901, 0x74C7, 0xAF4D, 0xBFCD, 0xBFCD, 0xBFCD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xC7CD, 0xAECB, 0x6C45, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x3201, 0x95C7, 0xC789, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xCFC9, 0xD7C9, 0xD7C9, 0x9E07, 0x5343, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x3201, 0x9DC3, 0xCF85, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C7, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xD7C5, 0xA603, 0x5B41, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x5B41, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xD7C3, 0xAE83, 0x9DC1, 0x63C1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x42C3, 0x74C7, 0x8547, 0xA689, 0xA689, 0xA689, 0xA689, 0x7CC5, 0x6C45, 0x3201, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x5341, 0x7CC3, 0x95C5, 0xAE87, 0xAE87, 0xAE85, 0xA605, 0x7CC3, 0x63C3, 0x1901, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x5B41, 0x84C1, 0x9DC1, 0xAE83, 0xAE83, 0xAE83, 0xA603, 0x84C1, 0x63C1, 0x1901, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
  }
};