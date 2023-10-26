#include "main.h"
/**
 * _pow_recursion - returns x power y
 * @x: raiser
 * @y: raised
 * Return: x pow y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
