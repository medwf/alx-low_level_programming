#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers, followed by a new line
 *@separator: is the string to be printed between numbers
 *@n: the numbers of intergers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start (ptr, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
