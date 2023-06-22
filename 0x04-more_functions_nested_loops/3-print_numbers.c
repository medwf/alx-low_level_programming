#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 *return: No return.
 */
void print_numbers(void)
{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
		_putchar(numbers);
	_putchar('\n');
}
