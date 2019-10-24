// Fabonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number;

	printf("Enter a number you want in fabonacci series:");
	scanf("%d", &number);

	int next = 1, current = 0, total = 0;

	for (int i = 0; i < number; i++)
	{
		printf("%d ", current);
		total = current + next;
		next = current;
		current = total;
	}

	return 0;
}