#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: An input string
 * @accept: An input character with to locate into string s
 * Return: returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
