#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * return: on success 1
 * return: on error 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
