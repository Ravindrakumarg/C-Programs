// CheckArmstrongNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number, original_number, mod, sum = 0;
	printf("Enter the number:");
	scanf("%d", &number);

	original_number = number;

	while (number)
	{
		mod = number % 10;
		sum = mod * mod *mod + sum;
		number = number / 10;
	}

	if (sum == original_number)
		printf("\nNumber is Armstrong number");
	else
		printf("\n Number is not an Armstrong number");

    return 0;
}

/*
int main()
{
int number, original_number, mod, sum = 0;
int counter = 0;
printf("Enter the number:");
scanf("%d", &number);

original_number = number;

while (number)
{
number = number / 10;
counter++;
}
number = original_number;

while (number)
{
mod = number % 10;
int exponent = counter;
int result = 1;
while (exponent)
{
result = result*mod;
exponent--;
}
sum = result + sum;
number = number / 10;
}

if (sum == original_number)
printf("\nNumber is Armstrong number");
else
printf("\n Number is not an Armstrong number");

return 0;
}
*/ 