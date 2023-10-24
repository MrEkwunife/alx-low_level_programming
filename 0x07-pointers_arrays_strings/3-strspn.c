#include "main.h"

/**
  * _strspn - locates a character in a string.
  * @s: param 1
  * @accept: param 2
  *
  * Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b;
	unsigned int c = 0;

	while (accept[i])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
				c++;
			b++;
		}
		a++;
	}
	return (c);
}
