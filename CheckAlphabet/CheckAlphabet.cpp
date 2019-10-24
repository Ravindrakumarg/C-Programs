// CheckAlphabet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char ch;
	printf("Enter any alphabet/number:");
	scanf("%c", &ch);

	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		printf("\nEnter value is a charector");
	else
		printf("\nEnter value is not a charector");
    return 0;
}

