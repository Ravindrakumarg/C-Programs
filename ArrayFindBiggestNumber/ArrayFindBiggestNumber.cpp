// ArrayFindBiggestNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int arr[6], number = -99999;
	printf("Enter six any number: ");
	for (int i = 0; i < 6; i++)
		scanf("%d", &arr[i]);


	for (int i = 0; i < 6; i++)
	{
		if (number < arr[i])
		{
			number = arr[i];
		}
	}

	printf("\nBiggest number in list: %d", number);

	return 0;
}

