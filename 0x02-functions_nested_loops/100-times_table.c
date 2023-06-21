#include "main.h"
/**
 * print_times_table - prints the n print times table, starting with 0
 *
 * Return: No return.
 */
void print_times_table(int n)
{
	int line, coluns;

	for (line = 0 ; line <= n ; line++)
	{
		if (n > 15 || n < 0)
			continue;
		_putchar(48);
		for (coluns = 1 ; coluns <= n ; coluns++)
		{
			_putchar(',');
			_putchar(' ');

			if ((line * coluns) > 99)
				_putchar((line * coluns) / 100 + 48);
			else if ((line * coluns) > 9)
				_putchar((line * coluns) / 10 + 48);
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((line * coluns) % 10 + 48);
		}
		_putchar('\n');
	}
}
