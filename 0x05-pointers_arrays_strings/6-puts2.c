#include "main.h"

/**
 * puts2 - prints one in every other character
 * @str: string used
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < i; j = j + 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
