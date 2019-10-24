// GCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number1, number2, GCD = 0;

	printf("Enter two numbmer:");
	scanf("%d %d", &number1, &number2);

	for (int counter = 1; counter <= number1 & counter <= number2; counter++)
	{
		if ((number1%counter == 0) && (number2%counter == 0))
		{
			GCD = counter;
		}
	}

	printf("GCD=%d", GCD);

	return 0;
}

