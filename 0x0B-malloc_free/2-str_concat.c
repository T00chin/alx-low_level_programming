#include "main.h"

#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	size_t l1;
	size_t l2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = strlen(s1);
	l2 = strlen(s2);

	res = malloc((l1 + l2 + 1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strcat(res, s2);

	return (res);
}
