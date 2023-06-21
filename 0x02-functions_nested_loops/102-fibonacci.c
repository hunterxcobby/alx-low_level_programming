#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fibCount = 50;       /* Number of Fibonacci numbers to print */
	long long int fib1 = 1;  /* First Fibonacci number */
	long long int fib2 = 2;  /* Second Fibonacci number */

	printf("%lld, %lld", fib1, fib2);  /* Print the first two Fibonacci numbers */

	for (int i = 3; i <= fibCount; i++)
	{
		long long int nextFib = fib1 + fib2;

		printf(", %lld", nextFib);
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}

