#include <stdlib.h>
#include <string.h>
char *copy_word(char *str, int len);
int count_words(char *str);
/**
 * copy_word - copy n number of string
 * @str: string
 * @len: size of string.
 * Return: string or NULL if is failes
 */
char *copy_word(char *str, int len)
{
	char *word;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	strncpy(word, str, len);
	word[len] = '\0';
	return (word);
}
/**
 * count_words - a function that count number of words
 * @str: pointers to string
 * Return: integer num of word
 */
int count_words(char *str)
{
	int num_words = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			num_words++;
		}
		str++;
	}
	return (num_words);
}
/**
 * strtow - a function that splits a string into words.
 * @str: pointers to string.
 * Return: Returns NULL if str == NULL or str == "".
 */
char **strtow(char *str)
{
	char **strtow;
	int i, j, l, len, num_wd;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_wd = count_words(str);

	strtow = malloc(sizeof(char *) * (num_wd + 1));
	if (strtow == NULL)
		return (NULL);
	i = 0;
	l = 0;
	while (str[i] != '\0' && l < num_wd)
	{
		/*skip spaces*/
		while (str[i] == ' ')
			i++;
		j = i;
		len = 0;
		/*len of words*/
		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
			len++;
		}
		strtow[l] = copy_word(str + i, len);
		if (strtow[l] == NULL)
		{
			/* Free the allocated memory in case of failure */
			while (l >= 0)
			{
				free(strtow[l]);
				l--;
			}
			free(strtow);
			return (NULL);
		}
		i = j;
		l++;
	}
	strtow[l] = NULL;
	return (strtow);
}
