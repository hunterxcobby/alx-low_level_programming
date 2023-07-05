#include "main.h"

/**
 *checker - to check the prime number
 *@x: the first integer
 *@y: the integer
 *Return: integer as success
 */
int checker(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (checker(x + 1, y));
}

/**
 *is_prime_number - a program that tells if an integer number is prime
 *@n:the input number
 *Return: the integer as success
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
