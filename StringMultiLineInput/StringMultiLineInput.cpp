// StringMultiLineInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char name[20];

	printf("\nEnter your name: ");
	gets_s(name);

	printf("\nYour name: %s", name);
	
	//another mathod using scanf
	printf("\nEnter your name: ");
	scanf("%[^\n]s", name);

	printf("\nYour name: %s", name);

    return 0;
}

