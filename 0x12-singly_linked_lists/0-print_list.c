#include "lists.h"

/**
 * print_list - function that prints in the list
 *
 * @h: pointer to a struct
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("0\n");
	if (h != NULL)
	{
		printf("%s\n", (h->str));
		h = h->next;
	}
	return (0);
}
