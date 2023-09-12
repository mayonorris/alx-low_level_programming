#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

