#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: para of n
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
