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
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
		{
			(*head) = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		else
		{
			free((*head));
			(*head) = NULL;
		}
		return (1);
	}
	temp = (*head);
	for (i = 0; temp->next; temp = temp->next, i++)
	{
		if (i == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
	}
	if (index == i)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
