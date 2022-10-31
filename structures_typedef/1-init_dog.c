#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - configuer le chie
 * @d: pointeur chien
 * @name: le nom du chien
 * @age: age chien
 * @owner: propriaitaire chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
