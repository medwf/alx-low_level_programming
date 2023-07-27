#include "lists.h"

/**
* print_list - a function that prints all the elements of a list_t list.
*@h: pointer to the fist element in linked list
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
			num_node++;
			h = h->next;
		}
			printf("[%u] %s\n", h->len, h->str);
			num_node++;
			h = h->next;
	}
	return (num_node);
}
