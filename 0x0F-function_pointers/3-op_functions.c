#include "3-calc.h"

/**
 * op_add - (+) : addition
 *@a: first number.
 *@b: secound number.
 *Return: (a op b);
 */
int op_add(int a, int b) {return (a + b); }

/**
 * op_sub - (-) : subtraction
 *@a: first number.
 *@b: secound number.
 *Return: (a op b);
 */
int op_sub(int a, int b) {return (a - b); }

/**
 * op_mul - (*) : multiplication
 *@a: first number.
 *@b: secound number.
 *Return: (a op b);
 */
int op_mul(int a, int b) {return (a * b); }

/**
 * op_div - (/) : division
 *@a: first number.
 *@b: secound number.
 *Return: (a op b);
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - (%) : modulo
 *@a: first number.
 *@b: secound number.
 *Return: (a op b);
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
