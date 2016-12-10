#pragma once
#include "TimeAllocation.h"

class Project
{
public:
	Project(string, string, string, string);
	~Project();
	string name;
	string description;
	DateTime start;
	DateTime deadline;
	std::string details() { return NULL; };
};

