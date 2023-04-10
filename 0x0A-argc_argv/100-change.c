#include "main.h"

/**
 * main - prints the min no. of coins making an amount of money
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	res = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5; j++)
	{
		while (i >= coins[j])
		{
			res++;
			i -= coins[j];
		}
	}
	printf("%d\n", res);
	return (0);
}
