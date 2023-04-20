#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
