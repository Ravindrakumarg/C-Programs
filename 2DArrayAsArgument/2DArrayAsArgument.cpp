// 2DArrayAsArgument.cpp : Defines the entry point for the console application.
#include "stdafx.h"

void show_array(int temp_arr[3][2], int row, int colomn);
void print_array(int (*temp_arr)[2], int row, int colomn);
void display_array(int temp_arr[][2], int row, int colomn);

int main()
{
	int arr[3][2] = {
						{12, 20},
						{9, 29},
						{38, 8}
					};

	show_array(arr, 3, 2);
	print_array(arr, 3, 2);
	display_array(arr, 3, 2);
	
	return 0;
}

void show_array(int temp_arr[3][2], int row, int colomn)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colomn; j++)
		{
			printf("%d ", temp_arr[i][j]);
		}
		printf("\n");
	}
}

void print_array(int (*temp_arr)[2], int row, int colomn)
{
	int i, j;
	int* p;
	printf("\n");
	for (i = 0; i < row; i++)
	{
		p = (int*)temp_arr + i;
		for (j = 0; j < colomn; j++)
			printf("%d ", *(p+j));

		printf("\n");
	}
}

void display_array(int temp_arr[][2], int row, int colomn)
{
	printf("\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colomn; j++)
		{
			printf("%d ", temp_arr[i][j]);
		}
		printf("\n");
	}
}