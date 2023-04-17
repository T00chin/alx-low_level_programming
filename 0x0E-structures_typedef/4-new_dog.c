#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to string containing name
 * @age: age of the the dog
 * @owner: pointer to the string containing the owner's name
 *
 * Return: pointer to the new dog, otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name2;
	char *owner2;
	int nl;
	int ol;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nl = strlen(name);
	ol = strlen(owner);
	name2 = malloc(nl + 1);
	if (name2 == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner2 = malloc(ol + 1);
	if (owner2 == NULL)
	{
		free(name2);
		free(new_dog);
		return (NULL);
	}
	strcpy(name2, name);
	strcpy(owner2, owner);
	new_dog->name = name2;
	new_dog->age = age;
	new_dog->owner = owner2;
	return (new_dog);
}
