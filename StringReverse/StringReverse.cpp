// StringReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"

int main()
{
	char source[10], reverse[10];
	int j, i;
	printf("\nEnter any word: ");
	scanf("%s", &source);

	int source_len = strlen(source);

	for(i=source_len-1, j=0; i>=0; i--, j++)
	{
		printf("%c", source[i]);
		reverse[j] = source[i];
	}
	reverse[j] = '\0';

	printf("\nreverse string=%s", reverse);

    return 0;
}