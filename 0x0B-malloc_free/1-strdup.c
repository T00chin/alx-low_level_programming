#include "main.h"

#include <string.h>

/**
 * *_strdup - returns pointer to newly allocated space in memory
 * @str: pointer to string
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int l;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	l = strlen(str);
	str1 = (char *) malloc(l + 1);
	if (str1 == NULL)
	{
		return (NULL);
	}
	strcpy(str1, str);
	return (str1);
}
