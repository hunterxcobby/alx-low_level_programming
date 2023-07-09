#include "main.h"

/**
 *_strncpy - a program that copies a string
 *@n: the integer's length
 *@src: the string's source
 *@dest: the string's destination
 *Return: pointer to the resulting dest's string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);
}
