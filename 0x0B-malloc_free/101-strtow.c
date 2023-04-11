#include "main.h"
#include <string.h>

/**
 * **strtow - splits string into two
 * @str: pointer to the string
 *
 * Return: pointer to strings.
 */
char **strtow(char *str)
{
	int i, j, k, l, count;
	char **words;

	count = 0;
	l = 0;
	if (str == NULL || str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	words  = (char **)malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; i < count; i++, k++)
	{
		while (str[k] == ' ')
			k++;
		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			l++;
		words[i] = (char *)malloc(sizeof(char) * (l + 1));
		if (words[i] == NULL)
			return (NULL);
		strncpy(words[i], &str[k], l);
		words[i][l] = '\0';
		k += l;
		l = 0;
	}
	words[count] = NULL;
	return (words);
}
