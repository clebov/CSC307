#pragma once
#include "queuADT.h"
template <class Type>
class queueType: public queuADT<Type>
{
public:
	//overloads the assignment operator
	const queueType<Type>& operator=(const queueType<Type>&);
	bool isEmptyQueue() cosnt;
	bool isFullQueeu() cosnt;
	void initializeQueue();
	Type front() const;
	Type back() const;
	void addQueue(const Type& queueElement);
	void deleteQueue();
	queueType(int queueSize = 100);
	
	~queueType();
private:
	int maxQueueSize;
	int count;
	int queueFront;
	int queueRear;
	Type *list;
};

