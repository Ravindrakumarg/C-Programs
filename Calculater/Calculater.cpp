// Calculater.cpp : Defines the entry point for the console application.

#include "stdafx.h"

int main()
{
	int chioce = 0, number1, number2;
	printf("1. Add\n2. Substraction\n3. Multiplication\n4. Substraction\n0. Exit");

	do
	{
		printf("\n\nEnter your chioce: ");
		scanf("%d", &chioce);
		switch(chioce)
		{
		case 1:
			printf("\nEnter two number:");
			scanf("%d %d", &number1, &number2);
			printf("\nSum of %d and %d = %d", number1, number2, number1 + number2);
			break;
		case 2:
			printf("\nEnter two number:");
			scanf("%d %d", &number1, &number2);
			printf("\nSub of %d and %d = %d", number1, number2, number1 - number2);
			break;
		case 3:
			printf("\nEnter two number:");
			scanf("%d %d", &number1, &number2);
			printf("Mul of %d and %d = %d", number1, number2, number1 * number2);
			break;
		case 4:
			printf("\nEnter two number:");
			scanf("%d %d", &number1, &number2);
			printf("Div of %d and %d = %d", number1, number2, number1 / number2);
			break;
		case 0: 
			printf("\nExiting");
			break;
		default:
			printf("\nWrong chioce.");
		}
	} while (chioce != 0);

	return 0;
}