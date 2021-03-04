
#ifndef OBJECT_FIELDS_H
#include "game/behavior_actions.h"
#endif

void bhv_icelevel_icedrill_init(void) {
	//if needed, this scaling can be controlled by bparams
	o->header.gfx.scale[0] *= 2.0f;
	//o->header.gfx.scale[1] *= 2.0f;
	o->header.gfx.scale[2] *= 2.0f;
}

/*
when you stand on it, the drill will speed up, and sink down
when you jump off, it'll slow back down and return to it's normal position
*/
void bhv_icelevel_icedrill_loop(void) {
	u32 rotationSpeed = 400;

	switch (o->oAction) {
        case 0: //normal operation
            if (gMarioObject->platform == o) {
				o->oAction++;
			}
			break;
		case 1: //sinking
			rotationSpeed = 800;
			cur_obj_play_sound_1(SOUND_ENV_METAL_BOX_PUSH);
			set_camera_shake_from_point(SHAKE_POS_SMALL, o->oPosX, o->oPosY, o->oPosZ);
			o->oPosY -= 7.5f;
			if(o->oPosY < (o->oHomeY - 200.0f)) {
				o->oPosY = (o->oHomeY - 200.0f);
			}
			if (gMarioObject->platform != o) {
				o->oAction++;
			}
			break;
		case 2: //returning
			if (gMarioObject->platform == o) {
				o->oAction--;
			}
			o->oPosY += 10.0f;
			if(o->oPosY > (o->oHomeY + 10.0f)) {
				o->oPosY = o->oHomeY;
				o->oAction = 0;
			}

	}

	o->oAngleVelYaw = rotationSpeed;
    o->oFaceAngleYaw += rotationSpeed;
	o->oMoveAngleYaw += rotationSpeed;
	load_object_collision_model();
}