#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * print_dog - Write a function that prints a struct dog
  * @d: imprimer
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}

	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("Name : %s\n", d->name);
	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("Owner: %s\n", d->owner);
}
