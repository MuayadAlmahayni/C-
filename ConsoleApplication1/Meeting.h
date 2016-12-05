#pragma once
#include "TimeAllocation.h"

class Meeting :
	public TimeAllocation
{
public:
	Meeting(string location, string attendees, string, string);
	~Meeting();
	string details();
private:
	string location;
	string attendees;
};

