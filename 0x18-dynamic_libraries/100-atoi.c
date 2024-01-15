
/**
* _atoi - this converts string to an integr.
* @s: parameter
* Return: an integer
*/

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, j = 0, k = 1, m = 1, id;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;

			size++;

		}

		count++;
	}

	for (id = count - size; id < count; id++)
	{
		j = j + ((*(s + id) - 48) * m);
		m /= 10;
	}
	return (j * k);
	}
