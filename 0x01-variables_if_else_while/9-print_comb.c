#include <stdio.h>

/**
 * main - prints numbers in ascending order
 *
 * Return: nill
 */

int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
