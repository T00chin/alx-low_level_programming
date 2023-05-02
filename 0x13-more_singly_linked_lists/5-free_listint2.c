#include "lists.h"

/**
 * free_listint2 - frees list and sets head to null
 * @head: pointer to pointer to the head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
