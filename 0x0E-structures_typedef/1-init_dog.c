#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog structure
 *
 *@d: pointer to the struct
 *@name: dogs name
 *age: dogs age
 *owner: dogs owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

