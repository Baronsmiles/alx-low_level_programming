#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    /**
     * main - prints the name of the program
     *
     * Description: This function prints the name of the program
     * using the first command line argument.
     *
     * Return: Always 0 (Success)
     */
	printf("%s\n", *argv);
	return (0);
}
