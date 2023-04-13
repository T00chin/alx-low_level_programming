#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int to be allocated memory
 *
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = &b
	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
