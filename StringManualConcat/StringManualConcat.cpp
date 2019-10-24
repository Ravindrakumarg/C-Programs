// StringManualConcat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdio.h"
#include <cstdlib>

//char* manual_concat(char*, char*);

int main()
{
	char source[10], target[10];
	char* target1 = (char*)malloc(sizeof(char) * 10);

	printf("\nEnter a first word: ");
	scanf("%s", &source);

	printf("\nEnter a second word: ");
	scanf("%s", &target);

	strcpy(target1, target);

//	strcat(target, source);
	printf("\nFinal string:%s", target);

	//manual_concat(target1, source);
	int target_length = sizeof(target1)/sizeof(char);
	int source_length = sizeof(source)/sizeof(char);

	if (target_length < (source_length + target_length))
	{
		char *new_target = (char*)malloc(sizeof(char)*(source_length + target_length));
		strcpy(new_target, target1);
		target1 = new_target;
	}

	int i = 0;
	while (target1[i] != '\0')
	{
		i++;
	}
	int j = 0;
	while (source[j] != '\0')
	{
		target1[i] = source[j];
		i++; j++;
	}
	target1[i] = '\0';

	printf("\nFinal string:%s", target1);

    return 0;
}
/*
char* manual_concat(char* target, char* source)
{
	int target_length = strlen(target);
	int source_length = strlen(source);

	if (target_length < (source_length + target_length))
	{
		char *new_target = new char[source_length + target_length];
		strcpy(new_target, target);
		target = new_target;
	}

	while (*target != '\0')
	{
		target++;
	}
	while (*source != '\0')
	{
		*target = *source;
		source++;
		target++;
	}
	*target = '\0';

	return target;
}
*/