#include "main.h"
/**
 * _strncat - Entry level
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: maximum nuber of bytes
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	/*Move the destination pointer to the end of the destination string*/

	while (*dest != '\0')
	{
		dest++;
	}

/* Append up to n characters from the source string to the destination*/

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/*Null-terminate the concatenated string*/
	*dest = '\0';
	return (dest_start);
}
