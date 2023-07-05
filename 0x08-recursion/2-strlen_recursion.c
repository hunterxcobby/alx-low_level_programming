#include "main.h"

/**
 *_strlen_recursion - a program that returns the length of a string
 *@s: length of the string
 *Return: the number of bytes in the string pointed to by s
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j +=  _strlen_recursion(s + 1);
	}
	return (j);
}
