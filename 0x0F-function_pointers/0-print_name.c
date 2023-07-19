#include "function_pointers.h"

/**
 *print_name - a fucntion that prints a name
 *@f: the pointer's function
 *@name: input
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
