#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to the dog_t struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
