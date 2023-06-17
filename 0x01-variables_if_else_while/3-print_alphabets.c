#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program that prints the alphabet in lowercase
 * and uppercases right next to it, followed by a new line.
 * Return: return 0 always (success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase++;
}
	while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase++;
}
	putchar('\n');

	return (0);

}
