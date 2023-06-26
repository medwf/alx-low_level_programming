#include "main.h"
/**
 * puts2 -  prints every other character of a string.
 *@str: pointer to string.
 *Return: No return.
 */
void puts2(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		if (size % 2 == 0)
			_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}
