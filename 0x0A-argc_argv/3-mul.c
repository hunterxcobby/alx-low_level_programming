#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int value = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", value);

	return (0);
}
