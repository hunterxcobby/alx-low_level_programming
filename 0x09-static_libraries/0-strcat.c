#include "main.h"

/**
 *_strcat - a program that concatenates two strings.
 *@src: the first character
 *@dest: the second character
 *Return: character
 */

char *_strcat(char *dest, char *src)
{
	char *f = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (f);
}
