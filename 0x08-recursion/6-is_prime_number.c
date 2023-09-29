#include "main.h"
/**
 * prime_i - calculate if the number is a prime number
 * @n: input
 * @a: divisor
 * Return: (0)
 */
int prime_i(int n, int a)
{
	if (n <= 1 || (n != a && n % a == 0))
	{
		return (0);
	}
	else if (n == a)
	{
		return (1);
	}
	return (prime_i(n, a + 1));
}
/**
 * is_prime_number - check if the number is a prime number
 * @n: input
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_i(n, 2));
}
