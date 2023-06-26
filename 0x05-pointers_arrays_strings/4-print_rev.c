#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
*@s: pointer to string
*Return: No return.
*/
void print_rev(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
		size++;
	while (size != 0)
	{
		size--;
		_putchar(*(s + size));
	}
	_putchar('\n');
}
