#include "main.h"

/**
 * *argstostr - concatenates all arguments in the program
 * @ac: integer
 * @av: pointer to pointer of char
 *
 * Return: pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	l = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			l++;
			j++;
		}
		l++;
	}

	res = malloc(l * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while  (av[i][j] != '\0')
		{
			res[k] = av[i][j];
			j++;
			k++;
		}
		res[k] = '\n';
		k++;
	}
	res[k] = '\0';
	return (res);
}
