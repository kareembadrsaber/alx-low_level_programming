#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * main - Entry point for the ATM program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char p[] = "_putchar";

    for (i = 0; i < 8; i++)
    {
        _putchar(p[i]);
    }
    _putchar('\n');
    return (0);
}

