#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program that prints the alphabet in lowercase
 * followed by a new line.
 * Return: return 0 always (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
	putchar('\n');

	return (0);

}
