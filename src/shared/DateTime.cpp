#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>


DateTime::DateTime(int year, int month, int day, int hour, int minute, int second) : year(year), month(month), day(day), hour(hour), minute(minute), second(second)
{
	
}

DateTime::~DateTime()
{
}



std::string DateTime::toString()
{
	return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year) + ":" + std::to_string(hour) + ":" + std::to_string(minute) +  ":" + std::to_string(second);
}

DateTime DateTime::s_now()
{
	std::time_t t = std::time(nullptr);
	std::tm tm = *std::localtime(&t);
	return DateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}
