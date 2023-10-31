#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns duplicated value of string
 * @str: inserted string
 * Return: returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str2;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		str2[j] = str[j];
	}
	return (str2);
}
