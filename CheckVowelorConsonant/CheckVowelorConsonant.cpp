// CheckVowelorConsonant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c", &ch);

	bool lowercase = (ch == 'a') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'v');
	bool uppercase = (ch == 'A') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'V');

	if (lowercase || uppercase)
		printf("\nEntered character is a vowel");
	else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		printf("\nEntered character is a consonant");
	else
		printf("\nEntered value is not a character");

	return 0;
}

