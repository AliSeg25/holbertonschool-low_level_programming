#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable
 * Return: (longueur)
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
		longueur++;
		s++;
	}

	return (longueur);
}
/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @src: chaine a copie
 * @dest: chaine coller
 * @n: combien a copier
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

		dest[i] = '\0';


		return (dest);
}
/**
 * new_dog - nouveau chien
 * Description: cree un chien
 * @name: nom du chien 
 * @age: age du chien
 * @owner: propriaitaire 
 * Return: ()
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tayson;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	tayson = malloc(sizeof(dog_t));
	if (tayson == NULL)
	{
		free(tayson);
		return (NULL);
	}

	tayson->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (tayson->name == NULL)
	{
		free(tayson->name);
		free(tayson);
		return (NULL);
	}
	tayson->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (tayson->owner == NULL)
	{
		free(tayson->name);
		free(tayson->owner);
		free(tayson);
		return (NULL);
	}

	tayson->name = _strcpy(tayson->name, name);
	tayson->age = age;
	tayson->owner = _strcpy(tayson->owner, owner);

	return (tayson);
}

