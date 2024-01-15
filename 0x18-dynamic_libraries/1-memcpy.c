

/**
* _memcpy - this copies memory area
* @dest: copy from
* @src: copy to
* @n: num of bytes to copy
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
