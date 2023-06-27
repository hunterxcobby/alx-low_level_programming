#include "main.h"

/**
 *_strcpy - a program thatcopies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest
 *@src: character for checking
 *@dest:character for checking
 *Return: Always 0.(success)
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);
}
