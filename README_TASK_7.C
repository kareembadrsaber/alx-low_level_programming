#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Number from which to extract the last digit
 *
 * Return: The last digit of the given number
 */
int print_last_digit(int n)
{
    int lastDigit;

    lastDigit = n % 10;

    if (n < 0)
    {
        lastDigit = -lastDigit;
        _putchar(-lastDigit + '0');
    }
    else
    {
        _putchar(lastDigit + '0');
    }

    return (lastDigit);
}
