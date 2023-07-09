#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strspn - a program that gets the length of a prefix substring
 *@accept: contains bytes
 *@s: initial seg.
 *Return: w
 */

unsigned int _strspn(char *s, char *accept)
{
	int  z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
