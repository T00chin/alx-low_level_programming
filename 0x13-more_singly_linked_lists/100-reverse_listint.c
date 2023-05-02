#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	current = *head;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	current = prev;
	return (current);
}
