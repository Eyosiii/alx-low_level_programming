#include "main.h"

/*
 *_abs - shows absolute value
 * Description: Shows the absolute value of integers
 *
 * Return: 0
 */

int _abs(int i)
{
	int j;

	if (i < 0)
	{
		j = i * (-1);
		_putchar (j);
	}
	else
	_putchar (i);
	return (0);
}
