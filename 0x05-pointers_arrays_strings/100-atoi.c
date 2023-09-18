#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* 1 represents positive sign by default */
	int i = 0;

	/* Handle leading spaces */
	while (s[i] == ' ')
		i++;

	/* Handle the sign (positive/negative) */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Process the digits and build the result */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		/* Check for potential overflow */
		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + digit;
		i++;
	}

	return result * sign;
}
