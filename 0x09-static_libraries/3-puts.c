#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 *@str: pointer to long string.
 *Return: NO return.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
