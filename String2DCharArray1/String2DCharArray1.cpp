// String2DCharArray1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char* name_list[] = {
						"ramesh",
						"mahesh",
						"ravi",
						"amar",
						"prakash"
	};

	char name[20];
	bool found = false;

	printf("Enter the name you want to search:");
	scanf("%s", &name);

	for (int i = 0; i < 5; i++)
	{
		if (!strcmp(name, *(name_list + i)))
		{
			found = true;
			break;
		}
	}

	if (found)
		printf("\nName found in list");
	else
		printf("\nName not found in list");

    return 0;
}