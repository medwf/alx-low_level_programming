#include "main.h"
/**
 * print_times_table - prints the n print times table, starting with 0
 *@n: multiplication number.
 * Return: No return.
 */
void print_times_table(int n)
{
	int line, coluns, mul;

	if (n >= 0 && n <= 15)
	{
		for (line = 0 ; line <= n ; line++)
		{
			_putchar(48);
			for (coluns = 1 ; coluns <= n ; coluns++)
			{
				_putchar(',');
				_putchar(' ');

				mul = line * coluns;

				if (mul <= 9)
					_putchar(' ');
				if (mul <= 99)
					_putchar(' ');
				if (mul > 99)
				{
					_putchar((mul / 100) + 48);
					_putchar((mul / 10) + 38);
				}
				else if (mul <= 99 && mul >= 10)
					_putchar((mul / 10) + 48);
				_putchar((line * coluns) % 10 + 48);
			}
			_putchar('\n');
		}
	}
}
