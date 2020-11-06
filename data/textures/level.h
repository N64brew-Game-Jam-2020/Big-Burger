// Original: level.png
// Format: 16-bit RGBA (5-5-5-1)
struct {
  u32 width;
  u32 height;
  u32 size;
  u32 chunk_height;
  u32 chunk_count;
  u16 pixels[442] __attribute__((__aligned__(8)));
} level_img __attribute__((__aligned__(8))) = {
  34,
  13,
  442,
  60,
  1,
  {
    0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0,
    0x1, 0x1, 0x8421, 0x94A5, 0x39CF, 0x1, 0x1, 0x6B5B, 0x94A5, 0x94A5, 0x94A5, 0x8421, 0x5AD7, 0x94A5, 0x8421, 0x1, 0x1, 0x1, 0x8421, 0x94A5, 0x39CF, 0x94A5, 0x94A5, 0x94A5, 0x94A5, 0x39CF, 0x39CF, 0x94A5, 0x8421, 0x1, 0x1, 0xDEF6, 0x0, 0x0,
    0x1, 0x1, 0xC631, 0xDEF7, 0x6B5B, 0x1, 0x1, 0x94A5, 0xDEF7, 0xDEF7, 0xDEF7, 0xC631, 0x39CF, 0xDEF7, 0xDEF7, 0x39CF, 0x1, 0x4A53, 0xDEF7, 0xD6B5, 0x2109, 0xDEF7, 0xDEF7, 0xDEF7, 0xDEF7, 0x6B5B, 0x6B5B, 0xDEF7, 0xC631, 0x1, 0x1, 0xDEF6, 0x0, 0x0,
    0x1, 0x1, 0xC631, 0xDEF7, 0x6B5B, 0x1, 0x1, 0x94A5, 0xDEF7, 0x94A5, 0x2109, 0x1, 0x1, 0xAD6B, 0xDEF7, 0x8421, 0x1, 0x9CE7, 0xDEF7, 0x9CE7, 0x2109, 0xDEF7, 0xDEF7, 0x2109, 0x2109, 0x1, 0x6B5B, 0xDEF7, 0xC631, 0x1, 0x1, 0xDEF6, 0x0, 0x0,
    0x1, 0x1, 0xC631, 0xDEF7, 0x6B5B, 0x1, 0x1, 0x94A5, 0xDEF7, 0xB5AD, 0x94A5, 0x8421, 0x1, 0x6B5B, 0xDEF7, 0xCE73, 0x2109, 0xD6B5, 0xDEF7, 0x4A53, 0x2109, 0xDEF7, 0xDEF7, 0x94A5, 0x94A5, 0x39CF, 0x6B5B, 0xDEF7, 0xC631, 0x1, 0x1, 0xDEF6, 0x0, 0x0,
    0x1, 0x1, 0x8421, 0x94A5, 0x4211, 0x1, 0x1, 0x6319, 0x94A5, 0x94A5, 0x94A5, 0x8421, 0x1, 0x1, 0x8421, 0x94A5, 0x739D, 0x94A5, 0x7BDF, 0x1, 0x1085, 0x94A5, 0x94A5, 0x94A5, 0x94A5, 0x4211, 0x4211, 0x94A5, 0x8421, 0x1, 0x1, 0x1, 0x0, 0x0,
    0x1, 0x1, 0x6B5B, 0x7BDF, 0x39CF, 0x1, 0x1, 0x5295, 0x7BDF, 0x5295, 0x843, 0x1, 0x1, 0x1, 0x4A53, 0x7BDF, 0x7BDF, 0x7BDF, 0x4211, 0x1, 0x843, 0x7BDF, 0x7BDF, 0x843, 0x843, 0x1, 0x39CF, 0x7BDF, 0x6B5B, 0x1, 0x1, 0x1, 0x1, 0x0,
    0x1, 0x1, 0x6B5B, 0x7BDF, 0x6B5B, 0x6B5B, 0x4A53, 0x5295, 0x7BDF, 0x739D, 0x6B5B, 0x5AD7, 0x1, 0x1, 0x1, 0x739D, 0x7BDF, 0x739D, 0x1, 0x1, 0x843, 0x7BDF, 0x7BDF, 0x6B5B, 0x6B5B, 0x318D, 0x39CF, 0x7BDF, 0x739D, 0x6B5B, 0x6B5B, 0x1, 0x1, 0x0,
    0x1, 0x1, 0x6B5B, 0x7BDF, 0x7BDF, 0x7BDF, 0x5295, 0x5295, 0x7BDF, 0x7BDF, 0x7BDF, 0x6B5B, 0x1, 0x1, 0x1, 0x5AD7, 0x7BDF, 0x4A53, 0x1, 0x1, 0x843, 0x7BDF, 0x7BDF, 0x7BDF, 0x7BDF, 0x39CF, 0x39CF, 0x7BDF, 0x7BDF, 0x7BDF, 0x7BDF, 0x843, 0x1, 0x1,
    0x1, 0x1, 0x1, 0x843, 0x843, 0x843, 0x1, 0x1, 0x843, 0x843, 0x843, 0x1, 0x1, 0x1, 0x1, 0x1, 0x843, 0x1, 0x1, 0x1, 0x1, 0x843, 0x843, 0x843, 0x843, 0x1, 0x1, 0x843, 0x843, 0x843, 0x843, 0x1, 0x1, 0x0,
    0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0
  }
};
