#include <stdio.h>

/**
 * main - prints combination of three digits
 *
 * Return: Nill
 */

int main(void)
{
	int fNum;
	int sNum;
	int tNum;

	for (fNum = 48; fNum < 58; fNum++)
	{
		for (sNum = 49; sNum < 58; sNum++)
		{
			for (tNum = 50; tNum < 58; tNum++)
			{
				if (tNum > sNum && sNum > fNum)
				{
					putchar(fNum);
					putchar(sNum);
					putchar(tNum);

					if (fNum < 55 || sNum < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
