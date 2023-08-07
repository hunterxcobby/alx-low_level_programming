#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary.
 *
 * Return: No return value (void).
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int mask;
	int leading_zeros;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 1;


	while ((mask & n) == 0)
	{
		mask >>= 1;
		leading_zeros++;
	}

	for (i = 0; i < sizeof(unsigned long int) * 8 - leading_zeros; i++)
	{
		if (n & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		mask >>= 1;
	}
}
