#include "main.h"
#include <stddef.h>

/**
 * *create_array - prints the array
 *
 *@c: char used
 *@size: array size
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; c++)
		_putchar (c);
	}
	return (NULL);
}
