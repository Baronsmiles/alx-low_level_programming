#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: the function parameter
 * Return: 1 if it's uppercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
