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
	if (d->name == 0)
		printf("nil\n");
	if (d  == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
