#include <unistd.h>

/**
* _puts - func to print to stdout
*@str: string
*/


void _puts(char *str)
{
	int count = 0;
	char i = '\n';
	char *p = &i;

	while (str[count] != '\0')
	{
		count++;
	}

	write(1, str, count);
	write(1, p, 1);
}
