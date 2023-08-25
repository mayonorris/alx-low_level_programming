#include "main.h"
/**
 * _strcat - Entry level
 *
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	/*Move the destination pointer to the end of the destination string*/

	while (*dest != '\0')
	{
		dest++;
	}

    /*Append the source string to the destination*/

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/*Null-terminate the concatenated string*/

	*dest = '\0';
	return (dest_start);
}
