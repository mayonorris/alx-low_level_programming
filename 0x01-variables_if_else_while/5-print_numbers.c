#include <stdio.h>
/**
 *  main - Program that prins all sigle digits from 0 to 9.
 *
 *  Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
		printf("%d", n);
		n++;
	printf('\n');

	return (0);
