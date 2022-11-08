#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - adds one string onto another
 * @s1: string to be added onto
 * @s2: string to be added to another
 * Return: pointer to allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, m, n;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	s = malloc((i + j + 1) * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (m = 0; m < i; m++)
	{
		s[m] = s1[m];
	}
	n = 0;
	for (n = 0; n < j; n++, m++)
	{
		s[m] = s2[n];
	}
	s[m] = '\0';

	return (s);
}
