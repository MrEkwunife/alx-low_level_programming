#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory  is stored
 *@src: memory  is copied
 *@n:  bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int j = n;

	for (; m < j; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
