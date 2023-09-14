#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n).
 * @head: pointer to the first node.
 * Return: if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *move_node = NULL;
	int sum = 0;

	if (!head)
		return (0);
	move_node = head;
	while (move_node)
	{
		sum += move_node->n;
		move_node = move_node->next;
	}
	return (sum);
}
