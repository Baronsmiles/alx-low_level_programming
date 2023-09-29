#include "main.h"

/**
 * sqrt_i return the natural squre root of a number
 * @n: intput number
 * @c: iterator
 * Return: natural squre root or -1
 */
int sqrt_i(int n, int a)
{
	if (a * a == n)
	{
		return (o);
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
	if (n == 0)
	{
		return (o);
	}
	else if (n < o)
	{
		return (-1);
	}
	else
	{
		return (sqrt_i(n, 1));
	}
}
