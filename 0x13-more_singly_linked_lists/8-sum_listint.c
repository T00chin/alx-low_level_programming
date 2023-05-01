#include "lists.h"

/**
 * sum_listint - sums of all the data of a linked list
 * @head: pointer to the head of the list
 *
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
