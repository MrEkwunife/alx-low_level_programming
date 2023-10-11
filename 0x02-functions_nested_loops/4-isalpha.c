#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: checking parameter
 * Return: on suceess 1, else o
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
