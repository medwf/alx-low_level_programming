#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 *                                at index index of a listint_t linked list.
 * @head: ponter to the first node in linked list.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, else if -1 it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *helper = NULL, *free_helper = NULL;
	unsigned int number_node = 0, free_idx = index - 1;

	helper = *head;
	if (!*head)
		return (-1);
	while (helper->next)
	{
		helper = helper->next;
		number_node++;
	}
	helper = *head;
	free_helper = *head;

	if (*head && index <= number_node)
	{
		if (!index)
			*head = (*head)->next;
		else
		{
			while (index--)
				free_helper = free_helper->next;

			while (free_idx--)
				helper = helper->next;

			if (free_helper->next)
				helper->next = helper->next->next;
			else
				helper->next = NULL;
		}
		free(free_helper);
		return (1);
	}
	return (-1);
}
