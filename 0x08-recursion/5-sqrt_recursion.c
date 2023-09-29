#include "main.h"
/**
 * sqrt_i -  return the natural squre root of a number
 * @n: intput number
 * @a: iterator
 * Return: natural squre root or -1
 */
int sqrt_i(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	{
		return (sqrt_i(n, a + 1));
	}
}

/**
 *_sqrt_recursion - returns the natural squre root of a number
 *@n: intput number
 *Return: natural squre root
 */
int _sqrt_recursion(int n)
	{
		return (sqrt_i(n, 1));
	}
