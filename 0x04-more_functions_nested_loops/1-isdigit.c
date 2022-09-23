#include "main.h"

/**
 * _isdigit - checks if its weather its a digit or not
 * @c: is a character used
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
