#include "main.h"

/**
 *_strlen - Counts the number of strings
 *@s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
