#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 *@a: pr to arrays.
 *@size: size of arrays.
 */
void print_diagsums(int *a, int size)
{
	int i, S = 0, K = 0;

	for (i = 0; i < size; i++)
	{
		S += a[(size + 1) * i];
		K += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", S, K);
}
