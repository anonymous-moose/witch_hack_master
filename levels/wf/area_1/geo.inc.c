#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, wf_dl_MainAreaRoom_geo),
			GEO_BRANCH(1, wf_dl_SlideRoom_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 3470, 1820, -10078),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4881, -482, -2816, wf_dl_Cylinder_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2014, -1182, 6185, wf_dl_Plane_006_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2330, -115, -418, wf_dl_Plane_007_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_dl_MainAreaRoom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 3996, 327, 796),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4201, -504, 3158, wf_dl_BigWater_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3873, -408, -2421, wf_dl_Cube_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2104, -327, -2408, wf_dl_Cube_005_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3850, -219, -3067, wf_dl_Cube_007_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2064, -227, -1091, wf_dl_Cube_008_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5057, 752, -1582, wf_dl_Cube_009_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2289, 535, -6218, wf_dl_Cube_010_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 4033, -504, -1243, wf_dl_Cube_011_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3360, -327, 1100, wf_dl_Cube_013_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1472, 23, -2133, wf_dl_Cube_014_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2306, -504, 717, wf_dl_Cube_015_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 143, -227, 444, wf_dl_Cube_017_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(1, -350, 1272, -291, wf_dl_Cube_018_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(1, 718, 1272, -275, wf_dl_Cube_020_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5415, 430, -2234, wf_dl_Cylinder_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1629, -504, 1946, wf_dl_Cylinder_003_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1379, -504, 2630, wf_dl_Cylinder_004_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -865, -504, 1896, wf_dl_Cylinder_005_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -716, -504, 3046, wf_dl_Cylinder_006_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1419, -504, 3608, wf_dl_Cylinder_007_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5415, 1954, -2234, wf_dl_Cylinder_016_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3996, -327, -796, wf_dl_Dam_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3601, -38, 253, wf_dl_House_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -714, 315, -2393, wf_dl_House_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 709, -422, 647, wf_dl_House_002_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 832, 735, -2717, wf_dl_House_003_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 40, 1681, 736, wf_dl_House_004_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2194, -35, 743, wf_dl_House_005_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 21, 1122, -4620, wf_dl_House_006_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5415, 1948, -2234, wf_dl_Icosphere_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3996, -327, -796, wf_dl_MainGround_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, wf_dl_MainGround_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -3361, 3306, -7842, wf_dl_MountainCutout_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 1800, 3081, -5355, wf_dl_MountainCutout_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -5712, 2637, 4774, wf_dl_MountainCutout_002_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -572, 1077, -5027, wf_dl_Overhang_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1960, 597, -1971, wf_dl_StoneArch_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, wf_dl_StoneArch_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT_DECAL, -3996, -364, -796, wf_dl_WaterEdge_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_dl_SlideRoom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -3080, 1820, -2144),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1514, -1211, -730, wf_dl_Cube_002_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3011, -1413, 6688, wf_dl_Cube_003_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1379, -235, -849, wf_dl_IcePart_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1379, -235, -849, wf_dl_IcePartNoCol_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(6, 1379, -235, -849, wf_dl_Ladder_mesh_layer_6),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1499, -551, -579, wf_dl_MainGround_001_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -372, -2394, 2740, wf_dl_Plane_002_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4782, -1449, 5854, wf_dl_Plane_003_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2549, -1385, -770, wf_dl_Slide_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_SNOW_MOUNTAINS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_NORMAL, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
