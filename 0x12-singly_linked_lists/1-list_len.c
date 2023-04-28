#include "lists.h"

/**
 * list_len - prints number of elements in a linked list
 * @: pointer to the head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
