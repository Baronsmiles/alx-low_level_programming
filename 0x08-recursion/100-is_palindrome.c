#include <main.h>
/**
 * strlen_a - To get the string length
 * @s: string
 * Return: lenth of the string
 */
int strlen_a(char *s)
{
	if (*sl == '\0')
		return (0);
	else
		return (1 + strlen_a(s + 1));
}
/**
 * _compare_string - compare each charater of the string
 * @s: string
 * @a: smallest iterator
 * @b: largest iterator
 * Return: int
 */
int _compare_string(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 _compare_string(s, a + 1, b - 1));
	}
	return (0);
/**
 * is_palindrome - detects if string is a palindrome
 * @s: string to test
 * Return: 1 if its a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare_string(s, 0, strlen_a(s - 1)));
}
