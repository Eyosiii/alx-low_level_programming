#include "main.h"

/*
 *_abs - shows absolute value
 * Description: Shows the absolute value of integers
 *
 * Return: 0
 */

int _abs(int i)
{
	while (i >= 48 && i < 58)
	{
		if (i < 0)
		{
			_putchar (-i);
		}
		else
		_putchar (i);
	}
	return (0);
}
