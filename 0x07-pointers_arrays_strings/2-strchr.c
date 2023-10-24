#include "main.h"
/**
 * _strchr - entry
 * @s: input 1
 * @c: input 2
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
