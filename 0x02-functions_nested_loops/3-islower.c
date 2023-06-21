#include "main.h"

/**
*_islower - Checking if a char is lower
*@c: the character for checking
*
*Return: 1 if char letter is lower and 0 if  otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
