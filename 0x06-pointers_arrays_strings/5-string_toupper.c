#include "main.h"
/**
 * string_toupper - Entry level
 *@str: an input(string)
 *Return: a pointer
 */
char *string_toupper(char *str)
{
	char *original = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
	str++;
	}
	return (original);
}
