#include <stdio.h>

/**
 *main - prints a string
 *
 * Return: 1
 */
int main(void)
{
	char m;
	int i;
	char a[31] = "and that piece of art is useful";

	for (i = 0; i <= 30; i++)
	{
		m = a[i];
		putchar(m);
	}

	putchar('"');
	putchar(' ');
	putchar('-');
	putchar(' ');
	putchar('D');
	putchar('o');
	putchar('r');
	putchar('a');
	putchar(' ');
	putchar('K');
	putchar('o');
	putchar('r');
	putchar('p');
	putchar('a');
	putchar('r');
	putchar(',');
	putchar(' ');
	putchar(2 + '0');
	putchar(0 + '0');
	putchar(1 + '0');
	putchar(5 + '0');
	putchar('-');
	putchar(1 + '0');
	putchar(0 + '0');
	putchar('-');
	putchar(1 + '0');
	putchar(9 + '0');
	putchar('\n');
	return (1);
}
