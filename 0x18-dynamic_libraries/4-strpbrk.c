#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *@s: pr to string.
 *@accept: pr to string.
 *Return: return (s).
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0 ; *(accept + a) ; a++)
		{
			if (*s == *(accept + a))
				return (s);
		}
		s++;
	}
	return (0);
}
