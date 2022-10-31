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
		n *= -1;
	}

	i = n % 10;
	_putchar(i + '0');
	return (i);
	return (0);
}
