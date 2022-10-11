#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated
 *
 * @dog_t: variable used
 * @d: another variable
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
