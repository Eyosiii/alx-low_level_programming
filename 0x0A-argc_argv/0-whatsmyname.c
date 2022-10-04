#include <stdio.h>
#include <stdlib.h>

/**
 * main - shows which strings used to compile
 *@argc: string counter
 *@argv: strings used for compilation
 *
 * Return: argv
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
