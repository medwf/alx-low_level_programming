#include "main.h"

/**
 * _abs - absolute value of an integer.
 *
 *@a: var integer number.
 *
 * Return: value
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
