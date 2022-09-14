#include "main.h"

/**
 *_islower - shows lower case alphabets
 *@c: is a character used
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
