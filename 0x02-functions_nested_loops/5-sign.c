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
		return (1);
		print_sign('+');
	}
	else if (n == 0)
	{
		return (0);
		print_sign('0');
	}
	else(n < 0)
	{
		return (-1);
		print_sign('-');
	}
}
