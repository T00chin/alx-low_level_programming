#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents information about the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct contain information about a dog, such as
 * its name, age and owner. it can be used to store and manipulate
 * data on dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
