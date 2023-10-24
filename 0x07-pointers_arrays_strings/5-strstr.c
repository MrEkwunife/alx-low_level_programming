#include "main.h"

/**
  * _strstr - finds a substring
  * @haystack:  search string
  * @needle: searching string
  *
  * Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
