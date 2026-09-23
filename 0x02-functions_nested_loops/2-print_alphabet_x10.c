#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabets 10 times
 *
 * Description: This function prints the lowercase letters of the
 * English alphabet 10 times, each on a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}


/**
 * print_alphabet - prints the english alphabets
 *
 * Description: This function prints the lowercase letters of the
 * English alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
