#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * Return: i (length of string)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
