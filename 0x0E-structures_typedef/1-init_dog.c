#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialises struct dog in
 * dog.h header file
 * @d: Pointer to varible of type struct dog
 * @name: Dogs name
 * @age: Dogs Age
 * @owner: Dogs Owner
 * Return: Always (0) on Success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = (char *)name;
	d->age = age;
	d->owner = (char *)owner;
}
