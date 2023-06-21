#include <stdio.h>
/**
 * main - Entry point.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, num;

	sum = 0;
	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
