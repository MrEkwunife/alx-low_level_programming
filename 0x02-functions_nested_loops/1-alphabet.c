#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Nill
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
