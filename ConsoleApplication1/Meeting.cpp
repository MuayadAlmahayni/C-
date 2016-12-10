#include "stdafx.h"
#include "Meeting.h"


Meeting::Meeting(string Location, string Attendees, string Start, string End)
	: location(Location), attendees(Attendees), TimeAllocation(Start, End)
{

	
}


Meeting::~Meeting()
{
}

string Meeting::details() {
	
	ostringstream oss;
	oss << "Location: " << location << "\n"
		<< "Attendees: " << attendees << "\n"
		<< "Start Date: " << getStart() << "\n"
		<< "End Date: " << getEnd() << "\n";
	return oss.str();
};

std::string Meeting::output()
{
	std::cout << details();
	return NULL;
}