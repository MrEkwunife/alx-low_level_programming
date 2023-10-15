#include "main.h"

/**
 * print_diagonal - prints a diagonal line to console
 * @n: number of prints
 *
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		return;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (b == a)
				_putchar('\\');
			else if (b < a)
				_putchar(' ');
		}

		_putchar('\n');
	}

}
