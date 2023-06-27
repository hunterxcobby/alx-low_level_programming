#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that generates random valid passwords
*for the program 101-crackme
*Return: Always 0.(success)
*/

int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while (sum <= 2645)
	{
		p = rand() % 128;
		sum += p;
		putchar(p);
	}
	putchar(2772 - sum);
	return (0);
}
