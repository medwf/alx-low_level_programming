#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth
 *                 node of a dlistint_t linked list.
 * @head: a pointer to liked list.
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *move_node = NULL;

	move_node = head;
	while (index)
	{
		if (!move_node)
			return (NULL);
		move_node = move_node->next;
		index--;
	}
	return (move_node);
}
