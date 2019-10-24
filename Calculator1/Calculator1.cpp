// Calculator1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char chioce;
	int number1, number2;
	printf("\nEnter your chioce(+,-,*,/):");
	scanf("%c", &chioce);

	printf("Enter two number:");
	scanf("%d %d", &number1, &number2);

	switch (chioce)
	{
	case '+':
		printf("\nAddition of %d and %d = %d", number1, number2, number1+number2);
		break;
	case '-':
		printf("\nSub of %d and %d = %d", number1, number2, number1 - number2);
		break;
	case '*':
		printf("\nMul of %d and %d = %d", number1, number2, number1 * number2);
		break;
	case '/':
		printf("\nDiv of %d and %d = %d", number1, number2, number1 / number2);
		break;
	default:
		printf("\nEntered wrong chioce");
	}

    return 0;
}

