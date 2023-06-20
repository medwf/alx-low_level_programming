#include "main.h"
/**
 * print_alphabet - print the alphabet, in lowercase.
 *
 * Return: NO return
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
