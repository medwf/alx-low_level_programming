#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to head.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
