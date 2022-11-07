#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
