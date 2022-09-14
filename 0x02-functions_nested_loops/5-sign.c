#include "main.h"

/**
 * print_sign - it shows wheather itspositive or negative
 * @n: character used for numbers
 *
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
