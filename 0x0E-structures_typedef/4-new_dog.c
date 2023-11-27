#include <stdlib.h>
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
	if (p->name == NULL)
                p->name = "(nil)";
        if (p->owner == NULL)
                p->owner = "(nill)";
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
