#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next, count;

	printf("%ld, %ld", a, b);

	for (count = 2; count < 50; count++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
