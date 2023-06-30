#include "main.h"

/**
*print_number - a program that prints an integer
*@n: the integer parameter
*Return: Always 0.
*/
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	a = n;
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
