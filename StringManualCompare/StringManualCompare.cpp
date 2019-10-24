// StringManualCompare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char str1[20], str2[20];
	printf("Enter two word: ");
	scanf("%s %s", &str1, &str2);

	int length1 = strlen(str1);
	int length2 = strlen(str2);

	if (length1 != length2)
	{
		printf("\n Both string is not equal");
		return 0;
	}
	for (int i = 0; i < length1; i++)
	{
		if (str1[i] != str2[i])
		{
			printf("\n Both string is not equal");
			return 0;
		}
	}

	printf("\n Both string are equal");

    return 0;
}