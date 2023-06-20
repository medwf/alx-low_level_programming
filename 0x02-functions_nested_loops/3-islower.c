#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: integer variable return 0 or 1
 *
 * Return: return 1 of c is lowercase, else return to 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
