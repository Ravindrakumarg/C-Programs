// GenerateMultiplicationTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d", &number);

	for (int counter = 1; counter <= 10; counter++)
	{
		printf("\n%d*%d = %d", number, counter, number*counter);
	}

	return 0;
}

