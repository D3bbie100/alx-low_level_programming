#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int t;

	for(t = '00:00'; t <= '23:59', t++);
		_putchar(t);
}
