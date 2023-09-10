#include "main.h"
/**
 * _strcpy - Entry point
 * Description: a function that copies the string pointed to by
 * src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to destination
 * @src: pointer from source
 * Return: a pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* Null-terminate the destination string*/
	return (dest_start);
}
