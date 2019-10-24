// ArrayConsoleInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void print_arr(int temp_arr[][3], int row, int colomn);

int main()
{
	int arr[3][3];	//declaraing a 3*3 array
	int i = 0, j = 0;
	printf("Enter numbers for matrix(3*3): ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	print_arr(arr, 3, 3);;

	return 0;
}

void print_arr(int temp_arr[][3], int row, int colomn)
{
	int counter = 0, j;
	for (counter = 0; counter < row; counter++)
	{
		printf("\n");
		int *p = temp_arr[counter];
		for (j = 0; j < colomn; j++)
		{
			printf("%d", *(p + j));
		}
	}
}