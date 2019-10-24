// StringLowercase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char chr[20];
	printf("Enter any word: ");
	scanf("%s", &chr);

	for (int i = 0; i < strlen(chr); i++)
	{
		if ((chr[i] >= 65 && chr[i] <= 90))
		{
			chr[i] = chr[i] - 32;
		}
	}

	printf("\nWord in lowercase=%s", chr);

	return 0;
}

