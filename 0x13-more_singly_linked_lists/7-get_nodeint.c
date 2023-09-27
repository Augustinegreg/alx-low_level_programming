#include "lists.h"

/**
 * get_nodeint_at_index - will return node at certain index in linked list
 * @head: the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: the pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a = a + 1;
	}

	return (tmp ? tmp : NULL);
}
