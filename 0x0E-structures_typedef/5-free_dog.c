#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees heap memory
 * @d: pointer to d
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
