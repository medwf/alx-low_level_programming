#include "main.h"
/**
 * print_last_digit - print last digit of a number.
 *
 *@l: number.
 *
 *Return: last digit.
 */
int print_last_digit(int l)
{
	int last = l % 10;

	if (l < 0)
		last *= -1;
	_putchar(last + 48);
	return (last);
}
