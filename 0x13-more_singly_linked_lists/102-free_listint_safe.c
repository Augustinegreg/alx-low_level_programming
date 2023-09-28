#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	int b;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			a = a + 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			a = a + 1;
			break;
		}
	}

	*h = NULL;

	return (a);
}
