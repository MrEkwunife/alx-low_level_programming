
/**
* _isalpha - Return 1 if c is a letter.
* @c: int
* Return: Always 0 or 1.
*/

int _isalpha(int c)
{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
