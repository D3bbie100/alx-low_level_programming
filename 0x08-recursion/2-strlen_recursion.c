#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string whose length is to be printed
 * Return: lenth of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
