#include <stdio.h>
#include "main.h"

/**
 * int _strlen - prints string lengths
 *
 * @s: string being received
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
