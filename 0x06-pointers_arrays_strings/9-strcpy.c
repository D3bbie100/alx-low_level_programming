#include "main.h"

/**
 * _strcpy - copies one string onto another
 * @dest: sting to be copied onto
 * @src: string to be copied from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0, j = 0; j >= '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (0);
}
