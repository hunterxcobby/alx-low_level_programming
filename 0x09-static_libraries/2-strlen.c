#include "main.h"
#include <stdio.h>

/**
 *_strlen - a function that returns the length of a string
 *@g: the character for checking
 *Return: Always 0.(success)
 */

int _strlen(char *g)
{
	int b = 0;

	for (; *g++;)
		b++;
	return (b);
}
