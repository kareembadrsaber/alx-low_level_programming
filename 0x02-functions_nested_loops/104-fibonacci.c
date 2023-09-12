#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Purpose: Computes and prints Fibonacci numbers without hardcoding.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;
	unsigned long int limit = 1000000000;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / limit);
	bef2 = (bef % limit);
	aft1 = (aft / limit);
	aft2 = (aft % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / limit));
		printf("%lu", aft2 % limit);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}

