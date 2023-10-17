#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of ints
 *
 * @a: first int
 * @b: second int
*/

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;

}
