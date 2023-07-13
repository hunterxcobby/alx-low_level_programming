#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: the string
 * Return: the string length
 */

int _strlen(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
		;
	return (x);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: the string 1
 * @s2: the string 2
 * @n: n bytes to concat from string 2
 * Return: the pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int number;
	int len;
	int x;
	int y;

	number = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (number < 0)
		return (NULL);
	if (number >= _strlen(s2))
		number = _strlen(s2);

	len = _strlen(s1) + number + 1;

	ptr = malloc(sizeof(ptr) * len);
		if (ptr == NULL)
			return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];
	for (y = 0; y < number; y++)
		ptr[x + y] = s2[y];
	ptr[x + y] = '\0';

	return (ptr);
}
