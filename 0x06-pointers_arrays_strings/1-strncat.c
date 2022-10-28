#include "main.h"

/**
 * _strncat - concatanates two strings
 * @dest: string to be added onto
 * @src:string to be added onto another
 * @n: number of bytes of src to be used
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 3;

	dest[n] = i;
	src[n] = i;
	return (dest);
}
