#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of array.
 * @size: the number of element an array.
 * @value: the value to search for.
 * Return: the first index where value is located,
 * otherwise -1.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step = 0;

	if (array && size > 0)
	{
		while ((step < size) && (array[step] < value))
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			prev = step;
			step += (size_t)sqrt(size);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
		while ((prev < size) && prev <= step)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
				return (prev);
			prev++;
		}
	}
	return (-1);
}
