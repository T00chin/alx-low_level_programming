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
	{
		int i;
		if (i * i == n)
			return (i);
		if else  (i * i > n)
			return (-1);
		else
			return (_sqrt_recursion(n, i + 1));
	}
}
