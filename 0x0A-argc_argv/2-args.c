#include <stdio.h>

/**
 * main - prints all passed arguments
 *
 *@argc: counts arguments passed
 *@argv: prints arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
