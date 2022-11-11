#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in array
 * @size: bytes of each element
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
