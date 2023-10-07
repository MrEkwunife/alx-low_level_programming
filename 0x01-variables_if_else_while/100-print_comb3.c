#include <stdio.h>

/**
 * main - prints combination of two numbers
 *
 * Return: 0
 */

int main(void)
{
	int fNum;
	int sNum;

	for (fNum = 48; fNum <= 56; fNum++)
	{
		for (sNum = 49; sNum <= 57; sNum++)
		{
			if (sNum > fNum)
			{
				putchar(fNum);
				putchar(sNum);

				if (fNum != 56 || sNum != 57)
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
