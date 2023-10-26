#include "main.h"
/**
 * factorial - returns the factorial of n
 * @n: number
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
