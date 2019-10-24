// Stringstrchr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char source[10], ch;

	printf("\nEnter the charecter you want to search: ");
	scanf("%c", &ch);

	printf("\nEnter a first word: ");
	scanf("%s", &source);


	int i = 0, counter=0;
	while (source[i] != '\0')
	{
		if (source[i++] == ch)
			counter++;
	}

	printf("\nTotal number of %c in %s=%d", ch, source, counter);

    return 0;
}

