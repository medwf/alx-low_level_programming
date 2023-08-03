#include "main.h"

/**
*get_endianness - Write a function that checks the endianness.
*Return: Returns: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	int random_number = 2;

	if (random_number & 1)
		return (0);
	else
		return (1);
}
