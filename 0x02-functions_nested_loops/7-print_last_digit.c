#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = -n;
	}
	m = n % 10;

	_putchar(m + '0');
	return (m);
}
