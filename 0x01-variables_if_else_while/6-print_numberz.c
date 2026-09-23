#include <stdio.h>

/**
 * main - prints numbers 0 till 9
 *
 * Description: the function prints numbers starting from 0
 * and stoping at 9 without using a char as variable but rather
 * using their ASCII underline values as ints for the putchar
 * function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
