#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * @head: void pointer.
 * @str: pointer to string.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head = NULL, *helper = *head;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = NULL;

	if (!*head)
		*head = new_head;
	else
	{
		while (helper->next)
			helper = helper->next;
		helper->next = new_head;
	}
	return (*head);
}
