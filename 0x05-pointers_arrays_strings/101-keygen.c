#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8 /* Define the desired password length*/

char generate_random_char() 
{
	return 'a' + rand() % 26; /*Generate a random lowercase letter*/
}

int main(void) 
{
	srand(time(NULL)); /*Seed the random number generator*/
	printf("Generated Password: ");

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		printf("%c", generate_random_char());
	}
	printf("\n");
	return (0);
}

