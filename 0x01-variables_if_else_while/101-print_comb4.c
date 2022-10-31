#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 10; i <= 1000; i++)
	{
		j = i / 100;
		k = (i % 100) / 10;
		l = (i % 100) % 10;
		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
