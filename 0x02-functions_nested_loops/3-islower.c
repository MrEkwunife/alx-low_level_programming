#include "main.h"

/**
 * _islower - checks if a char is lowercase or not
 *
 * Description: The function returns 1 if a character is
 * lowercase, otherwise it returns
 *
 * @c: int to be checked if it is lower or upper
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
