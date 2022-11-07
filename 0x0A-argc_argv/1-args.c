#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
