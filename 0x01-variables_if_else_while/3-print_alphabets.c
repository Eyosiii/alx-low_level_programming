#include <stdio.h>

/*
 * main-Prints all lower and upper case alphabets
 *
 * Description: Shows all alphabets
 * @c: character used for variable
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
