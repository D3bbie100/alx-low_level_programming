#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

	_putchar('\n');
	i++;
	}
}

