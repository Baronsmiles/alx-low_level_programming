#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using function pointer.
 * @name: The name to be printed.
 * @f: The function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
