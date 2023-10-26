#include "main.h"
/**
 * actual_sqrt_recursion - finds
 * square root of a number
 * @n: sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - find square root of a number
 * @n: root
 *
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
