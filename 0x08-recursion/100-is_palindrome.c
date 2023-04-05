#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
