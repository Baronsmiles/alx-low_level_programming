#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /**
     * main - Prints the number of arguments passed to the program
     *
     * Description: This function prints the number of arguments passed
     * to the program, excluding the program name itself.
     *
     * @argc: Number of arguments
     * @argv: Array of arguments
     *
     * Return: Always 0 (Success)
     */
(void)argv; /* Ignore argv */
printf("%d\n", argc - 1);
return (0);
}
