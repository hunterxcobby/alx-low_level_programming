#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Return: return void always (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
{
	_putchar(c);
	c++;
}
	_putchar('\n');
}
