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

	x = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; c++)
		_putchar (c);
	}
	return (x);
}
