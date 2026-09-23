#include <stdio.h>

/**
 * main - prints hexadecimals
 *
 * Description: This function prints 0 through f, an
 * hexadecimal representation of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
