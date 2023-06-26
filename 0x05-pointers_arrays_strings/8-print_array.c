#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers.
*@a: pointer in arrays
*@n: size.
*Return: No return.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
			printf(", ");
	}
	printf("\n");
}
