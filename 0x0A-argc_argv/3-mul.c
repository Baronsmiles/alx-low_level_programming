#include <stdlib.h>
/**
 * main - multipies two numbers
 * @argc: number of the command line arg...
 * @argv: the array that contains the command line arg...
 * Return: (0) when successfull
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
