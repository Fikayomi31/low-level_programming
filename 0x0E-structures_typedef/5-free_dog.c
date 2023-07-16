#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free memory for dog
 * @d: the typedef to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}

