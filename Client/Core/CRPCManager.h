#ifndef __CRPCMANAGER_H__
#define __CRPCMANAGER_H__

class CRPCManager
{
public:
	static void RegisterRPCMessages();
	static void UnregisterRPCMessages();

	typedef struct
	{
		char *name;
		void(*functionPointer) (RakNet::BitStream *userData, RakNet::Packet *packet);
	} RPCMessage;
};
#endif