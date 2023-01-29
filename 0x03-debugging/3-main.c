#include <stdio.h>
#include "main.h"

/**
 * main - take a date and print how many days are left in  the year, taking
 * leap years into account
 *
 * Return: 0
 */int main(void)
{
	int month;
	int day;
	imt year;

	month = 4;
	dayb= 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	printf_remaining_days(month, day, year);

	return (0);

}
