// StringManualCopy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void manual_strcpy(const char*, char*);

int main()
{
	char source[10], target[10], m_target[10];
	printf("\nEnter a word: ");
	scanf("%s", &source);

	strcpy(target, source);
	printf("\nTarget string:%s", target);

	manual_strcpy(source, m_target);
	printf("\nTarget string:%s", m_target);

    return 0;
}

void manual_strcpy(const char *source, char* m_target)
{
	while (*source != '\0')
	{
		*m_target = *source;
		m_target++;
		source++;
	}
	*m_target = '\0';
}
