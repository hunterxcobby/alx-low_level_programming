#include "main.h"

/**
 *factorial - a program that returns the factorial of a given number
 *@n: input number
 *Return: factorial of the number
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
