#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: char
 * @age: float
 * @owner: char
 * Return: type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->name[strlen(name)] = '\0';
	d->age = age;
	strcpy(d->owner, owner);
	d->owner[strlen(owner)] = '\0';
	return (d);
}
