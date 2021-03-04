Lights1 ice_drill_IceDrill_lights = gdSPDefLights1(
	0x4A, 0x4A, 0x4A,
	0x8D, 0x8D, 0x8D, 0x0, 0x7F, 0x0);

Vtx ice_drill_IceDrillVisual_mesh_layer_1_vtx_cull[8] = {
	{{{-97, -200, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-97, -200, 90},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-97, 200, 90},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-97, 200, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{97, -200, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{97, -200, 90},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{97, 200, 90},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{97, 200, -100},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx ice_drill_IceDrillVisual_mesh_layer_1_vtx_0[28] = {
	{{{97, 200, 22},0, {685, 955},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{78, 200, -62},0, {685, 864},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 200, -100},0, {685, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{43, 200, 90},0, {685, 700},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-97, 200, 22},0, {685, 37},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-78, 200, -62},0, {685, 128},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-43, 200, 90},0, {685, 292},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{78, -150, -62},0, {304, 864},{0x64, 0x0, 0xB1, 0xFF}}},
	{{{97, -150, 22},0, {304, 955},{0x7C, 0x0, 0x1C, 0xFF}}},
	{{{88, -200, -20},0, {250, 909},{0x7C, 0x0, 0xE4, 0xFF}}},
	{{{97, 200, 22},0, {685, 955},{0x61, 0x4F, 0x16, 0xFF}}},
	{{{78, 200, -62},0, {685, 864},{0x4E, 0x4F, 0xC2, 0xFF}}},
	{{{0, -150, -100},0, {304, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{39, -200, -81},0, {250, 680},{0x37, 0x0, 0x8D, 0xFF}}},
	{{{0, 200, -100},0, {685, 496},{0x0, 0x4F, 0x9C, 0xFF}}},
	{{{-78, -150, -62},0, {304, 128},{0x9C, 0x0, 0xB1, 0xFF}}},
	{{{-39, -200, -81},0, {250, 312},{0xC9, 0x0, 0x8D, 0xFF}}},
	{{{-78, 200, -62},0, {685, 128},{0xB2, 0x4F, 0xC2, 0xFF}}},
	{{{-97, -150, 22},0, {304, 37},{0x84, 0x0, 0x1C, 0xFF}}},
	{{{-88, -200, -20},0, {250, 83},{0x84, 0x0, 0xE4, 0xFF}}},
	{{{-97, 200, 22},0, {685, 37},{0x9F, 0x4F, 0x16, 0xFF}}},
	{{{-43, -150, 90},0, {304, 292},{0xC9, 0x0, 0x73, 0xFF}}},
	{{{-70, -200, 56},0, {250, 165},{0x9C, 0x0, 0x4F, 0xFF}}},
	{{{-43, 200, 90},0, {685, 292},{0xD5, 0x4F, 0x5A, 0xFF}}},
	{{{43, -150, 90},0, {304, 700},{0x37, 0x0, 0x73, 0xFF}}},
	{{{0, -200, 90},0, {250, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{43, 200, 90},0, {685, 700},{0x2B, 0x4F, 0x5A, 0xFF}}},
	{{{70, -200, 56},0, {250, 827},{0x64, 0x0, 0x4F, 0xFF}}},
};

Gfx ice_drill_IceDrillVisual_mesh_layer_1_tri_0[] = {
	gsSPVertex(ice_drill_IceDrillVisual_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(4, 6, 3, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 10, 8, 0, 7, 11, 10, 0),
	gsSP2Triangles(12, 11, 7, 0, 12, 7, 13, 0),
	gsSP2Triangles(12, 14, 11, 0, 15, 14, 12, 0),
	gsSP2Triangles(15, 12, 16, 0, 15, 17, 14, 0),
	gsSP2Triangles(18, 17, 15, 0, 18, 15, 19, 0),
	gsSP2Triangles(18, 20, 17, 0, 21, 20, 18, 0),
	gsSP2Triangles(21, 18, 22, 0, 21, 23, 20, 0),
	gsSP2Triangles(24, 23, 21, 0, 24, 21, 25, 0),
	gsSP2Triangles(24, 26, 23, 0, 8, 26, 24, 0),
	gsSP2Triangles(8, 24, 27, 0, 8, 10, 26, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ice_drill_IceDrill[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(ice_drill_IceDrill_lights),
	gsSPEndDisplayList(),
};

Gfx ice_drill_IceDrillVisual_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(ice_drill_IceDrillVisual_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_ice_drill_IceDrill),
	gsSPDisplayList(ice_drill_IceDrillVisual_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx ice_drill_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

