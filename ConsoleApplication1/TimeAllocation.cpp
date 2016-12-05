#include "stdafx.h"
#include "TimeAllocation.h"


TimeAllocation::TimeAllocation(string Start, string End)
	: start(Start), end(End)
{
}


TimeAllocation::~TimeAllocation()
{
}

string TimeAllocation::getStart()
{
	return start.getFormatted();
}

string TimeAllocation::getEnd()
{
	return end.getFormatted();
}