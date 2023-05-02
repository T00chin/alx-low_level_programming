#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to a pointer to the head of a list
 * @idx: index at which the new node should be added, starts from 0
 * @n: value to be assigneed the new node
 *
 * Return: address of new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *current = *head;

	while (current != NULL && i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	if (i >= idx)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else if (i == (idx - 1))
	{
		newNode->next = current->next;
		current->next = newNode;
	}
	return (newNode);
}
