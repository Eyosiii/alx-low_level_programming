#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: shows alphabet
 *
 * Return: 0
 **/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
