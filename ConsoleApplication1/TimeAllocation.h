#pragma once
#include "DateTime.h"

class TimeAllocation
{
public:
	TimeAllocation();
	TimeAllocation(string, string);
	~TimeAllocation();
	virtual string details() = 0;
	virtual std::string output();

	string getStart();
	string getEnd();
private:
	DateTime start;
	DateTime end;

};

