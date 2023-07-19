#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 *@array: pointer to arrays.
 *@size: size of arrays.
 *@cmp: pointers to function.
 *Return: -1, 0, 1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int is_int = 0, i = 0;

	if (size <= 0 || array == NULL)
		return (-1);

	while (i < size)
	{
		is_int = cmp(array[++i]);
		if (is_int != 0)
			return (i);

	}
	return (-1);
}
