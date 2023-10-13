#ifndef _VARIADIC_H_
#define _VARIADIC_H_

/**
 * struct print - Struct for matching format specifiers with functions.
 * @specifier: The format specifier.
 * @f: The corresponding function.
 */
typedef struct print
{
	char *specifier;
	void (*f)(va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
