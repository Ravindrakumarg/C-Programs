// CheckPrimeNumber.cpp : Defines the entry point for the console application.

#include "stdafx.h"

int main()
{
	int number;
	bool flag = false;
	printf("Enter a number:");
	scanf("%d", &number);

	for (int counter = 2; counter < number; counter++)
	{
		if ((number % counter) == 0)
		{
			flag = true;
			break;
		}
	}

	if (flag)
		printf("\n Number is not a prime number");
	else
		printf("\n Number is a prime number");

    return 0;
}