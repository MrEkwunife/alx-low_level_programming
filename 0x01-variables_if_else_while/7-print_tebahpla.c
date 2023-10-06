#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 *
 * Return: Nill
 */

int main(void)
{
	char al = 'z';

	for (; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
