#include "serverListType.h"
#include "serverType.h"
#include "customerType.h"

serverListType::serverListType(int num)
{
	numOfServers = num;
	servers = new serverType[num];
}

int serverListType::getFreeServerID()
{
	int serverID = -1;
	for ( int i = 0; i < numOfServers; i++)
		if (servers[i].isFree())
		{
			serverID = i;
			break;
		}
	return serverID;
}

int serverListType::getNumberOfBusyServers() const
{
	int busyServers = 0;
	for (int i = 0; i < numOfServers; i++)
		if (!servers[i].isFree())
			busyServers++;
	return busyServers;
}

void serverListType::setServerBusy(int serverID, customerType cCustomer, int tTime)
{
	servers[serverID].setBusy();
	servers[serverID].setTransactionTime(tTime);
	servers[serverID].setCurrentCustomer(cCustomer);
}

void serverListType::setServerBusy(int serverID, customerType cCustomer)
{
	int time;
	time = cCustomer.getTransactionTime();
	servers[serverID].setBusy();
	servers[serverID].setTransactionTime(time);
	servers[serverID].setCurrentCustomer(cCustomer);

}

void serverListType::updateServers(ostream & outFile)
{
	for (int i = 0; i < numOfServers; i++)
	{
		if (!servers[i].isFree())
		{
			servers[i].decreaseTransactionTime();

			if (servers[i].getRemainingTransactionTime() == 0)
			{
				outFile << "from server number " << (i + 1) << " customer number "
					<< servers[i].getCurrentCustomerNumber()
					<< "\n   departed at  "
					<< servers[i].getCurrentCustomerArrivalTime() + servers[i].getCurrentCustomerWaitingTime() + servers[i].getCurrentCustomerTransactionTime() << " Minute"
					<< endl;
				servers[i].setFree();
			}
		}
	}
}

serverListType::~serverListType()
{
	delete[] servers;
}
