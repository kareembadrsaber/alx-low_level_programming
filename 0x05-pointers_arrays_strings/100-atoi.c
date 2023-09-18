#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i, digit, len, sign, found_digit;

	i = 0;
	digit = 0;
	len = 0;
	sign = 1;
	found_digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			digit *= sign;
			digit += found_digit * 10;
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	return (digit);
}
