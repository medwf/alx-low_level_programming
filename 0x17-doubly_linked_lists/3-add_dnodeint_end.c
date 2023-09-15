#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 *                        at the end of a dlistint_t list.
 * @head: a pointer to linked lists.
 * @n: an integer for new linked list.
 * Return: the address of the new element,
 *           or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *last_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	last_node = *head;
	if (last_node)
	{
		while (last_node->next)
			last_node = last_node->next;
		new_node->prev = last_node, last_node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
