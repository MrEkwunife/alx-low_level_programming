#include <stdio.h>

/**
 * main - prints the english alphabets in reverse order
 *
 * Descritption: The function uses the putchar function
 * to print the english lowercase alphabet in reverse
 * order eg zyx...a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
