#pragma once
#include "serverType.h"
#include "customerType.h"
class serverListType
{
public:
	serverListType(int num);
	int getFreeServerID();
	int getNumberOfBusyServers() const;
	void setServerBusy(int serverID, customerType cCustomer, int tTime);
	void setServerBusy(int serverID, customerType cCustomer);
	void updateServers(ostream& outFile);
	~serverListType();
private:
	int numOfServers;
	serverType *servers;
	
};

