#include "function_pointers.h"

/**
*array_iterator - a function that executes a function given as
*a parameter on each element of an array
*@size: the array's size
*@array: the array for execution of function
*@action: the pointer
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array && action)
		for (p = 0; p < size; p++)
			action(array[p]);
}
