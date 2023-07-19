#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter on
 *                             each element of an array.
 *@array: pointer to array.
 *@size: size of array.
 *@action: pointers to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
