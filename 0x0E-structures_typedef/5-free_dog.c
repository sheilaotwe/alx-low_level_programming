#include <stdlib.h>
#include "dog.h"

/**
 * free_dog: Function that free dogs
 * @d: array or dog to free
 * Desc: free memory for struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
