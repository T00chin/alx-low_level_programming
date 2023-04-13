#include "main.h"

/**
 * *_realloc - rellocates memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ptr
 * @new_size: new size of the new memory block
 *
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	nptr = malloc(new_size);
	if (nptr != NULL)
	{
		memcpy(nptr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	return nptr;
}
