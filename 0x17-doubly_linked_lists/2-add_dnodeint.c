#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 *                   at the beginning of a dlistint_t list.
 * @head: a pointer to linked list.
 * @n : an integer to new linked list
 * Return: head with new liked list or NULL (failed)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
