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
	int i, j, l, m;

	m = n - 1;
	j = 0;
	while (src[j] != 0)
	{
		j++;
	}
	l = j + 1;

	if (l >= n)
	{
		i = 0;
		for (j = 0; j <= m; ++j, ++i)
		{
			dest[i] = src[j];
		}
	}
	else
	{
		i = 0;
		for (j = 0; src[j] != '\0'; ++j, ++i)
		{
			dest[i] = src[j];
		}
		while (j < m)
		{
			dest[i] = '\0';
			++i;
			++j;
		}
		dest[i] = '\0';
	}
	return (dest);
}
