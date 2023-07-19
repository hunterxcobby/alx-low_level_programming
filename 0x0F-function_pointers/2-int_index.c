#include "function_pointers.h"

/**
*int_index - a program that searches for an integer
*@cmp: pointer to the function to be used to compare values
*@size: number of elements in the array
*@array: input
*Return:index of the first element for which the cmp function does
*not return 0 If no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (p = 0; p < size; p++)
			if (cmp(array[p]) != 0)
				return (p);
	}
	return (-1);
}
