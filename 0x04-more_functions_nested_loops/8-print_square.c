#include "main.h"
/**
 * print_square -  prints a square .
 *@size: size of square.
 *Return: No return.
 */
void print_square(int size)
{
	int line, coluns;

	if (size > 0)
	{
		for (line = 0 ; line < size ; line++)
		{
			for (coluns = 0 ; coluns < size ; coluns++)
			{
				if (line < size || coluns < size)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
