#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum num of coins
 *              to make change for an amount of money.
 * @argc: the number of arguments.
 * @argv: an array of string.
 * Return: more than 1 arg (1) and print Error; arg = 1 print 0 else (0).
 */
int main(int argc, char *argv[])
{
	int i, cents, sum = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 ; i++)
	{
		sum += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", sum);
	return (0);
}
