#include "main.h"
#include <stdio.h>

/**
 *swap_int - a function that swaps the values of two integers.
 *@a: Integer 1.
 *@b: Integer 2.
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
