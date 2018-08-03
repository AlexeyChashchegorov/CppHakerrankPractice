/*
	Statements: https://www.hackerrank.com/challenges/day-of-the-programmer/problem
*/

#include <common.h>

bool isLeapYulian(int year)
{
    return (year % 4) == 0;
}

bool isLeapGeorgian(int year)
{
    return (year % 400 == 0) || ((year % 4) == 0 && (year%100) != 0);
}

bool isLeap(int year)
{
    return (year <= 1918) ? isLeapYulian(year) : isLeapGeorgian(year);
}

string solve(int year) {
    int calendar_change_fixture = (year == 1918) ? 13 : 0;
    int fixture = 243 + (isLeap(year) ? 1 : 0) - calendar_change_fixture;
    stringstream ss;
    int date = (256 >= fixture) ? 256 - fixture : 31;
    int month = (256 >= fixture) ? 9 : 8;
    ss << date << ".0" << month << "." << year << endl;
    return ss.str();
}

int main()
{
    cout << solve(parse<int>(cin)) << "\n";
    return 0;
}

