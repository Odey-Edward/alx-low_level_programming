#include <stdio.h>
#include "main.h"

/**
* main - takes a dates and print how many days are left in the year, taking
* leap year into account
*
* Return: 0
*/
int main(void)
{
	int mouth;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("%02d/%02d/%04d/\n", mouth, day, year);

	print_remaining_days(mouth, day, year);

	return (0);
}

