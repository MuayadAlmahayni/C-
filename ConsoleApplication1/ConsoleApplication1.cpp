#pragma once
#include "TimeAllocation.h"
#include "stdafx.h"
#include "Project.h"
#include "Meeting.h"
#include <iostream>
#include <string>


int main() {

	string fileName;
	std::cin >> fileName;
	std::fstream fs(fileName, std::fstream::out);

	std::string name, description, start, end, compare;

	while (fs.peek() != '#')
	{
		char ch = fs.get();
		compare += ch;

		if (compare == "Project")
		{
			std::string line;

			getline(fs, line);

			std::stringstream ss;
			ss << line;

			ss >> name;
			ss >> description;
			ss >> start;
			ss >> end;

			Project project(name, description, start, end);

			
		};

		if (compare == "Meeting");
		{
			std::string line;

			getline(fs, line);

			std::stringstream ss;
			ss << line;

			ss >> name;
			ss >> description;
			ss >> start;
			ss >> end;

			Meeting meeting(name, description, start, end);
			meeting.output();
		}
	}



	std::vector<TimeAllocation*> timeAllocations;

	for (auto i : timeAllocations)
	{
		//i.output();
	}

	

	return 0;
}