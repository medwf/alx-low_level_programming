#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: ptr to string.
 * @s2: ptr to string.
 * @n: size of string s2.
 * Return: null if it fails. or ptr.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ncouncat;
    unsigned int i = 0, j = 0;

    if (n < strlen(s2))
        ncouncat = malloc(sizeof(char) * (strlen(s1) + n + 1));
    else
        ncouncat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
    
    if (ncouncat == NULL)
        return (NULL);

    while (s1[i])
    {
        ncouncat[i] = s1[i];
        i++;
    }
    while (j < n && s2[j])
    {
        ncouncat[i] = s2[j];
        i++;
        j++;
    }
    ncouncat[i] = '\0';
    return (ncouncat);
}