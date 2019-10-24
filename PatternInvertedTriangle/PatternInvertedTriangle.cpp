// PatternInvertedTriangle.cpp : Defines the entry point for the console application.

#include "stdafx.h"
/**************
* * * * *
 * * * *
  * * *
   * *
    *
***************/

int main()
{
	int height, number = 1;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (2*(height-i) - 1); j++)
		{
			if (j % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

