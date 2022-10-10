#include <stdio.h>
#include "dog.h"

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
	struct dog *d;

	d = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return dog;
}

