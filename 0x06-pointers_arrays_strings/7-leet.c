#include "main.h"
/**
 * leet - Entry level
 * @str: An input string
 * Return: a string.
 */
char *leet(char *str)
{
	char *original = str;
	char *leet_characters = "aAeEoOtTlL";
	char *leet_replacements = "43071";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_characters[j] != '\0'; j++)
		{
			if (str[i] == leet_characters[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (original);
}
