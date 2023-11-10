#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - it sums all the integers
 * @n: count
 * Return: returns the sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(numbers, int);
	}
	va_end(numbers);

	return (result);
}
