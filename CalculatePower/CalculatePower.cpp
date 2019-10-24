// CalculatePower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	long long int number, result=1;
	int power;
	printf("Enter a number:");
	scanf("%lld", &number);
	printf("\nEnter the power:");
	scanf("%d", &power);

	for (int counter = 1; counter <= power; counter++)
	{
		result = result * number;
	}

	printf("Result:%lld", result);

    return 0;
}

