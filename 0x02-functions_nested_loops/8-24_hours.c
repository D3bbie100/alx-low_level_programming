#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for(j = 0; j <= 59; j++)
		{
			printf("%d:%d\n", i, j);
		}
	}
	return (0);
}
