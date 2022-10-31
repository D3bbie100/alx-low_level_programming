#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}

	i = n % 10;
	_putchar('0' + i);
	return (i);
}
