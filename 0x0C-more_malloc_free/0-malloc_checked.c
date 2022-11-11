#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void **s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
