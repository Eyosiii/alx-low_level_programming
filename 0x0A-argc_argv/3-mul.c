#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the numbers after argument
 *
 *@argc: argument counter
 *@argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc == 3)
	{
		n1 = strtol(argv[1], NULL, 10);
		n2 = strtol(argv[2], NULL, 10);
		res = n2 * n1;
		printf("%d\n", res);
	}
	if (argc != 3)
	{
		printf("Error\n");
	}
	return (1);
}
