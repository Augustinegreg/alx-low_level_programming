#include "lists.h"

/**
 * free_listsint2 - function that frees a linked list
 *
 * @head: a pointer to the linked linked list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head) -> next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
