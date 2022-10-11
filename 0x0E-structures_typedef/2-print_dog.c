#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the structure
 *
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct d));
	if (d->name || d->age || d->owner == NULL)
		printf("nil\n");
	if (d = NULL)
		break;
	printf("%s\n, d->name");
	printf("%f\n, d->age");
	printf("%s\n, d->owner");
}
