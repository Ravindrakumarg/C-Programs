// PatternDaimond2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/****************
   1
  121
 12321
1234321
 12321
  121
   1
*****************/

int main()
{
	int height;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < (height - i-1); j++)
			printf(" ");
		int number = 0;
		int pos = 2 * i + 1;
		for (int j = 0; j < (2 * i + 1); j++)
		{
			if (j <= pos / 2)
				printf("%d", ++number);
			else
				printf("%d", --number);
		}
		printf("\n");
	}
	height = height - 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");
		int number = 0;
		int pos = (2 * (height - i) - 1);
		for (int j = 0; j < pos; j++)
		{
			if (j <= pos / 2)
				printf("%d", ++number);
			else
				printf("%d", --number);
		}
		printf("\n");
	}

    return 0;
}

