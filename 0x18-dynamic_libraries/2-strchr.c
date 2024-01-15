



/**
* _strchr - Func to locate a char in a string
* @s: string
* @c: char to search
* Return: Pointer to the first occurrence of the char c in the string s
**/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
