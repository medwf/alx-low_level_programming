#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the first node.
 * Return: *head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before_node = NULL, *after_node = NULL;

	while (*head)
	{
		after_node = (*head)->next;
		(*head)->next = before_node;
		before_node = *head;
		*head = after_node;
	}
	*head = before_node;
	return (*head);
}
