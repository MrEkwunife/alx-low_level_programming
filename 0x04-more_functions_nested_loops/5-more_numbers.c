#include "main.h"

/**
 * more_numbers - prints ten times number on new line
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	for (; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
