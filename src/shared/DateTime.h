#pragma once
#include <string>
struct DateTime
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
public:
	DateTime(int year, int month, int day, int hour, int minute, int second);	
	~DateTime();
	std::string toString();
	static DateTime s_now();
};

