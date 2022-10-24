#include "main.h"

/**
 * more_numbers -prints 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int m;
	int i = 0;

	while (i < 10)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar('1');
			}
			_putchar((m % 10) + '0');
		}
	_putchar('\n');
	i++;
	}
}
