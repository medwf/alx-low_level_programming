#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
