#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is run on.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	double d;
	char a;
	char str[] = "Hello, world!";
	long int c;
printf("The size of an integer is %lu bytes.\n", sizeof(i));
printf("The size of a float is %lu bytes.\n", sizeof(f));
printf("The size of a double is %lu bytes.\n", sizeof(d));
printf("The size of the string \"%s\" is %lu bytes.\n", str, sizeof(str));
printf("The size of a char is %lu bytes.\n", sizeof(a));
printf("The size of a long integer is %lu bytes.\n", sizeof(c));
return (0);
}

