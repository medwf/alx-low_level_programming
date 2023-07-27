#include "lists.h"

/**
 * add_node - a function that adds a new node
 *                    at the beginning of a list_t list.
 * @head: poiner that point to the first element in struct.
 * @str: pointer to string.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
