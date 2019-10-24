// PatternDiamond.cpp : Defines the entry point for the console application.

#include "stdafx.h"
/****************
  *
 ***
*****
 ***
  *
*****************/

int main()
{
	int height;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < (height-i-1); j++)
			printf(" ");

		for (int j = 0; j < (2 * i + 1); j++)
			printf("*");

		printf("\n");
	}
	height = height - 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");

		for (int j = 0; j < (2 * (height-i) - 1); j++)
			printf("*");

		printf("\n");
	}

    return 0;
}