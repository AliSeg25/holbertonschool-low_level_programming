#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * print_dog - Write a function that prints a struct dog
  * @d: imprimer
  */
void print_dog(struct dog *d)
{
	if (d == NUll)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("nil\n");
	}
	else
		printf("Name : %s\n", d->name);
	printf("Age: %f\n", age);

	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
		printf("Owner: %s\n", d->owner);
}
