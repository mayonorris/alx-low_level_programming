#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - A function that initialize a variable of
 * type struct dog.
 * @d: struct that need to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
