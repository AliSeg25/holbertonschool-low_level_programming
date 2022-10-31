#include"main.h"
#include "dog.h"
/**
 * init_dog -  configuration des information du chien.
 * @d: ces un poiteur sur le chien.
 * @name: nom chien.
 * @age: age chien.
 * @owner: propriaitaire chien
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
