#include <stdio.h>

/**
 * main - Prints lowercase alhapbets, then uppercase alphabets
 *
 * Description: This function prints the lowercase letters of the
 * English alphabet followed by the uppercase letters, then a new line.
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

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
