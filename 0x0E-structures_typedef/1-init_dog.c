#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  initialize a type of struct dog
 * @d: pointer to the struct dog
 * @name: initialized name
 * @age: initialized age
 * @owner: initialized owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
