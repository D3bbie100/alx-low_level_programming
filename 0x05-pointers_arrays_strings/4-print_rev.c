#include "main.h"

/**
 * print_rev -prints string in reverse
 * @s: stinr to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	i = j;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
