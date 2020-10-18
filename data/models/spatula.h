Lights1 spatula_Handle_f3d_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 spatula_Metal_f3d_lights = gdSPDefLights1(
	0x61, 0x61, 0x61,
	0xC2, 0xC2, 0xC2, 0x28, 0x28, 0x28);

Vtx spatula_Plane_mesh_vtx_0[60] = {
	{{{40, 20, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-40, 20, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-40, -20, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{40, -20, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-40, 20, 0},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 20, 0},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{30, 20, -800},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-30, 20, -800},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{30, 0, -800},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-30, 20, -800},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{30, 20, -800},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-30, 0, -800},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{30, -20, -800},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-30, -20, -800},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{30, 0, -800},0, {1008, -16},{0x7F, 0x0, 0xFE, 0xFF}}},
	{{{30, 20, -800},0, {1008, -16},{0x7F, 0x0, 0xFE, 0xFF}}},
	{{{40, 20, 0},0, {1008, 1008},{0x7F, 0x0, 0xFE, 0xFF}}},
	{{{30, -20, -800},0, {1008, -16},{0x7F, 0x0, 0xFE, 0xFF}}},
	{{{40, -20, 0},0, {-16, 1008},{0x7F, 0x0, 0xFE, 0xFF}}},
	{{{-40, -20, 0},0, {-16, 1008},{0x81, 0x0, 0xFE, 0xFF}}},
	{{{-40, 20, 0},0, {-16, 1008},{0x81, 0x0, 0xFE, 0xFF}}},
	{{{-30, 20, -800},0, {-16, -16},{0x81, 0x0, 0xFE, 0xFF}}},
	{{{-30, 0, -800},0, {-16, -16},{0x81, 0x0, 0xFE, 0xFF}}},
	{{{-30, -20, -800},0, {-16, -16},{0x81, 0x0, 0xFE, 0xFF}}},
	{{{-30, -20, -800},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{30, -20, -800},0, {1008, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{40, -20, 0},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-40, -20, 0},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{38, 18, -2},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{38, -18, -2},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-38, -18, -2},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-38, 18, -2},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-38, 18, -2},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 18, -798},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{28, 18, -798},0, {1008, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{38, 18, -2},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{27, 1, -797},0, {1008, -16},{0x0, 0x5, 0x7F, 0xFF}}},
	{{{28, 18, -798},0, {1008, -16},{0x0, 0x5, 0x7F, 0xFF}}},
	{{{-28, 18, -798},0, {-16, -16},{0x0, 0x5, 0x7F, 0xFF}}},
	{{{-27, 1, -797},0, {-16, -16},{0x0, 0x5, 0x7F, 0xFF}}},
	{{{38, 18, -2},0, {1008, 1008},{0x81, 0x0, 0x2, 0xFF}}},
	{{{28, 18, -798},0, {1008, -16},{0x81, 0x0, 0x2, 0xFF}}},
	{{{27, 1, -797},0, {1008, -16},{0x81, 0x0, 0x2, 0xFF}}},
	{{{38, -18, -2},0, {-16, 1008},{0x81, 0x0, 0x2, 0xFF}}},
	{{{27, 1, -797},0, {1008, -16},{0x81, 0x0, 0x2, 0xFF}}},
	{{{28, -18, -798},0, {1008, -16},{0x81, 0x0, 0x2, 0xFF}}},
	{{{38, -18, -2},0, {-16, 1008},{0x81, 0x0, 0x2, 0xFF}}},
	{{{-27, 1, -797},0, {-16, -16},{0x0, 0xFB, 0x7F, 0xFF}}},
	{{{-28, -18, -798},0, {-16, -16},{0x0, 0xFB, 0x7F, 0xFF}}},
	{{{28, -18, -798},0, {1008, -16},{0x0, 0xFB, 0x7F, 0xFF}}},
	{{{27, 1, -797},0, {1008, -16},{0x0, 0xFB, 0x7F, 0xFF}}},
	{{{-28, 18, -798},0, {-16, -16},{0x7F, 0x0, 0x2, 0xFF}}},
	{{{-38, 18, -2},0, {-16, 1008},{0x7F, 0x0, 0x2, 0xFF}}},
	{{{-38, -18, -2},0, {-16, 1008},{0x7F, 0x0, 0x2, 0xFF}}},
	{{{-27, 1, -797},0, {-16, -16},{0x7F, 0x0, 0x2, 0xFF}}},
	{{{-28, -18, -798},0, {-16, -16},{0x7F, 0x0, 0x2, 0xFF}}},
	{{{-28, -18, -798},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-38, -18, -2},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{38, -18, -2},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, -18, -798},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx spatula_Plane_mesh_tri_0[] = {
	gsSPVertex(spatula_Plane_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_0 + 14, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(8, 9, 5, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_0 + 28, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_0 + 44, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};Vtx spatula_Plane_mesh_vtx_1[143] = {
	{{{30, 0, -840},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{30, 0, -800},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-30, 0, -800},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-30, 0, -840},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{180, -140, -1100},0, {-16, 1008},{0x0, 0x82, 0x12, 0xFF}}},
	{{{45, -130, -1030},0, {-16, 1008},{0x0, 0x82, 0x12, 0xFF}}},
	{{{-45, -130, -1030},0, {-16, 1008},{0x0, 0x82, 0x12, 0xFF}}},
	{{{-180, -140, -1100},0, {-16, 1008},{0x0, 0x82, 0x12, 0xFF}}},
	{{{-45, -130, -1030},0, {-16, 1008},{0x0, 0x97, 0x47, 0xFF}}},
	{{{45, -130, -1030},0, {-16, 1008},{0x0, 0x97, 0x47, 0xFF}}},
	{{{30, 0, -840},0, {-16, 1008},{0x0, 0x97, 0x47, 0xFF}}},
	{{{-30, 0, -840},0, {-16, 1008},{0x0, 0x97, 0x47, 0xFF}}},
	{{{30, 2, -841},0, {-16, 1008},{0x0, 0x7F, 0x2, 0xFF}}},
	{{{-30, 2, -841},0, {-16, 1008},{0x0, 0x7F, 0x2, 0xFF}}},
	{{{-27, 1, -797},0, {-16, 1008},{0x0, 0x7F, 0x2, 0xFF}}},
	{{{27, 1, -797},0, {-16, 1008},{0x0, 0x7F, 0x2, 0xFF}}},
	{{{180, -138, -1100},0, {-16, 1008},{0x0, 0x7E, 0xEE, 0xFF}}},
	{{{-180, -138, -1100},0, {-16, 1008},{0x0, 0x7E, 0xEE, 0xFF}}},
	{{{-45, -128, -1031},0, {-16, 1008},{0x0, 0x7E, 0xEE, 0xFF}}},
	{{{45, -128, -1031},0, {-16, 1008},{0x0, 0x7E, 0xEE, 0xFF}}},
	{{{-45, -128, -1031},0, {-16, 1008},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{-30, 2, -841},0, {-16, 1008},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{30, 2, -841},0, {-16, 1008},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{45, -128, -1031},0, {-16, 1008},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{30, 0, -800},0, {-16, 1008},{0x64, 0x4E, 0x4, 0xFF}}},
	{{{30, 0, -840},0, {-16, 1008},{0x64, 0x4E, 0x4, 0xFF}}},
	{{{30, 2, -841},0, {-16, 1008},{0x64, 0x4E, 0x4, 0xFF}}},
	{{{27, 1, -797},0, {-16, 1008},{0x64, 0x4E, 0x4, 0xFF}}},
	{{{-30, 0, -840},0, {-16, 1008},{0x9C, 0x4E, 0x4, 0xFF}}},
	{{{-30, 0, -800},0, {-16, 1008},{0x9C, 0x4E, 0x4, 0xFF}}},
	{{{-27, 1, -797},0, {-16, 1008},{0x9C, 0x4E, 0x4, 0xFF}}},
	{{{-30, 2, -841},0, {-16, 1008},{0x9C, 0x4E, 0x4, 0xFF}}},
	{{{-45, -130, -1030},0, {-16, 1008},{0x81, 0x3, 0x8, 0xFF}}},
	{{{-30, 0, -840},0, {-16, 1008},{0x81, 0x3, 0x8, 0xFF}}},
	{{{-30, 2, -841},0, {-16, 1008},{0x81, 0x3, 0x8, 0xFF}}},
	{{{-45, -128, -1031},0, {-16, 1008},{0x81, 0x3, 0x8, 0xFF}}},
	{{{-180, -140, -1100},0, {-16, 1008},{0xC5, 0x13, 0x6F, 0xFF}}},
	{{{-45, -130, -1030},0, {-16, 1008},{0xC5, 0x13, 0x6F, 0xFF}}},
	{{{-45, -128, -1031},0, {-16, 1008},{0xC5, 0x13, 0x6F, 0xFF}}},
	{{{-180, -138, -1100},0, {-16, 1008},{0xC5, 0x13, 0x6F, 0xFF}}},
	{{{180, -140, -1100},0, {-16, 1008},{0x7F, 0x0, 0x5, 0xFF}}},
	{{{200, -140, -1600},0, {-16, 1008},{0x7F, 0x0, 0x5, 0xFF}}},
	{{{200, -138, -1600},0, {-16, 1008},{0x7F, 0x0, 0x5, 0xFF}}},
	{{{180, -138, -1100},0, {-16, 1008},{0x7F, 0x0, 0x5, 0xFF}}},
	{{{-200, -140, -1600},0, {-16, 1008},{0x81, 0x0, 0x5, 0xFF}}},
	{{{-180, -140, -1100},0, {-16, 1008},{0x81, 0x0, 0x5, 0xFF}}},
	{{{-180, -138, -1100},0, {-16, 1008},{0x81, 0x0, 0x5, 0xFF}}},
	{{{-200, -138, -1600},0, {-16, 1008},{0x81, 0x0, 0x5, 0xFF}}},
	{{{-100, -140, -1560},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, -140, -1140},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, -138, -1140},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-100, -138, -1560},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{140, -140, -1560},0, {-16, 1008},{0x81, 0x0, 0xFA, 0xFF}}},
	{{{120, -140, -1140},0, {-16, 1008},{0x81, 0x0, 0xFA, 0xFF}}},
	{{{120, -138, -1140},0, {-16, 1008},{0x81, 0x0, 0xFA, 0xFF}}},
	{{{140, -138, -1560},0, {-16, 1008},{0x81, 0x0, 0xFA, 0xFF}}},
	{{{100, -140, -1140},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -140, -1560},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -138, -1560},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -138, -1140},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-120, -140, -1140},0, {-16, 1008},{0x7F, 0x0, 0xFA, 0xFF}}},
	{{{-140, -140, -1560},0, {-16, 1008},{0x7F, 0x0, 0xFA, 0xFF}}},
	{{{-140, -138, -1560},0, {-16, 1008},{0x7F, 0x0, 0xFA, 0xFF}}},
	{{{-120, -138, -1140},0, {-16, 1008},{0x7F, 0x0, 0xFA, 0xFF}}},
	{{{20, -140, -1560},0, {-16, 1008},{0x81, 0x0, 0xFD, 0xFF}}},
	{{{10, -140, -1140},0, {-16, 1008},{0x81, 0x0, 0xFD, 0xFF}}},
	{{{10, -138, -1140},0, {-16, 1008},{0x81, 0x0, 0xFD, 0xFF}}},
	{{{20, -138, -1560},0, {-16, 1008},{0x81, 0x0, 0xFD, 0xFF}}},
	{{{-10, -140, -1140},0, {-16, 1008},{0x7F, 0x0, 0xFD, 0xFF}}},
	{{{-20, -140, -1560},0, {-16, 1008},{0x7F, 0x0, 0xFD, 0xFF}}},
	{{{-20, -138, -1560},0, {-16, 1008},{0x7F, 0x0, 0xFD, 0xFF}}},
	{{{-10, -138, -1140},0, {-16, 1008},{0x7F, 0x0, 0xFD, 0xFF}}},
	{{{120, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{120, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-100, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-120, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-120, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-100, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{10, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-10, -140, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-10, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{10, -138, -1140},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{45, -130, -1030},0, {-16, 1008},{0x3B, 0x13, 0x6F, 0xFF}}},
	{{{180, -140, -1100},0, {-16, 1008},{0x3B, 0x13, 0x6F, 0xFF}}},
	{{{180, -138, -1100},0, {-16, 1008},{0x3B, 0x13, 0x6F, 0xFF}}},
	{{{45, -128, -1031},0, {-16, 1008},{0x3B, 0x13, 0x6F, 0xFF}}},
	{{{30, 0, -840},0, {-16, 1008},{0x7F, 0x3, 0x8, 0xFF}}},
	{{{45, -130, -1030},0, {-16, 1008},{0x7F, 0x3, 0x8, 0xFF}}},
	{{{45, -128, -1031},0, {-16, 1008},{0x7F, 0x3, 0x8, 0xFF}}},
	{{{30, 2, -841},0, {-16, 1008},{0x7F, 0x3, 0x8, 0xFF}}},
	{{{200, -140, -1600},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-200, -140, -1600},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-200, -138, -1600},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{200, -138, -1600},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-140, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-140, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-20, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{20, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{20, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-20, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{100, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{140, -140, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{140, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{100, -138, -1560},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{200, -140, -1600},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{180, -140, -1100},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{120, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-180, -140, -1100},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{120, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-180, -140, -1100},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-10, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-100, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-120, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-140, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-200, -140, -1600},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-100, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-20, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{140, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{200, -140, -1600},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{20, -140, -1560},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{10, -140, -1140},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{200, -138, -1600},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{140, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{120, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-200, -138, -1600},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-20, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-140, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-180, -138, -1100},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-120, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-10, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{180, -138, -1100},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{10, -138, -1140},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{20, -138, -1560},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx spatula_Plane_mesh_tri_1[] = {
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 112, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(2, 6, 5, 0),
	gsSP1Triangle(2, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(7, 11, 10, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(12, 1, 11, 0),
	gsSP1Triangle(10, 13, 9, 0),
	gsSP1Triangle(10, 14, 13, 0),
	gsSP1Triangle(10, 0, 14, 0),
	gsSP1Triangle(3, 14, 0, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(4, 9, 3, 0),
	gsSPVertex(spatula_Plane_mesh_vtx_1 + 127, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(8, 7, 3, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(11, 10, 8, 0),
	gsSP1Triangle(8, 12, 11, 0),
	gsSP1Triangle(8, 2, 12, 0),
	gsSP1Triangle(8, 13, 2, 0),
	gsSP1Triangle(0, 2, 13, 0),
	gsSP1Triangle(12, 14, 11, 0),
	gsSP1Triangle(4, 14, 12, 0),
	gsSP1Triangle(4, 15, 14, 0),
	gsSP1Triangle(5, 15, 4, 0),
	gsSP1Triangle(10, 11, 5, 0),
	gsSP1Triangle(10, 5, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spatula_Handle_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spatula_Handle_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_spatula_Metal_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spatula_Metal_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx spatula_Plane_mesh[] = {
	gsSPDisplayList(mat_spatula_Handle_f3d),
	gsSPDisplayList(spatula_Plane_mesh_tri_0),
	gsSPDisplayList(mat_spatula_Metal_f3d),
	gsSPDisplayList(spatula_Plane_mesh_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



