#include "function_pointers"
#include <stdio.h>

/**
 * array_iterator - executes function as a parameter on each array el.
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;
	for (c = 0; c < size; i++)
	{
		action(array[c]);
	}
}
