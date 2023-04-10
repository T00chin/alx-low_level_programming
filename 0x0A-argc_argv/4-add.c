#include "main.h"

/**
 * main - Adds positive numbers and prints results followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *ep;
		long num = strtol(argv[i], &ep, 10);

		if (*ep != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (num <= 0)
		{
			continue;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
