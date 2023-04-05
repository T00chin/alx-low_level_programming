#include "main.h"

/**
 * _pow_recursion - returns the power of integers
 * @x: the base value
 * @y: the exponent
 *
 * Return: value of x power y
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
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
