// PatternTriangle.cpp : Defines the entry point for the console application.

#include "stdafx.h"
/*********
   1
  2 2 
 3 3 3 
4 4 4 4 
**********/
int main()
{
	int height;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = i; j < (height - 1); j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= (i*2 + 1); j++)
		{
			if (j % 2 == 0)
				printf("%d", i + 1);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}