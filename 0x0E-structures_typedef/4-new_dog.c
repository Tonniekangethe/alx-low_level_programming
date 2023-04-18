#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - pointer to the new struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new string dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x = 0 ; name[x] ; x++)
	{
		x++;
	}
	dog->name = malloc(sizeof(char) * (x));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < x ; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (y = 0 ; owner[y] ; y++)
		y++;
	dog->owner = malloc(sizeof(char) * (y));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0 ; i < y ; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
