#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguments
 * of our program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure.
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j,  index, total_length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)

			total_length++;

		total_length++;
	}
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}

