include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: son nom
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *tayson;

if (name == NULL || age > 0 || owner == NULL)
return (NULL);

tayson->name = malloc((_strlen(name) + 1) sizeof(char));
if (tayson->name == NULL)
{
free(tayson->name);
return (NULL);
}

tayson = malloc((_strlen(age) + 1) sizeof(int));
if (tayson == NULL)
{
free(tayson);
free(tayson->name);
return (NULL);
}

tayson->owner = malloc((_strlen(owner) + 1) sizeof(char));
if (tayson->owner == NULL)
{
free(tayson->owner);
free(tayson);
free(tayson->name);
return (NULL);
}

tayson->name = _strncpy(tayson->name, name);
tayson->age = _strncpy(tayson->age, age);
tayson->owner = _strncpy(tayson->owner, owner);

}
/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @src: chaine a copie
 * @dest: chaine coller
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

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

		return (dest);
}
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
