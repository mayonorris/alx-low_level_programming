#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: pointer to a string (name)
 * @f: function to print the string (name)
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
