#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer to linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *free_node = NULL;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
