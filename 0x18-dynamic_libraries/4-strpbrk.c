

/**
* _strpbrk - this funct matche any char specified
* @s: string.
* @accept: char in str1 that match char in s
* Return: s
**/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
