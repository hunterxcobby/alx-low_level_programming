#include <stdio.h>
#include <stdlib.h>

/**
*print_to_98 - Printing all natural numbers from input to 98,
*Description - prints all natural numbers from n to 98,
*followed by a new line..
*@n: the beginning number.
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
