#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strcpy - copies a string
 * Description: copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns length of str
 * Description: returns length of str
 * @str: string to get length from
 * Return: length of str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * new_dog - creates a new dog variable
 * Description: creates a new dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dawg->name == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}
	dawg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dawg->owner == NULL)
	{
		free(dawg->name);
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}

	dawg->name = _strcpy(dawg->name, name);
	dawg->age = age;
	dawg->owner = _strcpy(dawg->owner, owner);

	return (dawg);
}
