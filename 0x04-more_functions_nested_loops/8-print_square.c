#include "main.h"

/**
 * print_square - prints square followed by newline
 * @size: size of of square
 *
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
