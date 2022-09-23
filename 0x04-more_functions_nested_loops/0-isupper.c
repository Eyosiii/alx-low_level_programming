#include "main.h"

/**
 * _isupper - shows if the letters are upper or not
 *@c: character used to check
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar('1');
	else
		_putchar ('0');
	return (0);
}
