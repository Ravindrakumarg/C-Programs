// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int number;

	printf("Enter a number:");
	scanf("%d", &number);

	if (number <= 0)
	{
		printf("\nFactorial of negative and 0 is not possible");
		return 0;
	}
	for (int i = number; i > 1; i--)
	{
		number = number * (i - 1);
	}

	printf("Factorial = %d", number);
	return 0;
}

