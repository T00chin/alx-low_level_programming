#include "main.h"
#include "string.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Leng of the string to be returned
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
