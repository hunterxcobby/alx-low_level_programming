#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program that prints all single digit numbers
 * of base 10 starting from  0
 * Return: return 0 always (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
{
	printf("%d", num);
	num++;
}

	printf("\n");

	return (0);
}
