#include "search_algos.h"
#include "1-binary.c"

/**
 * advanced_binary - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element.
 * @size: the number of element in array.
 * @value: the value to search for.
 * Return: the index where value is located, Otherwise -1.
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (recursive(array, value, 0, size - 1));
	return (-1);
}
