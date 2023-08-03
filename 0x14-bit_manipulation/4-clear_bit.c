#include "main.h"

/**
* clear_bit -  a function that sets the value of a bit to 0 at a given index.
* @n: pointer to integer.
* @index: is the index, starting from 0 of the bit.
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_2 = 1;

	if (index > 64)
		return (-1);
	n_2 <<= index;
	*n &= ~n_2;
	return (1);
}
