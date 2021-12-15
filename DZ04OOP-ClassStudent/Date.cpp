#include "Date.h"

Date::Date() : Date(13, 01, 2000) {}

Date::Date(const short day, const short month, const short year)
{
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}

void Date::SetDay(const short day)
{
	if (day > 0 && day < 31)
	{
		this->day = day;
	}
	else
	{
		throw "�� �� ����� ������������ ����!\n";
	}
}

void Date::SetMonth(const short month)
{
	if (month > 0 && month < 13)
	{
		this->month = month;
	}
	else
	{
		throw "�� �� ����� ������������ �����!\n";
	}
}

void Date::SetYear(const short year)
{
	if (year > 0 && year < 2006)
	{
		this->year = year;
	}
	else
	{
		throw "�� �� ����� ������������ ���!\n";
	}
}

short Date::GetDate() const
{
	return day;
}

short Date::GetMonth() const
{
	return month;
}

short Date::GetYear() const
{
	return year;
}
