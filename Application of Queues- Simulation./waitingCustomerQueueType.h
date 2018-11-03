#pragma once
#include "serverListType.h"
#include "serverType.h"
#include "customerType.h"
#include "queueType.h"

class waitingCustomerQueueType : public queueType<customerType>
{
public:
	waitingCustomerQueueType(int size = 100);
	void updateWaitingQueue();

};