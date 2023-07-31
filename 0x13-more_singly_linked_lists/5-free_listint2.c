#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the first linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node = NULL;

	while (*head)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
	}
}
