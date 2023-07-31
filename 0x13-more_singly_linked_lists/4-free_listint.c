#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer to linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *free_node = NULL;

	free_node = head;
	while (free_node->next)
	{
		free_node = free_node->next;
		free(head);
		head = free_node;
	}
	free(free_node);
}
