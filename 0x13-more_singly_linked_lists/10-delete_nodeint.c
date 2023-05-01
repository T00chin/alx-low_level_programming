#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index in linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted(starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	previous = NULL;

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;
	free(current);
	return (1);
}
