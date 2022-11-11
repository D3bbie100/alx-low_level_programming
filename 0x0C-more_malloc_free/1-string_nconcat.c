#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - cocatenates 2 strings
 * @s1: string to be added onto by s2
 * @s2: string added onto s1
 * @n: number of elements of s2 to be added onto s1
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(sizeof(s1) + (sizeof(char) * n));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != 0)
	{
		s[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		s[i] = s2[j];
	}
	return (s);
}
