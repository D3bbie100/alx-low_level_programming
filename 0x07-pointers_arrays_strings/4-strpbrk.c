#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to character in s that matches one of the characters
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n;
	char *p;

	j = 0;
	while (accept[j] != '\0')
	{
		j++;
	}
	n = j;
	i = 0;
	while (*s)
	{
		j = 0;
		while (s[i] != 0 && accept[j] != '\0')
		{
			j++;
		}
		if (j < n)
		{
			break;
		}
		else
		{
			s++;
		}
	}
	p = &s[i];
	return (p);
}
