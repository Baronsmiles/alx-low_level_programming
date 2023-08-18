#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: the number to be check
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
