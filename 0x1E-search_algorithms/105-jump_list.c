#include "search_algos.h"

/**
 * jump_list -  a function that searches for a value in a sorted
 * list of integers using the Jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list.
 * @value: the value sreach for.
 * Return:  a pointer to the first node where value is located, -1
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *Bstep = list, *Astep = list;
	size_t jumb/*, outOfRange*/;

	if (list && size)
	{
		while (Astep && Astep->n < value)
		{
			Bstep = Astep;
			for (jumb = 0; Astep->next && jumb < sqrt(size); jumb++)
				Astep = Astep->next;
			printf("Value checked at index [%ld] = [%d]\n", Astep->index, Astep->n);
			if (!Astep->next)
				break;
			if (!Bstep)
				return (NULL);
		}
		if (Astep && Bstep)
			printf("Value found between indexes [%ld] and [%ld]\n",
			Bstep->index, Astep->index);
		while (Bstep && Bstep->n < value)
		{
			printf("Value checked at index [%ld] = [%d]\n", Bstep->index, Bstep->n);
			if (!Bstep->next)
				return (NULL);
			Bstep = Bstep->next;
		}

		if (Bstep->n == value)
		{
			printf("Value checked at index [%ld] = [%d]\n", Bstep->index, Bstep->n);
			return (Bstep);
		}
	}
	return (NULL);
}
