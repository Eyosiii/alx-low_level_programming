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
		return (1);
	else
		return (0);
}
