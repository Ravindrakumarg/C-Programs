// ArraySortingDescendingOrder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void display_array(int *, int);

int main()
{
	int arr[6], temp;
	printf("Enter six any number: ");
	for (int i = 0; i < 6; i++)
		scanf("%d", &arr[i]);

	printf("\nOriginal array: ");  display_array(arr, 6);

	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nSorted array: ");  display_array(arr, 6);

	return 0;
}

void display_array(int * temp_arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *temp_arr);
		temp_arr++;
	}
}
