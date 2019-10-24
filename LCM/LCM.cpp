// LCM.cpp : Defines the entry point for the console application.

#include "stdafx.h"

int main()
{
	int number1, number2, LCM;
	printf("Enter two number:");
	scanf("%d %d", &number1, &number2);

	if (number1 > number2)
		LCM = number1;
	else
		LCM = number2;

	while (1)
	{
		if ((LCM%number1 == 0) && (LCM%number2 == 0))
		{
			printf("LCM=%d", LCM);
			break;
		}
		LCM++;
	}

	return 0;
}

