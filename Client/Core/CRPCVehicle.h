#ifndef __CRPCVEHICLE_H__
#define __CRPCVEHICLE_H__

class CRPCVehicle
{
public:
	static void InitVehicle(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetStandardColor(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetCustomColor(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetNumberPlate(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetMod(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetDoorsLockState(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetNumberPlateStyle(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void SetExtra(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void FixDeformation(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void TowVehicle(RakNet::BitStream *bitStream, RakNet::Packet *packet);
	static void DeployCargobobRope(RakNet::BitStream *bitStream, RakNet::Packet *packet);
};

#endif