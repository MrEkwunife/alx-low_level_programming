#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for 'q' and 'e'
 *
 * Description: This function prints the lowercase letters of the
 * English alphabet, excluding 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
