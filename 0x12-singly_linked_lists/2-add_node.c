#include "lists.h"

/**
 * add_node - adds new node at the begginning of the list
 * @head: pointer to a ponter to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
