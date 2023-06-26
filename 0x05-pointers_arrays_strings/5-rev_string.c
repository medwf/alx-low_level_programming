#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: pointer to string.
 *Return: No return.
 */
void rev_string(char *s)
{
	int end_s = 0, start_s = 0;
	char ch;

	while (s[end_s] != '\0')
		end_s++;

	while (start_s < end_s / 2)
	{
		ch = s[start_s];
		s[start_s] = s[end_s - 1 - start_s];
		s[end_s - 1 - start_s] = ch;
		start_s++;
	}

}
