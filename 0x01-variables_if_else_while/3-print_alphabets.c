#include <stdio.h>

/**
 * main - prints both lowercase and uppercase alphabets
 *
 * Return: zero as always
 */

int main(void)
{
	char al = 'a';
	char AL = 'A';

	for (; AL <= 'Z'; AL++)
	{
		for (; al <= 'z'; al++)
		{
			putchar(al);
		}
		putchar(AL);
	}
	putchar('\n');

	return (0);
}
