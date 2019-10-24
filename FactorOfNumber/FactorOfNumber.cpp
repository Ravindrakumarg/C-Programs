// FactorOfNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number;
	printf("Enter a positive number:");
	scanf("%d", &number);

	int counter = 1;
	printf("\nFollowing are the factors: ");
	while (counter <= (number / 2))
	{
		if ((number % counter) == 0)
		{
			printf("%d ", counter);
		}
		counter++;
	}

    return 0;
}

