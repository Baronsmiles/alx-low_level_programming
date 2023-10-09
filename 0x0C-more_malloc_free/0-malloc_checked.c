#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * This function allocates memory using malloc. If malloc fails to allocate
 * the required memory, the program exits with status 98.
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
		ptr = malloc(b);

	if (ptr == NULL)
	{
/* If malloc fails, exit the program with status 98 */
		exit(98);
	}
	return (ptr);
}
