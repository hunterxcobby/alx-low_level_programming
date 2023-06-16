#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: A program that assigns a random number.
 * Return: Always return 0 (success)
 */

int main(void)
{
	int n;

	/* Seed the random number generator with the current sys time.*/
	srand(time(0));

	/* Genrate a random number between 0 and RAND_MAX */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n);
}

	if (n == 0)
{
	printf("%d is zero\n", n);
}
	if (n < 0)
{
	printf("%d is negative\n", n);
}

	return (0);

}
