#include "main.h"

/**
 * print_alphabet_x10 - prints the engkish alphabets ten time in new lines
 *
 * Return: on success, 0
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char al = 'a';

	while (num <= 9)
	{
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		num++;
	}
}
