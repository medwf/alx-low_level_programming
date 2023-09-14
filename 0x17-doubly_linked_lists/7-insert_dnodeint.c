#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 *                              a new node at a given position.
 * @head: pointer to the first node.
 * @idx: is the index of the list where the new node.
 * @n: data in interger.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp;
	unsigned int count = 0;

	temp = *head;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node && temp)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			(*head)->prev = new_node;
			*head = new_node;
		}
		else
		{
			if (temp->next)
			{
				temp->next->prev = new_node;
				new_node->next = temp->next;
			}
			new_node->prev = temp;
			temp->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
