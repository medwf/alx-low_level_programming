#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node
 *                   at the beginning of a dlistint_t list.
 * @head: a pointer to linked list.
 * @n : an integer to new linked list
 * Return: head with new liked list or NULL (failed)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * add_dnodeint_end - a function that adds a new node
 *                        at the end of a dlistint_t list.
 * @head: a pointer to linked lists.
 * @n: an integer for new linked list.
 * Return: the address of the new element,
 *           or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
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
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
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
	return (NULL);
}
