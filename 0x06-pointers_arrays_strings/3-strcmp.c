#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: one of the strings to be compared
 * @s2: one of the stings to be compared
 * Return: 0 is same, less than 0 if s1<s2, greater than 0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

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
	if (i < j)
	{
		return (-15);
	}
	if (i > j)
	{
		return (15);
	}
	if (i == j)
	{
		return (0);
	}
	return (0);
}
