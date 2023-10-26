#include "main.h"

int actual_sqrt_recursion(int sqrt, int n);

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: the number we are finding the square root of
 *
 * Return: the natural square root or -1
 */

int _sqrt_recursion(int n)
{

	if (n < 0)

		return (-1);

	return (actual_sqrt_recursion(0, n));

}

/**
 * actual_sqrt_recursion - checks for square root based on number
 * @n: the number we are looking for the square root of
 * @sqrt: the possible root
 *
 * Return: return the root or -1
 */

int actual_sqrt_recursion(int sqrt, int n)
{

	if (sqrt * sqrt > n)

		return (-1);

	if (sqrt * sqrt == n)

		return (sqrt);

	return (find_sqrt(sqrt + 1, n));

}
