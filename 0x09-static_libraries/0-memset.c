#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: the address of memory to print.
 * @b: the address of '0x01'to print.
 * @n: the size of the memory to print.
 * Return: return (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
