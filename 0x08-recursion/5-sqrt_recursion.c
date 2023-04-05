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
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion(n));
}
