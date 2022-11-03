#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: main string to be examined
 * @needle: suc-string to be searched in main string
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
