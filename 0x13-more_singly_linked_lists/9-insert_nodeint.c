#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer of the first element on list.
  * @idx: index of list where the new node should be added.
  * @n: integer to be inserted.
  *
  * Return: address of the new node or NULL if it fails.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;
	unsigned int count;

	tmp = *head;

	count = 0;
	while (tmp && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		if (count + 1 == idx)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
	}
	free(newNode);
	return (NULL);
}
