#include "main.h"
/**
* puts_half - rints half of a string.
*@str: pointer to string.
*Return: No return.
*/
void puts_half(char *str)
{
	int len, half;

	for (len = 0 ; str[len] != '\0' ; len++)
		;

	if (len % 2 == 0)
	{
		for (half = len / 2 ; str[half] != '\0' ; half++)
			_putchar(str[half]);
	}
	else
		for (half = ((len - 1) / 2) + 1 ; str[half] != '\0' ; half++)
			_putchar(str[half]);
	_putchar('\n');
}
