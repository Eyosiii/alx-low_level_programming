#include <stdio.h>

/*
 * main-Prints all lower and upper case alphabets
 *
 * Description: Shows all alphabets
 *
 * Return: 0
 */

int main(void)
{
	char c;

	while (c >= 'a' && c <= 'z')
	{
		putchar(c);
	}
	while (c >= 'A' && c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
