#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n).
 * @head: pointer to the first node.
 * Return: if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *move_node = NULL;
	int sum = 0;

	if (!head)
		return (0);
	move_node = head;
	while (move_node)
	{
		move_node = move_node->next;
		sum += move_node->n;
	}
	return (sum);
}
