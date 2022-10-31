#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
/**
  * struct dog - présentation du chien
  * @name : nom du chien
  * @age : âge du chien
  * @owner: proprietaire
*/
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	} dog_t;
/**
 * protype - les prototype de fonctio
 * @d : pointeur chien
 */
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H_INCLUDED*/
