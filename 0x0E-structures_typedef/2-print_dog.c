#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("name:%s\n", d->name);
	if (d->age == '\0')
		d->age = 0;
	else
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("owner: %s\n", d->owner);
}
