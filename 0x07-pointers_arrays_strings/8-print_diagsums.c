#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @: 2D array whose diagonals are to be printed
 * @size: length and width of square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0, i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += (a[i][j]);
			}
		}
	}
	printf("%d", sum);
	putchar(',');
	putchar(' ');
	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		if (j + i == size - 1)
		{
			sum += (a[i][j]);
		}
	}
	printf("%d\n", sum);
}
