#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - Prints a name using function pointer.
 * @name: The name to be printed.
 * @f: The function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: Size of the array.
 * @action: The function pointer to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers.
 * @size: Size of the array.
 * @cmp: The comparison function to be used.
 * Return: Index of the first matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
