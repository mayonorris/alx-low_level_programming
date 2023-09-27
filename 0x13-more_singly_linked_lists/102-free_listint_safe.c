#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		next = current->next;

		/* Set the next pointer to NULL before freeing */
		current->next = NULL;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next;

		/* If we've come back to a node, it's a loop, break */
		if (current == *h)
			break;
	}

	/* Set head to NULL */
	*h = NULL;

	return (count);
}

