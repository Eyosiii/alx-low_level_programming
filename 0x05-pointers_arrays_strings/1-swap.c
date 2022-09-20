#include "main.h"

/**
 * swap_int - swaps value of integers
 *@a: integer
 *@b: another integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
