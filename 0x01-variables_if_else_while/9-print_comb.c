#include <stdio.h>

/**
 * main - prints single digits numbers seperated by comma.
 *
 * Description: The function prints numbers 0 to 9 separating them
 * with a comma and a space except from number 9 the last number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
