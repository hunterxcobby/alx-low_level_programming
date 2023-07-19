#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - struct op
 *@a: the operator
 *@b: char
 *Return: the integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - the entry point
 *@a: the operator
 *@b: char
 *Return: the integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - the entry point
 *@a: the operator
 *@b: char
 *Return: the integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - the entry point
 *@a: the operator
 *@b: char
 *Return: the integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - the entry point
 *@a: the operator
 *@b: char
 *Return: the integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
