// Numberofdigit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	long long int number, counter=0;
	printf("Enter a number:");
	scanf("%lld", &number);

	while (number)
	{
		number = number / 10;
		counter++;
	}

	printf("\nNumber of digit in number:%d", counter);

    return 0;
}

