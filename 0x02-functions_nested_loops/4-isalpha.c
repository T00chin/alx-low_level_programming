#include "main.h"

/**
 * _isalpha - checks for alphabet character.
 * @c:char to check if it is alphabet.
 * Return: 1 if its a letter, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}
