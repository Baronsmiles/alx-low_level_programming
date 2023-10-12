#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function initializes a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return;
	}

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return;
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
}
