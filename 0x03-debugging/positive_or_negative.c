#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative- Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return (0);
}
