#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program that prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * Return: return 0 always (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	if (num < 9)

{
	putchar(',');
	putchar(' ');
}
}

	putchar('\n');

	return (0);

}
