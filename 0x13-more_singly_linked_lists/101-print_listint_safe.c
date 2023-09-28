#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmpNode = NULL;
	const listint_t *lnkdNode = NULL;
	size_t a = 0;
	size_t newNode;

	tmpNode = head;
	while (tmpNode)
	{
		printf("[%p] %d\n", (void *)tmpNode, tmpNode->n);
		a = a + 1;
		tmpNode = tmpNode->next;
		lnkdNode = head;
		newNode = 0;
		while (newNode < a)
		{
			if (tmpNode == lnkdNode)
			{
				printf("-> [%p] %d\n", (void *)tmpNode, tmpNode->n);
				return (a);
			}
			lnkdNode = lnkdNode->next;
			newNode = newNode + 1;
		}
		if (!head)
			exit(98);
	}
	return (a);
}
