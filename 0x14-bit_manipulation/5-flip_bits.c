#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *       you would need to flip to get from one number to another.
 *@n: first number.
 *@m: second number>
 *Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			count += 1;
		n >>= 1;
	}
	return (count);
}
