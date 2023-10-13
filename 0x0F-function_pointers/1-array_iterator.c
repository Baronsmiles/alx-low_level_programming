#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: Size of the array.
 * @action: The function pointer to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;
			for (i = 0; i < size; i++)
			action(array[i]);
	}
}
