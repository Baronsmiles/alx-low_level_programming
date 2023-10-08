#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /**
     * main - Prints all arguments it receives
     *
     * Description: This function prints all the arguments it receives,
     * each on a new line.
     *
     * @argc: Number of arguments
     * @argv: Array of arguments
     *
     * Return: Always 0 (Success)
     */
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
