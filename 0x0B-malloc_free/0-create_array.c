#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                   and initializes it with a specific char.
 * @size: size of arrays.
 * @c: apecific char.
 * Return: NULL if size is 0 and if arrays is fails, or (arrays)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
