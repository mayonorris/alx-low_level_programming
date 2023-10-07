#include "main.h"
#include <stdio.h>

/**
 * main - Entry level
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success.
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
