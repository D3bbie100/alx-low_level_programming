#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: string to be searched for character
 *@c: character to be located
 * Return: pointer to first encounter of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	p = &s[i];
	return (p);
}
