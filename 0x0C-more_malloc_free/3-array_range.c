#include <stdlib.h>

/**
 *array_range - a function that creates an array of integers.
 *@min: minimun value.
 *@max: maximum value
 *Return: to NULL if min > max or malloc fails; otherwase to ptr.
 */
int *array_range(int min, int max)
{
	int *ar, mid = 0, fre;

	if (min > max)
		return (NULL);

	mid = max - min + 1;
	ar = malloc(sizeof(int) * (mid));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (fre = 0 ; fre < mid && min <= max ; fre++)
		ar[fre] = min++;

	return (ar);
}
