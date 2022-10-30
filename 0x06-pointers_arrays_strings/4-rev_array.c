#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array whose content is to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, c, m;

	j = n - 1;
	m = (n + 1) / 2;
	for (i = 0; i <= m; i++)
	{
		c = a[i];
		a[i] = a[j - i];
		a[j - i] = c;
	}
}
