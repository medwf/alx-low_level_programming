#include "main.h"
int prime_fun(int n, int a);
int _sqrt(int n, int i);

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a
 *                          prime number, otherwise return 0.
 * @n: integer.
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_fun(n, 2));
}

/**
 * prime_fun - returns 1 if the input integer is a
 *                prime number, otherwise return 0.
 * @n: integer.
 * @a: integer.
 * Return: integer
 */
int prime_fun(int n, int a)
{
	if (n < 2 || n % a == 0)
		return (0);
	else if (a > _sqrt(n, 1))
		return (1);
	return (prime_fun(n, a + 1));
}
