#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string
 * @str: string to be duplicated
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *s;
	int i, n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc((n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
