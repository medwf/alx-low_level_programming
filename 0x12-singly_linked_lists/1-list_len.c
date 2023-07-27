#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: pointer to the first element in nodes.
 * Return: rhe number of elements in lined list.
 */

size_t list_len(const list_t *h)
{
	size_t num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}
	return (num_element);
}
