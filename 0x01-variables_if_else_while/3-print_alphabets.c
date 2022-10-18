#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int car;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (car = 'A'; car <= 'Z'; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}

