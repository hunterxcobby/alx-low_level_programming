#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strstr - a program that locates a substring
 *@needle: the first place where substring occurs
 *@haystack: string for searching
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y] && (haystack[x] == needle[0]))
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
