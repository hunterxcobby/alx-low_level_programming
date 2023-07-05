#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strpbrk - a program that that searches a string for any of a set of bytes
 *@accept: match one of the bytes, if not,@NULL
 *@s: first place for string to occur
 *Return: returns NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		x++;
	}
	return (NULL);
}
