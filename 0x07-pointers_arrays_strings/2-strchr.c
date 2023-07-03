#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: pr to string.
 * @c: char in the string,
 * Return: (s) or (0).
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
