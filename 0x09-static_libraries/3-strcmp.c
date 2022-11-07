#include "main.h"


/**
 * _strcmp - compares two string
 * @s1: one of the strings to be compared
 * @s2: one of the stings to be compared
 * Return: 0 is same, less than 0 if s1<s2, greater than 0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		sum = s1[i] - s2[i];
		if (s1[i] > s2[i])
		{
			return (sum);
		}
		if (s1[i] < s2[i])
		{
			return (sum);
		}
	}
	if (s1[i] != 0 || s2[i] != 0)
	{
		return (sum);
	}
	else
	{
		return (0);
	}
	return (0);
}
