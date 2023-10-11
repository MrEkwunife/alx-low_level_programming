#include "main.h"
/**
 * print_last_digit - ouputs the last digit of number
 * @n: parameter accepting the int
 * Return: last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
