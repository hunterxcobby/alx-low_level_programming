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
	char ch = '0';

	while (ch <= '9')
{
	putchar(ch);
	ch++;
}

	ch = 'a';

	while (ch <= 'f')
{
	putchar(ch);
	ch++;
}

	putchar('\n');

	return (0);

}
