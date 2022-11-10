#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: sting to be converted to integer
 * Return: integer in string
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i;

	for (i = 0; str[i] != '\0'; ++1)
	{
		res = res*10 + str[i] - '0';
	}
	return (sign * res);
}
