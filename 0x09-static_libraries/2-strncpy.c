#include "main.h"
/**
 * _strncpy - Entry level
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: an input integer
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

/*Copy up to n characters from the source string to the destination*/

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

/*Pad the destination with null characters if n is not reached*/

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
