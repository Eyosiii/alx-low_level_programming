#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: shows alphabets and numbers
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	putchar(c);
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
