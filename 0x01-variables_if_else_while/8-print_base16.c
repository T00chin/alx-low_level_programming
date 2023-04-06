#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 16; n++)
	{
		if (n < 10)
			putchar(n + '0');
		else if (n >= 10)
			putchar(n + 'a');
	}
	putchar('\n');
	return (0);
}
