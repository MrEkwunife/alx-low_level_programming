#include <stdio.h>

/**
 * main - printing low alphabets execpt: q and e
 *
 * Return: as usual zero or null
 */

int main(void)
{
	char al = 'a';

	for (; al <= 'z'; al++)
	{
		if (al == 'q' || al == 'e')
			continue;
		putchar(al);
	}
	putchar('\n');

	return (0);
}
