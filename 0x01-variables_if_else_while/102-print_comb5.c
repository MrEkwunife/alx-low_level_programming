#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return:  Zero
 */

int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = 1; n2 <= 99; n2++)
		{
			if (n1 != n2)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');

				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}
