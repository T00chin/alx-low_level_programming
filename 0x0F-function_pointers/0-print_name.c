#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: pointer to a function
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

void string(char *str)
{
	printf("%s\n", str);
}

int main()
{
	char name[] = "Brian Toochin";
	print_name(name, string);
	return (0);
}
