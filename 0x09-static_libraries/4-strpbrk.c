#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  A function that searches a string for any of a set of bytes.
 * @s: An input string
 * @accept: An input character with to locate into string s
 * Return:  A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
