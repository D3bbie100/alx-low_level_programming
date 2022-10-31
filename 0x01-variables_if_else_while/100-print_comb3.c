#include <stdio.h>

/**
 * main - prints all possible different combinations of 2 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i, m, n;

	for (i = 1; i <= 100; i++)
	{
		m = i / 10;
		n = i % 10;
		if (n > m)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
