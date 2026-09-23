#include <stdio.h>

/**
 * main - prints numbers 0-9.
 *
 * Description: prints all the single numbers of the base
 * 10 number system.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
