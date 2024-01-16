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
			printf("Value checked array[%ld] = [%d]\n", step, array[step]);
			prev = step;
			step += sqrt(size);
			if (prev >= size)
				return (-1);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
		while ((prev < size) && (array[prev] < value))
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			if (prev == size)
				return (-1);
			prev++;
		}
		if (array[prev] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			return (prev);
		}
	}
	return (-1);
}
