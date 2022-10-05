#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to concatenate
 * @src: string to append
 * @n: numberof bytes from src to append
 * Return: A pointer to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
