#include "lists"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to the head of a list
 * @index: index of the the node starting from 0
 *
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (i == index)
		return (current);
	else
		return (NULL);
}
