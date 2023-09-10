#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer for the first string
 * @s2: An input pointer for the second string
 * @n: an input integer
 * Return: A pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concatenated;

	/*Calculate the lengths of s1 and s2*/
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
/*Adjust n if it's greater or equal to the length of s2*/
	if (n >= len2)
		n = len2;
	/*Allocate memory for concatenated string*/
	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	/*Copy s1 to the new string*/
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	/*Append the first n characters of s2 to the new string*/
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	/*Add null terminator*/
	concatenated[i] = '\0';
	return (concatenated);
}

