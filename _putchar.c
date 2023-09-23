#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the single character c to stdout
 * @c - character to print
 *
 * Return: on success 1.
 * Return: on error -1
 */
int _putchar(char c){
	return(write (1, &c, 1))
}
