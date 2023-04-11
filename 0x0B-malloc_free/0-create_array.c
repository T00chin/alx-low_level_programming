#include "main.h"

/**
 * *create_array - creates array of chars
 * @size: size of the character
 * @c: char array type
 *
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *ar;

	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	_putchar('\n');
	return (ar);
}
