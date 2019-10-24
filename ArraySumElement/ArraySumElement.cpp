// ArraySumElement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int arr[6], number=0;
	printf("Enter six any number: ");
	for (int i = 0; i < 6; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 6; i++)
	{
		number = number + arr[i];
	}

	printf("\nSum of array element: %d", number);

    return 0;
}

