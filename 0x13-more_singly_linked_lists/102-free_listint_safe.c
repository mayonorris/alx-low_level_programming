#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (!h || !*h)
		return (count);

	current = *h;
	*h = NULL;

	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp <= current)
			break;
	}

	return (count);
}

