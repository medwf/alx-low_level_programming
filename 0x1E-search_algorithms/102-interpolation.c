#include "search_algos.h"

/**
 * recrv - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @low: the first index of elements in bloc
 * @high: the last index in bloc
 * Return: first index where value is located, or -1
*/
int recrv(int *array, size_t low, size_t high, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));

	if ((low >= high) || (pos > high))
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
	{
		return (recrv(array, low, pos - 1, value));
	}
	else
	{
		return (recrv(array, pos + 1, high, value));
	}
}

/**
 * interpolation_search -  a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @size: s the number of elements in array
 * Return: first index where value is located, or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (recrv(array, 0, size - 1, value));
	return (-1);
}
