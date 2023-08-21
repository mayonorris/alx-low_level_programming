#include "main.h"

/**
 * rev_string - Entry point
 * Description: A function that reverse a string
 * followed by a new line.
 * @s: A string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char j;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		j = s[i];
		s[i++] = s[l];
		s[l] = j;
	}
}
