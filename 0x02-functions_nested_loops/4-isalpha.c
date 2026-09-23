#include "main.h"

/**
 * _isalpha - checks if an int or char is an
 * english alphabet
 *
 * Description: The function returns 1 if the int or char is an
 * english alphabet, otherwise it returns 0
 *
 * @c: int to be checked if it is an english alphabet
 *
 * Return: 1 if c is an english alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
