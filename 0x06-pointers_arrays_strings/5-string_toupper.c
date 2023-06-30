#include "main.h"

/**
 *string_toupper - a program that changes all lowercase
 *letters of a string to uppercase
 *@s: the string
 *Return: character
 */

char *string_toupper(char *s)
{

	int k;

	k = 0;
	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
			*(s + k) -= 'a' - 'A';
		k++;
	}
	return (s);
}
