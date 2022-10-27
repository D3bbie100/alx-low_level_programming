#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, m;

	i = 0;
	while (str[i] != 0)
	{
	i++;
	}
	j = i - 1;
	m = j / 2;
	for (i = 0; i <= j; i++)
	{
		if (i > m)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
