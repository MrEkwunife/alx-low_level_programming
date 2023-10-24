#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sum
 * @a: first input
 * @size: second input
 * Return: Null
 */
void print_diagsums(int *a, int size)
{
	int fsum, ssum, y;

	fsum = 0;
	ssum = 0;

	for (y = 0; y < size; y++)
	{
		fsum = fsum + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		ssum += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", fsum, ssum);
}
