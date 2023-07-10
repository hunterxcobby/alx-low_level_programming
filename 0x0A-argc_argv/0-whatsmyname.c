#include <stdio.h>

/**
*main -  a program that print its own name
*@argc: argument count
*@argv: argument vector
*Return: nothing
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

