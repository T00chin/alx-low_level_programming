#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list, exit(98) if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 0


	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while  (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
				nodes += 1;
			}
			printf("([%p] %d\n", (void *)slow, slow->n);
			return (nodes);
		}
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	while (slow->next != NULL)
	{
		slow = slow->next;
		printf("->[%p] %d\n", (void *)slow, slow->n);
		nodes += 1;
	}
	return (nodes);
}
