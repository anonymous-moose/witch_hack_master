#ifndef OBJECT_FIELDS_H
#include "game/behavior_actions.h"
#endif



/*
trapdoor waits, if you step on it, it creaks a little bit, lowers ever so slightly
if you ground-pound, it slams open
*/

void bhv_trapdoor_loop(void) {

	switch (o->oAction) {
        case 0: //waiting
            if (gMarioObject->platform == o) {
				o->oAction++;
			}
			if(cur_obj_is_mario_ground_pounding_platform()) {
				o->oPosY = o->oHomeY;
				o->oAction = 2;
			}
			break;
		case 1: //sink a little
			

			if (gMarioObject->platform != o) {
				o->oPosY += 4.0f;
				if(o->oPosY >= o->oHomeY) {
					o->oPosY = o->oHomeY;
					o->oAction = 0;
				}
			}
			else {
				if(o->oPosY > o->oHomeY - 10.0f) {
					o->oPosY -= 2.0f;
				}
			}
			if(cur_obj_is_mario_ground_pounding_platform()) {
				o->oPosY = o->oHomeY;
				o->oAction = 2;
			}
			break;
		case 2: //opening
			if (o->oTimer == 0) {
				cur_obj_play_sound_2(SOUND_GENERAL_CASTLE_TRAP_OPEN);
			}
			o->oAngleVelPitch -= 0x100;
			o->oFaceAnglePitch += o->oAngleVelPitch;
			if (o->oFaceAnglePitch < -0x4000) {
				o->oFaceAnglePitch = -0x4000;
				o->oAction++; // after opening is done, enable close detection
			}
			break;
		case 3:
			if (o->oDistanceToMario > 1000.0f) {
        		o->oAction++; // close trapdoor
			}
			break;
		case 4:
			o->oFaceAnglePitch += 0x400;
			if (o->oFaceAnglePitch > 0) {
				o->oAngleVelPitch = 0;
				o->oFaceAnglePitch = 0;
				o->oAction = 0; // after closing, reloads open detection
				//o->oInteractStatus &= ~INT_STATUS_TRAP_TURN;
    		}
	}

	load_object_collision_model();
}


