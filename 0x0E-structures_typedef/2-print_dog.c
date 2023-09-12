#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog.
 * @d: struct that need to be initialized
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
