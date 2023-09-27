#include "lists.h"
/**
  * delete_nodeint_at_index - function deletes the node at index.
  * 
  * @head: pointer to pointer of first elemnt of list.
  * @index: the index of node to be deleted.
  *
  * Return: 1 if successful, -1 if it fails.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *delNode, *tmp;

	tmp = *head;
	count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && count < index - 1)
	{
		tmp = tmp->next;
		count = count + 1;
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
	}

	delNode = tmp->next->next;
	free(tmp->next);
	tmp->next = delNode;

	return (1);
}
