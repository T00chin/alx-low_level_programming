#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: pointer to a pointer to the head of list
 * @n: integer to be added added to the new node
 *
 * Return: address of new element, else NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
