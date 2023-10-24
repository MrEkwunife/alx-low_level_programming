#include "main.h"

/**
* _memset - fills memory with a  byte
* @s: para1
* @b: para 2
* @n: ipara 3
* Return:  string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
