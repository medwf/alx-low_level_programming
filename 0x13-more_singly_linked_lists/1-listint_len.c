#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 *                                     in a linked listint_t list.
 * @h: pointer to head.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}
	return (num_element);
}
