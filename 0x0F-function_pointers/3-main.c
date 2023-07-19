#include "3-calc.h"

/**
 * main - Entry Point.
 *@argc: the number of arguments.
 *@argv: an array of argument.
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, num = 0;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];

	if (argv[2][1] != '\0' && (op != '+' && op != '-' &&
		op != '/' && op != '*' && op != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num = (get_op_func(argv[2]))(a, b);
	printf("%d\n", num);
	return (0);
}
