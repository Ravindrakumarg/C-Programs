// PatternTriangle2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*********
   1
  2 3
 4 5 6
7 8 9 10
**********/
int main()
{
	int height, number=1;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = i; j < (height - 1); j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= (i * 2 + 1); j++)
		{
			if (j % 2 == 0)
				printf("%d", number++);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
