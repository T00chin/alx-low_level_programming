#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
