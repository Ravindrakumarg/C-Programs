// PatternTriangle3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/***************
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
****************/

int main()
{
	int height, number=1;
	printf("Enter the height of Pattern: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < (2*height-2*(i+1)); j++)
		{
			printf(" ");
		}
		int pos = 2 * i + 1;
		number = 0;
		for (int j = 0; j < (2*i+1); j++)
		{
			if (j <= pos / 2)
				printf("%d ", ++number);
			else
				printf("%d ", --number);
		}
		printf("\n");
	}

    return 0;
}

