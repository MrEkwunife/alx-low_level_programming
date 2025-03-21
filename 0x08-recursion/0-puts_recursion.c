#include "main.h"

/**
 * _puts_recursion - prints chars using recursion
 * @s: string of chars to be printed
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
