#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * Description: A program that prints the alphabet in lowercase
 * followed by a new line.
 * Return: return 0 always (success)
 */

void print_alphabet(void)
{
	char c= 'a';

	while (c <= 'z')
{
	_putchar(c);
	c++;
}
	_putchar('\n');
}
