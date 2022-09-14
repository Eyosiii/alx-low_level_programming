#include "main.h"

/**
 * _isalpha - Shows if its alpha
 * @c: is a character which will be used
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
