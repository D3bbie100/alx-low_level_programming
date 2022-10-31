#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, a, b, c, d;

	for(i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = (i / 10);
			b = (i % 10);
			c = (i / 10);
			d = (i % 10);
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
		}
	}
}
	
