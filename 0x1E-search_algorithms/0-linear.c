#include "search_algos.h"

/**
 * linear_search -  a function that searches for a value in an array
 *	of integers using the Linear search algorithm
 * @array: is a pointer to the first element od the array to Search.
 * @size: is the number of element in array.
 * @value: is the value to search for.
 * Return: -1 if not present or array not exist,
 * otherwise return value.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array)
	{
		while (index < size)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
			index++;
		}
	}
	return (-1);
}
