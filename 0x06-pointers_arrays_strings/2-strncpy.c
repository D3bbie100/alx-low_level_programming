#include "main.h"

/**
 * _strncpy - copies n byte string onto another string
 * @dest: string to be copied onto
 * @src: string to be copied onto another
 * @n : size of bytes of src to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 3;

	dest[n] = i;
	src[n] = i;
	return (dest);
}
