#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,starting with 1&2
 * Separated by a comma, followed by space.
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long int j, k, next, sum;


	for (count < 50; count++;)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
