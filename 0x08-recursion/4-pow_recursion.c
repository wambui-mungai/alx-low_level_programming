#include "main.h"

/**
 *  _pow_recursion - function declaration
 *  @x: integer to power
 *  @y: power to  be raised to
 *  Description: raise x to power y
 *  Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
