// ReverseNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number, mod;
	int reverse_number = 0;

	printf("Enter a number:");
	scanf("%d", &number);

	while (number != 0)
	{
		mod = number % 10;
		reverse_number = reverse_number * 10 + mod;
		number = number / 10;
	}

	printf("\nReverse number is:%d", reverse_number);

	return 0;
}

