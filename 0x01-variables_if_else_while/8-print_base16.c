#include <stdio.h>

/**
 * main - printd numbers in hexadecimal
 *
 * Return: Nill
 */

int main(void)
{
	int num = 0;

	for (; num < 16; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + (num - 10));
		}
	}
	putchar('\n');

	return (0);
}
