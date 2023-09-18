#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 *@dest: takes n bytes fron src.
 *@src: give n bytes to dest.
 *@n: size.
 *Return: return (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
