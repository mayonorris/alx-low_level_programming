
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - A function that allocates memory for an array
 * using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	/*Check for zero nmemb or size*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*Allocate memory for the array*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*Set the memory to zero*/
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
