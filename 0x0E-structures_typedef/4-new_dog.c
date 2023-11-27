#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog and returns pointer
 * to it
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	
	p->name = strdup(name);
	p->age = age;
	p->owner = strdup(owner);
	return (p);
}
