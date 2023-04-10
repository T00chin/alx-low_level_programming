#include "main.h"

/**
 * main - prints all the arguments the prgram receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	for (count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
