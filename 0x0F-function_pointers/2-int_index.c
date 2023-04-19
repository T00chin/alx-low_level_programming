#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first element 
 * for which the cmp function does not return 0
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to fuction to compare values
 *
 * Return: If no element matches, return -1. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
