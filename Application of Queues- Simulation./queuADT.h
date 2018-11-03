#pragma once
template <class Type>
class queuADT
{
public:
	virtual bool isEmptyQueue() const = 0;
	virtual bool isFullQueue() const = 0;
	virtual Type front() const = 0;
	virtual Type back() cosnt = 0;
	virtual void addQueue(const Type& queueElement) = 0;
	vitrual void deleteQueue() = 0;

};

