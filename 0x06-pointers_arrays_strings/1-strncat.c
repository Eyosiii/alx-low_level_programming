#include "main.h"

/**
 * _strncat - appends src to the dest
 * @dest: string one
 * @src: another string
 * @n: largest number of bytes to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (j < n && (src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
