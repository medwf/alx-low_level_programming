#include "main.h"
int _sqr_root(int n, int i);

/**
 * _sqrt_recursion - main funct
 * @n: intrger
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqr_root(n, 1));
}

/**
 * _sqr_root - to find square root
 * @n: integer
 * @i: integer
 * Return: sqrt_root
 */
int _sqr_root(int n, int i)
{
	if (n < 0 || (i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (_sqr_root(n, i + 1));
}
