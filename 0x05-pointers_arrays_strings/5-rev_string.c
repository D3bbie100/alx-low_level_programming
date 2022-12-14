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
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (i = 0; i <= (j / 2); i++)
	{
		c = s[i];
		s[i] = s[j - i];
		s[j - i] = c;
	}
}
