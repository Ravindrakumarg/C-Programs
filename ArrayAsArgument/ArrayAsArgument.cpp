// ArrayAsArgument.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void print_array(int* temp_arr, int length);

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	print_array(arr, 5);
	print_array(&arr[0], 5);

    return 0;
}

void print_array(int* temp_arr, int length)
{
	while (length)
	{
		printf("%d ", *temp_arr);
		temp_arr++;
		length--;
	}
}
