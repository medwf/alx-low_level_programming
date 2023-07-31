#include "lists.h"

/**
 * add_nodeint - Realease the memory allocated for a list
 * @n: data for knew node.
 * @head: A pointer to the first node of the list to free
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node = NULL;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	add_node->next = *head;
	*head = add_node;

	return (*head);
}
