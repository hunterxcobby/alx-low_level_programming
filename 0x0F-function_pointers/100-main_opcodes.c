#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size, p;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (p = 0; p < size; p++)
	{
		if (p == size - 1)
		{
			printf("%02hhx\n", arr[p]);
			break;
		}
		printf("%02hhx ", arr[p]);
	}
	return (0);
}
