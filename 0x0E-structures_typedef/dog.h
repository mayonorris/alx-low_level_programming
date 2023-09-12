#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for a dog
 * @name: Name of the dog
 * @age: Age
 * @owner: The owner of the dog
 * Description: Main propreties of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
