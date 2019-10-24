// OddorEven.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num;

	printf("Kindly enter the number:");
	scanf("%d", &num);

	if ((num % 2) == 0)
		printf("\nNumber is even number");
	else
		printf("\nNumber is odd number");

	return 0;
}

