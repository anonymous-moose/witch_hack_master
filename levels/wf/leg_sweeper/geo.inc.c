#include "src/game/envfx_snow.h"

const GeoLayout leg_sweeper_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, leg_sweeper_LegSweeperVisual_mesh_layer_1),
		GEO_DISPLAY_LIST(1, leg_sweeper_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
