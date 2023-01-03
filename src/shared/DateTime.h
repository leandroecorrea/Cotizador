#pragma once
#include <string>
struct DateTime
{
public:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	DateTime(int year, int month, int day);
	~DateTime();
	std::string toString();
};

