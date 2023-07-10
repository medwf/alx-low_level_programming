#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: NULL on faiure, or string.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	concat = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
