#include "main.h"
#include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 *@s: pr to string.
 *@accept: pr to string.
 *Return: return value imtegers.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, spn = 0;

	for (i = 0 ; i < sizeof(s) ; i++)
	{
		for (j = 0 ; j < sizeof(accept) ; j++)
		{
			if (s[i] == accept[j])
				spn++;
		}
	}
	return (spn);
}
