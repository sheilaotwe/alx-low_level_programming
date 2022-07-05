#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: array or dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Desc: struct for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
