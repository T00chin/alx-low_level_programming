#include "main.h"
/**
 * print_last_digit - Prints the last digit.
 * @i: char to compute last digit.
 * Return: Last digit.
 */

int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
		i = -i;
	last_digit = i % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
