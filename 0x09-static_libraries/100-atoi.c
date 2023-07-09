#include "main.h"

/**
*_atoi - a program that convert a string to an integer
*@s: the pointer to be converted
*Return: An integer
*/

int _atoi(char *s)
{
	int m = 0;
	unsigned int ab = 0;
	int cba = 1;
	int bsb = 0;

	while (s[m])
	{
		if (s[m] == 45)
		{
			cba *= -1;
		}
		while (s[m] >= 48 && s[m] <= 57)
		{
			bsb = 1;
			ab = (ab * 10) + (s[m] - '0');
			m++;
		}
		if (bsb == 1)
		{
			break;
		}
		m++;
	}
	ab *= cba;
	return (ab);
}
