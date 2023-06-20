#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: No return.
 */
void times_table(void)
{
	int line, coluns;

	for (line = 0 ; line < 10 ; line++)
	{
		_putchar(48);
		for (coluns = 1 ; coluns < 10 ; coluns++)
		{
			_putchar(',');
			_putchar(' ');
			if ((line * coluns) > 9)
				_putchar((line * coluns) / 10 + 48);
			else
				_putchar(' ');
			_putchar((line * coluns) % 10 + 48);
		}
		_putchar('\n');
	}
}
