#include "main.h"
#include <stdio.h>

/**
*_puts - a function that prints a string, followed by a new line, to stdout
*@str: the string
*Return: the length of string
*/

void _puts(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		putchar(str[g]);
		g++;
	}
	putchar('\n');
}
