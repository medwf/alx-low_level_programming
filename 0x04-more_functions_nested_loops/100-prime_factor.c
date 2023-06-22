#include <stdio.h>
void prime_factor(long int div, long int last_num);

/**
 * main - Entry point
 *
 *Description: prints the largest prime factor of the number 612852475143.
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int last_num = 612852475143;
	long int div = 2;

	prime_factor(div, last_num);
	return (0);
}
/**
 * prime_factor -  prints the largest prime factor of the number 612852475143.
 *
 *@div: divis
 *@last_num : var number
 *Return: No return.
 */
void prime_factor(long int div, long int last_num)
{
	while (last_num != 1)
	{
		if (last_num % div == 0)
		{
			last_num /= div;
		}
		else
		{
			div++;
		}
	}
	printf("%li\n", div);
}
