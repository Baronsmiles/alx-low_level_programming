#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: pointer to struct dog to free
 *
 * Description: This function frees the memory allocated for the name,
 * owner strings, and the struct dog itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
