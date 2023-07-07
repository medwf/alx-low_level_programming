#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 *@haystack: pr to string.
 *@needle: pr to sting.
 *Return: (haystack).
 */
char *_strstr(char *haystack, char *needle)
{
	while (!*haystack)
		return (haystack);

	while (*haystack)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
		haystack++;
	}
return (0);
}
