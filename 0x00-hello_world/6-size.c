#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is run on.
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long int c;
	long long int d;
	float f;
printf("The size of an integer is %lu bytes.\n", sizeof(i));
printf("The size of a float is %lu bytes.\n", sizeof(f));
printf("The size of a long long int is %lu bytes.\n", sizeof(d));
printf("The size of a char is %lu bytes.\n", sizeof(a));
printf("The size of a long integer is %lu bytes.\n", sizeof(c));
return (0);
}

