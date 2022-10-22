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

	while (i >= 48 && i < 58)
	{
		if (i < 0)
		{
			j = i * (-1);
			_putchar (j);
		}
		else
		_putchar (i);
	}
	return (0);
}
