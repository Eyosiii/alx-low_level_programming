#include "main.h"

void print_array(int *a, int n)

/**
 * print_array - prints all array
 * @n: number of elements
 * @a: array
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, a[i]");

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
