#include "main.h"

/**
 * print_sign - Displays the sign of a number.
 * @n: The integer to be examined.
 * Return: '+' if 'n' is greater than zero, '0' if 'n' equals zero, or '-' if 'n' is less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else if (n < 0)
    {
        _putchar('-');
        return (-1);
    }
}

