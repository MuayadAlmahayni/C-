#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "stdafx.h"

using namespace std;

class DateTime
{
public:
	DateTime(string);             // parse from a string format
	string getFormatted() const;  // return as a formatted string

private:
	int minute; // 0 to 59
	int hour;   // 0 to 23
	int day;    // 1 to 31
	int month;  // 1 to 12
	int year;
};

DateTime::DateTime(std::string datetime)
{
	// DD/MM/YYYY HH:MM
	istringstream iss(datetime);
	char dump;
	iss >> day >> dump >> month >> dump >> year >> hour >> dump >> minute;
}

std::string DateTime::getFormatted() const
{
	// DD/MM/YYYY HH:MM
	ostringstream oss;
	oss << std::setfill('0');
	oss << std::setw(2) << day << '/';
	oss << std::setw(2) << month << '/';
	oss << year << ' ';
	oss << std::setw(2) << hour << ':';
	oss << std::setw(2) << minute;
	return oss.str();
}



int main() {
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}