#include "variadic_functions.h"
/**
 *print_all - Write a function that prints anything.
 *@format: is a list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	int i = 0, len = 0, print_int;
	char print_char, *print_str, *separator = "";
	float print_float;
	va_list p;

	len = strlen(format);
	va_start(p, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				print_char = va_arg(p, int);
				printf("%s%c", separator, print_char);
				break;
			case 'i':
				print_int = va_arg(p, int);
				printf("%s%d", separator, print_int);
				break;
			case 'f':
				print_float = va_arg(p, double);
				printf("%s%f", separator, print_float);
				break;
			case 's':
				print_str = va_arg(p, char *);

				if (print_str)
					printf("%s%s", separator, print_str);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(p);
}
