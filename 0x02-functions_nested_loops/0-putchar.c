#include "main.h"

/**
 * main - prints _putchar to stdout
 *
 * Description: This function prints the string "_putchar" to the standard
 * output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
