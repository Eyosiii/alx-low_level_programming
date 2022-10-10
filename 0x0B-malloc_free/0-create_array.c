#include "main.h"
#include <stddef.h>
#include <stdlib.h>
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
	char *x;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size * sizeof(char));
	if (x == 0)
	{
		return (NULL);
	}
	if (x > 0)
	{
		for (i = 0; i < size; c++)
		_putchar (c);
	}
	return (x);
}
