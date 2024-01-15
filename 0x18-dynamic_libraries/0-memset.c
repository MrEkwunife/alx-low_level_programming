

/**
* _memset - the function
* @s: pointer
* @b: the bytes
* @n: number of bytes
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
