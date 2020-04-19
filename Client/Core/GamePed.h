#ifndef __GTAV_PED_H__
#define __GTAV_PED_H__
#include <string>

#include "hook/types.h"

#include "CEntity.h"

namespace GTAV
{
	namespace GamePed
	{
		const int GetVehicleIndex(Ped ped);
		CEntity GetVehicleObject(Ped ped);

		int GetVehicleSeat(Ped ped);
		Vehicle GetVehicle(Ped ped);
		Hash GetPedSelectedWeapon(Ped ped);
		int GetPedHealth(Ped ped);
		int GetPedArmour(Ped ped);
		void PutPedInVehicle(Ped ped, Vehicle vehicle, int seat);

		void SetPedModel(Ped ped, const uint32_t model);
		void SetPedComponentVariation(Ped ped, const int componentid, const int drawableid, const int textureid, const int paletteid);
		void SetPedHeadBlend(Ped ped, const int shapeFirst, const int shapeSecond, const int shapeThird, const int skinFirst, const int skinSecond, const int skinThird, const float shapeMix, const float skinMix, const float thirdMix);
		void SetPedHeadOverlayColor(Ped ped, const int overlayid, const int index, const int colorType, const int colorid, const int secondColorid, const float opacity);
		void SetPedProp(Ped ped, const int componentid, const int drawableid, const int textureid);
		void SetPedFaceFeature(Ped ped, const int index, const float scale);

		int GetPedTask(Ped ped);

		CEntity GetPlayerMeleeTarget(Player player);
		CEntity GetPedMeleeTarget(Ped ped);
	}
}
#endif