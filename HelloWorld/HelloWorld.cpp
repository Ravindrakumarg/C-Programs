// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number1, number2, sum;		//instruction 1
	number1 = 10;					//instruction 2
	number2 = 20;					//instruction 3

	sum = number1 + number2;
	printf("\nSum of %d and %d = %d", number1, number2, sum);

    return 0;
}