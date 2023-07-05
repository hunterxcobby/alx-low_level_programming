#include "main.h"

/**
 *_strlen_recursion - return of the length of string
 *@s: the string for printing
 *Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *checker - checking for the availability of s as palindrome
 *@s: the string
 *@x: the first index to be at left
 *@y: the second index to be at right
 *Return: if palindrome is 1, else 0
 */
int checker(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
			return (1);
		else
			return (checker(s, x + 1, y - 1));
	else
		return (0);
}

/**
 *is_palindrome - a program returns 1 if a string is a palindrome and 0 if not
 *@s: the string
 *Return: if palindrome is 1, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
