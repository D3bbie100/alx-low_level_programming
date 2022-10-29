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
	int i, j, m, l, p;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	p = i;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	l = j + 1;
	m = n - 1;
	if (n <= l)
	{	
		for (j = 0; j <= m; ++j, ++i)
		{
			dest[i] = src[j];
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; ++j, ++p)
		{
			dest[p] = src[j];
		}
		dest[p] = '\0';
	}
	return (dest);
}
