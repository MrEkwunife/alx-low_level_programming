#include <stdio.h>

/**
 * main - printing numbers with putchar
 *
 * Return: Nill
 */

int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
