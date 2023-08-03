#include "main.h"

/**
 *binary_to_uint - a function that converts a binary number to an unsigned int.
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0, len = 0;

	if (!b)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		conv_num = conv_num << 1;
		if (b[len++] & 1)
			conv_num += 1;
	}
	return (conv_num);
}
