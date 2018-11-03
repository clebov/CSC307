#include "serverType.h"
#include "customerType.h"
#include <iostream>


serverType::serverType()
{
	status = "free";
	transactionTime = 0;
}

bool serverType::isFree() const
{
	if (status == "free");
}

void serverType::setBusy()
{
	status = "busy";
}

void serverType::setFree()
{
	status = "free";
}

void serverType::setTransactionTime(int t)
{
	transactionTime = t;
}

void serverType::setTransactionTime()
{
	int time;
	time = currentCustomer.getTransactionTime();
	transactionTime = time;
}

int serverType::getRemainingTransactionTime() const
{
	return transactionTime;
}

void serverType::decreaseTransactionTime()
{
	transactionTime--;
}

void serverType::setCurrentCustomer(customerType cCustomer)
{
	currentCustomer = cCustomer;
}

int serverType::getCurrentCustomerNumber() const
{
	int currentCustomerNumber = currentCustomer.getCustomerNumber();
	return currentCustomerNumber;
}

int serverType::getCurrentCustomerArrivalTime() const
{
	int currentArrTime = currentCustomer.getArrivalTime();
	return currentArrTime;
}

int serverType::getCurrentCustomerWaitingTime() const
{
	int CurrentCustomerWaitingTime = currentCustomer.getWaitingTime();
	return CurrentCustomerWaitingTime;
}

int serverType::getCurrentCustomerTransactionTime() const
{
	int CurrentCustomerTransactionTime = currentCustomer.getTransactionTime();
}
