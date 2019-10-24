// StringLength.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int manual_strlen(const char *arr);

int main()
{
	char arr[10];
	printf("\nEnter a word: ");
	scanf("%s", &arr);

	printf("\nArray length=%d", strlen(arr));
	printf("\nArray length=%d", manual_strlen(arr));

    return 0;
}

int manual_strlen(const char *arr)
{
	int length = 0;
	while (*arr != '\0')
	{
		length++;
		arr++;
	}
	return length;
}
