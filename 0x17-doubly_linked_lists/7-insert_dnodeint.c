#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 *                              a new node at a given position.
 * @h: pointer to the first node.
 * @idx: is the index of the list where the new node.
 * @n: data in interger.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nav, *new, *before;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	nav = *h;
	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		if (idx == 0)
			return (add_dnodeint(h, n));
		while (nav)
		{
			if (i == idx - 1)
				before = nav;

			if (i == idx)
			{
				new->next = nav;
				nav->prev = new;
				before->next = new;
				new->prev = before;
				return (new);
			}
			if (!nav->next && i + 1 == idx)
				return (add_dnodeint_end(h, n));
			nav = nav->next;
			i++;
		}
	}
	return (NULL);
}
