#include <stdio.h>

/*
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch != 'd');
	
	
	putchar('\n');		
	return (0);
}
