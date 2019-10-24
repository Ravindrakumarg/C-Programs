// PatternInvertedTriangle2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/**************
1 1 1 1 1
 2 2 2 2
  3 3 3
   4 4
    5
***************/

int main()
{
	int height;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (2 * (height - i) - 1); j++)
		{
			if (j % 2 == 0)
				printf("%d", i+1);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}