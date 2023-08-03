#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number in long integer.
 * @index: is the index, starting from 0 of the bit.
 * Return: index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
