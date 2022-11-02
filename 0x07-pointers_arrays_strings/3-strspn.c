#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string with the prefix substring
 * @accept: substring
 * Return: number of prefix bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j, n;

	j = 0;
	while (accept[j] != '\0')
	{
		j++;
	}
	n = j;
	i = 0;
	while (*s)
	{
		for (j = 0; j < n; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else
			{
				i = i;
			}
		}
		
		s++;
	}
	return (i);
}
