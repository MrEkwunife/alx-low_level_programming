
/**
* _strlen - lenght of a string
*@s: the string
* Return: count
*/


int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
