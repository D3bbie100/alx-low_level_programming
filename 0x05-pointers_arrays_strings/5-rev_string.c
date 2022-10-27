#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	int m;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	m = i;
	j = i - 1;

	for (i = 0; i <= (m / 2); i++)
	{
		c = s[i];
		s[i] = s[j - i];
		s[j - i] = c;
	}
}
