#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string whose characters are to be printed
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int m;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	m = i - 1;

	for (i = 0; i <= m; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
