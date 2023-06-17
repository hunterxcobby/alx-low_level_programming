#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A pragram that prints all single digits
 * numbers of base 10 starting from 0
 * Return: return 0 always (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
{

	putchar(i + '0');
	i++;
}
	putchar('\n');

	return (0);
}
