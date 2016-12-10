#include "stdafx.h"
#include "TimeAllocation.h"


TimeAllocation::TimeAllocation()
{
}

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

std::string output( ) {

	return NULL;

};