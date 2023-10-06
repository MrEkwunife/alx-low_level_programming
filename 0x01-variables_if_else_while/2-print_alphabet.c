#include <stdio.h>

/**
 * main - print the alphabets in lowercase
 *
 * Return: zero
 */

int main(void)
{
	char al = 'a';

	for (; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
