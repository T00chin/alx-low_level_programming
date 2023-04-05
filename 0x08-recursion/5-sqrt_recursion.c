#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The integer to be square rooted
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}

/**
 * sqrt_helper - a helper function for _sqrt_recursion
 * @n: The number to be square rooted
 * @i: The current guess of the square root
 *
 * Return: natural squareroot or -1 if doesn't exist
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}
