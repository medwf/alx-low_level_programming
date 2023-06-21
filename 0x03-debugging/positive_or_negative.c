#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *@n: return number.
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	/*my code*/
	if (n >= 0)
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else
			printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
}
