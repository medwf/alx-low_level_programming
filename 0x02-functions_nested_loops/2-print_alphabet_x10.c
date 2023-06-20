#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet, in lowercase.
 *
 * Return: NO return
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int i = 0;

	while (i < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
		x = 'a';/*to reset value of x*/
	}
}
