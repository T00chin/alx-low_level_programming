#include "lists.h"

/**
 * free_listint_safe - ree list
 * @h: pointer to a pointer
 *
 * Return: freed size.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	int div;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		div = *h - (*h)->next;
		if (div > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
