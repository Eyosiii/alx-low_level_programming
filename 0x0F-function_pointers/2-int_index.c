#include "function_pointers.h"

/**
 * int_index - function which returns index of first element
 *
 * @array: array used
 * @size: no of elements
 * @cmp: comparing function
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
		{
			putchar(i);
		}
		if (x == 0)
		{
			return (-1);
		}
	}
	return (0);
}
