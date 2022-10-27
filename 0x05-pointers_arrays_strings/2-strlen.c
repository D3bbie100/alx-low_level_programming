#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * *s: pointer to dtring s
 * return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
