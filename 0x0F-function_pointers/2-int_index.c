#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp a function that compares the elements throw array.
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
