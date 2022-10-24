#include <stdio.h>

/**
 * main - prints fizz buzz instead of multiples of 3 and 5
 * Return: 0(Success);
 */

int main(void)
{
	int i;
	char s[10] = "Fizz";
	char st[10] = "Buzz";
	char str[10] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("%s", s);
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("%s", st);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", str);
		}
		else
		{
		printf("%d", i);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
