#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the head of a linked list
 *
 * Return: head node data (n), 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_n *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
