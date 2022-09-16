#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers
 *
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = 1; n2 <= 9; n2++)
		{
			if (n1 < n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				if (n1 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
