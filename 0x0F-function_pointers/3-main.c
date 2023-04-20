#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int x, y;
	char  *sop;

	(void) argc;
	if (argc != 4)
	{
		printf("Erro\n");
		exit(98);
	}
	x = atoi(argv[1]);
	sop = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(sop) == NULL || sop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sop == '/' && y == 0) || (*sop == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(sop)(x, y));
	return (0);
}
