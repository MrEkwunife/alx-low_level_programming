#include <stdio.h>

/**
 * main - prints base ten number from 0
 *
 * Return: zero
 */

int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
