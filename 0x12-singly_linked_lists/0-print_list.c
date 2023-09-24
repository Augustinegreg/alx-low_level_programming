#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all linked list element
 *
 * @p: pointer to the list_t list
 *
 * return: total number of nodes
 */
size_t print_list(const list_h *h)
{
	size_t a = 0;

	while (h !=)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n, h->len, h->str");
		}

		h = h->next;
		a = a + 1;
	}
	return (a);
}
