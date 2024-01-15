/**
 * _islower - checks if character is lower or not
 * @c: char
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
