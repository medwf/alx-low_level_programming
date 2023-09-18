#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: integer var
 *
 * Return: to 1 if it is alpha, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
