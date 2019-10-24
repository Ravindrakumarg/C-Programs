// SwapNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int x = 10;
	int y = 20;
	printf("Before Swap: x=%d, y=%d", x, y);
	int z;
	z = x;
	x = y;
	y = z;
	printf("\nAfter swap: x=%d, y=%d", x, y);

    return 0;
}