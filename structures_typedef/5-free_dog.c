#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: the structure to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
