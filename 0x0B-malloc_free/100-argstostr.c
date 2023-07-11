#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: the number of argument.
 * @av: an array of string.
 * Return: NULL if ac == 0 or av == NULL or fails, otherwase (av).
 */
char *argstostr(int ac, char **av)
{
	int i, j, ch, len = 0;
	char *av2;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
		len += strlen(av[i]) + 1;

	av2 = malloc(sizeof(char) * (len + 1));
	if (av2 == NULL)
		return (NULL);
	ch = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			av2[ch++] = av[i][j];
		av2[ch++] = '\n';
	}
	av2[ch] = '\0';
	return (av2);
}
