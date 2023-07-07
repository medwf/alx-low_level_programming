#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplies two numbers.
 *@argc: The number of arguments.
 *@argv: an array of pointers to the arguments.
 *Return: Always to 0.
 */
int main(int argc, char *argv[])
{
	int number;

	if (argc == 3)
	{
		number = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", number);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
