#include "list.h"

/**
 * print_list - prints lists of elements
 * @: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current = NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		count++;
		current = current->next;
	}
	return (count);
}
