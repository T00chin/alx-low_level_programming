#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to pointer to the head of the list
 * @n: integer value to be added to the new element
 *
 * Return: address of the new element, else NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
