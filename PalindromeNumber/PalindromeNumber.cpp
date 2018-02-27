// PalindromeNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	long long int number, original_number;
	printf("\nEnter the number:");
	scanf("%lld", &number);

	original_number = number;

	long long int reverse_number = 0;
	int mod;
	while(number != 0)
	{
		mod = number % 10;
		reverse_number = reverse_number * 10 + mod;
		number = number / 10;
	}

	if (reverse_number == original_number)
		printf("\nEntered number is palindrome number");
	else
		printf("\nEntered number is not a palindrome number");

    return 0;
}
