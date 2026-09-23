#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase letters of the English alphabet
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
