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
	char *s1;
	char *s2;

	s1 = strdup(name);
	s2 = strdup(owner);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = s1;
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = s2;
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
