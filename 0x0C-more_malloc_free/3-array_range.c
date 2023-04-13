#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max);
{
	void *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(*ptr) * (max - min +1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
