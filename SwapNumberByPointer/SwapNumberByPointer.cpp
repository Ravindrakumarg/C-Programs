// SwapNumberByPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void swapnumber(int*, int*);

int main()
{
	int number1 = 10, number2 = 20;
	printf("before number1=%d, number2=%d", number1, number2);
	swapnumber(&number1, &number2);
	printf("\nafter number1=%d, number2=%d", number1, number2);

    return 0;
}

void swapnumber(int* number1, int* number2)
{
	int temp;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}