#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list, exit(98) if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;


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
			}
			printf("([%p] %d\n", (void *)slow, slow->n);
			return (0);
		}
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	while (slow->next != NULL)
	{
		slow = slow->next;
		printf("[%p] %d\n", (void *)slow, slow->n);
	}
	return (0);
}
