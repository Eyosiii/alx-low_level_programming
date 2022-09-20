#include "main.h"

/**
 * print_rev - print the string in reversed order
 *@s: string used
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
