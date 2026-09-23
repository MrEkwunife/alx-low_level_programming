#include <stdio.h>

/**
 * main - prints all different combination of two digits
 * numbers.
 *
 * Description: The function prints all different combination of two digits
 * numbers starting from 01 to 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}
