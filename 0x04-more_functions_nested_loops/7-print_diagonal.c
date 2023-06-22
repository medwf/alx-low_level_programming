#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n:  is the number of times the character \.
 * Return: No return.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < n ; b++)
			{
				if (a - b > 0)
					_putchar(' ');
				if (a - b == 0)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
