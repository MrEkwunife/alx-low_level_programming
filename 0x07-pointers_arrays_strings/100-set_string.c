#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer containing pointer
 * @to: pointer in char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
