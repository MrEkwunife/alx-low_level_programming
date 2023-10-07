#include <stdio.h>
/**
 *main - possible combination of two digits numbers
 *
 * Return: 0;
 */

int main(void)
{
	int fNum;
	int sNum;

	for (fNum = 0; fNum < 100; fNum++)
	{
		for (sNum = 0; sNum < 100; sNum++)
		{
			if (fNum < sNum)
			{
				putchar(48 + (fNum / 10));
				putchar(48 + (fNum % 10));
				putchar(' ');
				putchar(48 + (sNum / 10));
				putchar(48 + (sNum % 10));

				if (fNum < 98 && sNum < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
