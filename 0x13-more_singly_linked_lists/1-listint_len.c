#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
