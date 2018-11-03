#include "customerType.h"
#include <iostream>
customerType::customerType(int customerN, int arrvTime, int wTime, int tTime)
{
	setCustomerInfo(customerN, arrvTime, wTime, tTime);
}

void customerType::setCustomerInfo(int customerN, int inTime, int wTime, int tTime)
{
	customerNumber = customerN;
	arrivalTime = inTime;
	waitingTime = wTime;
	transactionTime = tTime;
}

int customerType::getWaitingTime() const
{
	return waitingTime;
}

void customerType::setWaitingTime(int time)
{
	waitingTime = time;
}

void customerType::incrementWaitingTime()
{
	waitingTime++;
}

int customerType::getArrivalTime() const
{
	return arrivalTime;
}

int customerType::getTransactionTime() const
{
	return transactionTime;
}

int customerType::getCustomerNumber() const
{
	return customerNumber;
}
