#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char with a specific char
 * @size: number of array entries
 * @c: charater to be initialized
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
