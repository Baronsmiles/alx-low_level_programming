#include "main.h"
/**                                                         * a_prime - calculates if a number is prime recursively    * @n: number to evaluate                                   * @a: iterator
 * Return: 1 if n is prime, 0 if not
*/                                                         int a_prime(int n, int a)
{                                                                  if (a == 1)                                                {
                return (1);
        }
	if  (n % a == 0 && a > 0)
        {
	return (0);
	}
	return (a_prime(n, a - 1));
}

/**                                                         *is_prime_number -  if an integer is a prime number or no
t                                                           * @n: number to evaluate                                   * Return: 1 if n is a prime number, 0 if not               */
int is_prime_number(int n)
	{ 
	return (a_prime(n, n - 1));
	} 
