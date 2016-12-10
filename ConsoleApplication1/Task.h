#pragma once
#include "TimeAllocation.h"
class Task
{
public:
	Task();
	~Task();
	string name;
	string description;
	DateTime start;
	DateTime deadline;
};

