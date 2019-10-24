// LeapYear.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d", &year);

	if (year % 400 == 0)
	{
		printf("Year is a leap year");
		return 0;
	}

	if (year % 100 == 0)
	{
		printf("Year is not a leap year");
		return 0;
	}

	if (year % 4 == 0)
		printf("Year is a leap year");

	return 0;
}

