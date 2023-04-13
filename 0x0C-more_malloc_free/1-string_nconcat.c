#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of the first element of s2
 *
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int l1, l2, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		l = l1 + l2;
	else
		l = l1 + n;

	result = malloc(l + 1);

	if (result == NULL)
		return (NULL);

	strncpy(result, s1, l1);
	strncpy(result + l1, s2, l - l1);
	result[len] = '\0';


	return (result);
