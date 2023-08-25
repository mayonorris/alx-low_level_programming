#include "main.h"
/**
 * reverse_array - Entry level
 * @a: an arry of integers
 * @n: number of elements in a
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/*Swap the elements at positions start and end*/
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
