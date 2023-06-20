#include "main.h"
/**
 * main - Entry point.
 *
 * Description: print "_putchar" using Function _putchar.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char pchr[] = "_putchar";
	int i;

	for (i = 0 ; i <= 7 ; i++)
	{
		_putchar(pchr[i]);
	}
	_putchar('\n');
	return (0);
}
