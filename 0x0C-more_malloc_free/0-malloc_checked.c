#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: int for allocat space of memory.
 * Return: pointers; or exit(98) if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
