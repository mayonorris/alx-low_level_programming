#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted arra
 * of integers using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *Otherwise, the first index where the value is locate.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, x;

	if (array == NULL)
		return (-1);

	for (l = 0, x = size - 1; x >= l;)
	{
		i = l + (((double)(x - l) / (array[x] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			x = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
