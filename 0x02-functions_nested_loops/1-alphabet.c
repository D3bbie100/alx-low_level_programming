#include "main.h"

/**
 * main - define the fnuction print_alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{ 
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
