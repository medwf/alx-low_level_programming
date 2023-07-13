#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array, using malloc.
*@nmemb: number of element calloc.
*@size: number of size calloc
*Return: if element or size = 0 return NULL; otherwase to pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0, bte = 0;

	bte = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(bte);
	if (p == NULL)
	{
		return (NULL);
	}

	while (i < bte)
	{
		p[i++] = '0';
	}
	return (p);
}
