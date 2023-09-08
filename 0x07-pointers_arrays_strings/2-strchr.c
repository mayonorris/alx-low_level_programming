#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that locates a character in a string.
 * @s: an input string to search
 * @c: an input character to locate into string s
 * Return: returns pointer or NULL
 *
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
