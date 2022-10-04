#include <stdio.h>
#include <stdlib.h>

/**
 * @argc: the count used
 * @argv: strings used for compilation
 *
 * Return: argv
 */

int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
