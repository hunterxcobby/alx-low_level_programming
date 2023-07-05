#include "main.h"

/**
 *print_chessboard - a program that prints the chessboard
 *@a: parameter to print
 *Return: void for success
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
