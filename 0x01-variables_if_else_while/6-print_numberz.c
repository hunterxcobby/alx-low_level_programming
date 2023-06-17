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
	for (int i = 0; i <= 9; i++)
{

	putchar(i + '0');
	putchar(' ');
}
	return (0);
}
