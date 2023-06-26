#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 *@a: pointers to first int.
 *@b: pointers to second int.
 *Return: No return.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
