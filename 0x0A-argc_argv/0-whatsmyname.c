#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *@argc: The number of arguments.
 *@argv: an array of pointers to the arguments.
 *Return: Always to 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
