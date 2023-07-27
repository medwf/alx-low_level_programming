#include "lists.h"

/**
 * free_list -  a function that frees a list_t list
 * @head: pointer to stract.
 */

void free_list(list_t *head)
{
	list_t *helper = head;

	while (head)
	{
		helper = helper->next;
		free(head->str);
		free(head);
		head = helper;
	}
}
