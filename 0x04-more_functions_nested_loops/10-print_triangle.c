#include "main.h"

/**
 * print_triangle - prints a triangle.
 *@size: size of the triangle.
 *Return: No return.
 */
void print_triangle(int size)
{
	int line, coluns;

	if (size > 0)
	{
		for (line = 0 ; line < size ; line++)
		{
			for (coluns = 0 ; coluns <= size ; coluns++)
			{
				if ((line + coluns) < (size - 1))
					_putchar(' ');
				if ((line + coluns) >= size && line < size && coluns <= size)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
