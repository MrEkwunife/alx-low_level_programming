

/**
* _strspn - Funct locate a char in a string
* @s: The string
* @accept: chars to match in string, s
* Return: count
**/
unsigned int _strspn(char *s, char *accept)
{
	int in, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;
	in = 0;

	while (str1[in] != '\0')
	{
		j = 0;

		while (str2[j] != '\0')
		{
			if (str2[j] == str1[in])
			{
				count++;
				break;
			}

			j++;

		}
		if (s[in] != accept[j])
		{
			break;
		}

		in++;

	}

		return (count);
}
