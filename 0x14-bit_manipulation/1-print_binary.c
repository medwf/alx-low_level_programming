#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number.
* @n: number in integer.
*/
void print_binary(unsigned long int n)
{
	int count_bit = 0;
	unsigned long int second_n = n;

	while (second_n > 0)
	{
		second_n >>= 1;
		count_bit++;
	}
	count_bit--;
	do {
		_putchar((n >> count_bit-- & 1) + '0');
	} while (count_bit >= 0);
}
