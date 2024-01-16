#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search -  a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: is pointer to the last element in array.
 * @size: the number of element in array.
 * @value: the value to search for.
 * Return: first index where value is located, or -1.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1;

	if (array && size > 0)
	{
		if (array[0] == value)
			return (0);
		while ((index < size) && array[index] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			index *= 2;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", index / 2,
		(index >= (size - 1)) ? (size - 1) : (index));
		return (recursive(array, value, index / 2,
		((index >= (size - 1)) ? (size - 1) : (index))));
	}
	return (-1);
}
