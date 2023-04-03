#include "main.h"
/**
 * _memcpy - a fuction that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
